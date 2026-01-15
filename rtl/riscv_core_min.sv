`timescale 1ns/1ps
/* verilator lint_off MODDUP */
module riscv_core_min (
    input  logic clk,
    input  logic rst
);
    import control_pkg::*;
    import pipelinestages_pkg::*;
    localparam ADDR_WIDTH = 10; 

    // Fetch stage
    // logic [31:0] branch_target = 32'hDEADBEEF; // Placeholder for branch target logic

    logic [31:0] pc;
    logic [31:0] pc_previous;
    logic [31:0] instr;
    fetch #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .INIT_HEX("rtl/program/program.hex")
    ) fetch_inst (
        .clk(clk),
        .rst(rst),
        .pc_sel(E_take_branch), 
        .branch_target(E_alu_result), 
        .pc_stall(stall_pc), // Placeholder; no stalling logic yet

        .pc(pc), 
        .pc_previous(pc_previous),
        .instr(instr)
    );

    // // IF/ID pipeline register
    if_id_t if_id_reg_d;
    if_id_t if_id_reg_q;
    
    always_comb begin
        if_id_reg_d.valid = !stall_ifid; 
        if_id_reg_d.pc    = pc_previous;
        if_id_reg_d.instr = instr;
    end

    pipereg #(
        .T(if_id_t)
    ) ifid_reg (
        .clk(clk),
        .reset(rst),
        .stall(stall_ifid),
        .flush(flush_ifid),

        .d( if_id_t'({
            if_id_reg_d
        }) ),
        .q( if_id_t'({
            if_id_reg_q
        }) )
    );

    // Control unit
    control_signals_t ctrl; //global scope; bad 
    control control_inst (
        .instr(if_id_reg_q.instr), 
        .control_signals(ctrl) 
    );

    // Decode stage
    logic [31:0] D_imm ;
    logic [31:0] D_rs1, D_rs2;
    //logic D_take_branch;
    decode decode_inst (
        .clk(clk),
        .rst(rst),
        .instr(if_id_reg_q.instr),
        .pc(if_id_reg_q.pc),
        .ctrl_in(ctrl), 
        .wb_rd(wb_rd), // Placeholder for writeback register address
        .wb_data(wb_data), // Placeholder for writeback data
        .wb_regwen(wb_regwen), // Placeholder for writeback register write enable
        //.forwardA_br(forwardA_br),
        //.forwardB_br(forwardB_br),
        //.ex_mem_alu_result(ex_mem_reg_q.alu_result),
        //.mem_wb_alu_or_mem_val(mem_wb_reg_q.alu_or_mem_val),

        .rs1(D_rs1),
        .rs2(D_rs2),
        .imm(D_imm)
        //.take_branch(D_take_branch) 
    );

    // ID/EX pipeline register
    id_ex_t id_ex_reg_d; 
    id_ex_t id_ex_reg_q;
    always_comb begin
        id_ex_reg_d.valid        = if_id_reg_q.valid;
        id_ex_reg_d.pc           = if_id_reg_q.pc;
        id_ex_reg_d.rs1         = D_rs1;
        id_ex_reg_d.rs2         = D_rs2;
        id_ex_reg_d.imm         = D_imm;
        id_ex_reg_d.rd          = ctrl.rd;
        id_ex_reg_d.alu_op      = ctrl.alu_op;
        id_ex_reg_d.A_sel       = ctrl.A_sel;
        id_ex_reg_d.B_sel       = ctrl.B_sel;
        //id_ex_reg_d.take_branch      = D_take_branch; 
        id_ex_reg_d.rs1_id      = ctrl.rs1;
        id_ex_reg_d.rs2_id      = ctrl.rs2;
        id_ex_reg_d.mem_read    = 1'b0; // placeholder
        id_ex_reg_d.mem_write   = 1'b0; // placeholder
        id_ex_reg_d.reg_write   = ctrl.regwen;
        id_ex_reg_d.wb_sel  = ctrl.wb_sel; // placeholder
        id_ex_reg_d.branch_type = ctrl.branch_type;
        id_ex_reg_d.instruction_type = ctrl.instruction_type; // for debugging
    end
    //only time we can pass ctrl signals is here, otherwise need to pass along
    pipereg #(
        .T(id_ex_t)
    ) idex_reg (
        .clk(clk),
        .reset(rst),
        .stall(1'b0),
        .flush(flush_idex),

        .d( id_ex_t'({
            id_ex_reg_d
        }) ),
        .q( id_ex_t'({
            id_ex_reg_q
        }) )
    );

    // Forwarding unit
    a_sel_e forwardA;
    b_sel_e forwardB;
    fwd_sel_e forwardA_br;
    fwd_sel_e forwardB_br;
    forwardingunit forwardingunit_inst (
        .id_ex_rs1(id_ex_reg_q.rs1_id), 
        .id_ex_rs2(id_ex_reg_q.rs2_id), 
        .ex_mem_rd(ex_mem_reg_q.rd),
        .ex_mem_reg_write(ex_mem_reg_q.reg_write),
        .mem_wb_rd(mem_wb_reg_q.rd),
        .mem_wb_reg_write(mem_wb_reg_q.reg_write),
        .ex_A_sel(id_ex_reg_q.A_sel),
        .ex_B_sel(id_ex_reg_q.B_sel),
        .if_id_rs1(id_ex_reg_q.rs1_id), 
        .if_id_rs2(id_ex_reg_q.rs2_id), 

        .forwardA_alu(forwardA),
        .forwardB_alu(forwardB),
        .forwardA_br(forwardA_br), 
        .forwardB_br(forwardB_br)  
    );

    // Hazard unit
    logic        stall_pc;
    logic        stall_ifid;
    logic        flush_ifid;
    logic        flush_idex;
    hazardunit hazard_unit_inst (
        .id_valid(if_id_reg_q.valid),
        .id_rs1(if_id_reg_q.instr[19:15]),
        .id_rs2(if_id_reg_q.instr[24:20]),
        .id_instruction_type(if_id_reg_q.instr[6:0]),
        .ex_instruction_type(id_ex_reg_q.instruction_type),
        // .id_uses_rs1(1'b1), // Placeholder; should be determined from instruction
        // .id_uses_rs2(1'b1), // Placeholder; should be determined from instruction

        .ex_valid(id_ex_reg_q.valid),
        .ex_rd(id_ex_reg_q.rd),
        // .ex_is_load(id_ex_reg_q.instruction_type == INSTRUCTION_TYPE_LOAD), 

        // .ex_branch(id_ex_reg_q.instruction_type == INSTRUCTION_TYPE_BRANCH), 
        // .ex_jump(id_ex_reg_q.instruction_type == INSTRUCTION_TYPE_JUMP), 
        .ex_taken(E_take_branch),
        .ex_target(E_alu_result),
        .ex_pc_plus_4(id_ex_reg_q.pc + 32'd4), 

        .stall_pc(stall_pc),
        .stall_ifid(stall_ifid),
        .flush_ifid(flush_ifid),
        .flush_idex(flush_idex)
    );

    // Execute stage
    logic [31:0] E_alu_result;
    logic        E_zero;
    logic        E_neg;
    logic        E_overflow;
    logic [31:0] E_sd; // Store data
    logic        E_take_branch;
    execute execute_inst (
        .clk(clk),
        .rst(rst),
        .valid(id_ex_reg_q.valid),

        .rs1_data(id_ex_reg_q.rs1),
        .rs2_data(id_ex_reg_q.rs2),
        .exmem_forwarded_data(ex_mem_reg_q.alu_result),
        .memwb_forwarded_data(mem_wb_reg_q.wb_sel[0] ? mem_wb_reg_q.mem_data : mem_wb_reg_q.alu_result),
        .imm(id_ex_reg_q.imm),
        .alu_op(id_ex_reg_q.alu_op),
        .A_sel(forwardA), 
        .B_sel(forwardB), 
        .pc(id_ex_reg_q.pc),
        
        .rs1(id_ex_reg_q.rs1),
        .rs2(id_ex_reg_q.rs2),
        .forwardA_br(forwardA_br),
        .forwardB_br(forwardB_br),
        .ex_mem_alu_result(ex_mem_reg_q.alu_result),
        .mem_wb_alu_or_mem_val(mem_wb_reg_q.wb_sel[0] ? mem_wb_reg_q.mem_data : mem_wb_reg_q.alu_result),
        .branch_type(id_ex_reg_q.branch_type),

        .alu_result(E_alu_result),
        .zero(E_zero),
        .neg(E_neg),
        .overflow(E_overflow),
        .sd(E_sd),
        .take_branch(E_take_branch)
    );

    // EX/MEM pipeline register
    ex_mem_t ex_mem_reg_d;
    ex_mem_t ex_mem_reg_q;
    always_comb begin
        ex_mem_reg_d.valid        = id_ex_reg_q.valid;
        ex_mem_reg_d.pc_plus_4    = id_ex_reg_q.pc + 32'd4;  // ADD THIS LINE
        ex_mem_reg_d.alu_result   = E_alu_result;
        ex_mem_reg_d.rs2          = E_sd;
        ex_mem_reg_d.rd           = id_ex_reg_q.rd;
        ex_mem_reg_d.mem_read     = id_ex_reg_q.mem_read;
        ex_mem_reg_d.mem_write    = id_ex_reg_q.mem_write;
        ex_mem_reg_d.reg_write    = id_ex_reg_q.reg_write;
        ex_mem_reg_d.wb_sel       = id_ex_reg_q.wb_sel;
    end
    
    pipereg #(
        .T(ex_mem_t)
    ) exmem_reg (
        .clk(clk),
        .reset(rst),
        .stall(1'b0),
        .flush(1'b0),

        .d( ex_mem_t'({
            ex_mem_reg_d
        }) ),
        .q( ex_mem_t'({
            ex_mem_reg_q
        }) )
    );

    // MEM stage
    logic [31:0] M_mem_rdata;
    mem mem_inst (
        .clk(clk),
        .rst(rst),

        .alu_result(ex_mem_reg_q.alu_result),
        .rs2_data(ex_mem_reg_q.rs2),
        .mem_we(ex_mem_reg_q.mem_write),
        .mem_ren(ex_mem_reg_q.mem_read),
        .mem_byte_en(4'b1111), // Placeholder for byte enables

        .mem_rdata(M_mem_rdata) 
    );

    // MEM/WB pipeline register
    mem_wb_t mem_wb_reg_d;
    mem_wb_t mem_wb_reg_q;
    always_comb begin
        mem_wb_reg_d.valid        = ex_mem_reg_q.valid;
        mem_wb_reg_d.pc_plus_4    = ex_mem_reg_q.pc_plus_4;  
        mem_wb_reg_d.alu_result   = ex_mem_reg_q.alu_result; 
        mem_wb_reg_d.mem_data     = M_mem_rdata;              
        mem_wb_reg_d.rd           = ex_mem_reg_q.rd;
        mem_wb_reg_d.reg_write    = ex_mem_reg_q.reg_write;
        mem_wb_reg_d.wb_sel       = ex_mem_reg_q.wb_sel;
    end
    
    pipereg #(
        .T(mem_wb_t)
    ) memwb_reg (
        .clk(clk),
        .reset(rst),
        .stall(1'b0),
        .flush(1'b0),

        .d( mem_wb_t'({
            mem_wb_reg_d
        }) ),
        .q( mem_wb_t'({
            mem_wb_reg_q
        }) )
    );

    //Writeback stage
    logic [4:0]  wb_rd; 
    logic [31:0] wb_data;
    logic        wb_regwen;
    
    wb writeback_inst (
        .mem_data(mem_wb_reg_q.mem_data),     // CHANGED
        .alu_result(mem_wb_reg_q.alu_result), // CHANGED
        .pc_plus_4(mem_wb_reg_q.pc_plus_4),   // CHANGED
        .wb_sel(mem_wb_reg_q.wb_sel),         // CHANGED
        .rd_in(mem_wb_reg_q.rd),
        .regwrite_in(mem_wb_reg_q.reg_write),

        .wb_rd(wb_rd), 
        .wb_data(wb_data), 
        .wb_regwen(wb_regwen) 
    );

endmodule
