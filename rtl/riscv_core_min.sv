`timescale 1ns/1ps
/* verilator lint_off MODDUP */
module riscv_core_min (
    input  logic clk,
    input  logic rst
);
    import control_pkg::*;
    import pipelinestages_pkg::*;
    localparam ADDR_WIDTH = 10; 
    
    // PC
    logic [31:0] pc;
    logic [31:0] branch_target = 32'hDEADBEEF; // Placeholder for branch target logic

    // Fetch stage
    logic [31:0] instr;
    fetch #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .INIT_HEX("rtl/program/program.hex")
    ) fetch_inst (
        .clk(clk),
        .rst(rst),
        .pc_sel(1'b0), // Placeholder for PC select logic
        .branch_target(branch_target),

        .pc(pc), 
        .instr(instr)
    );

    // // IF/ID pipeline register
    logic D_valid;
    logic [31:0] D_pc;
    logic [31:0] D_instr;
    pipereg #(
        .T(if_id_t)
    ) ifid_reg (
        .clk(clk),
        .reset(rst),
        .stall(1'b0),
        .flush(1'b0),

        .d( if_id_t'({
            1'b1, 
            pc, 
            instr 
            }) ),
        .q( if_id_t'({
            D_valid,
            D_pc,
            D_instr
            }) )
    );

    // Control unit
    control_signals_t ctrl;
    control control_inst (
        .instr(D_instr), 
        .control_signals(ctrl)
    );

    // Decode stage
    logic [31:0] D_imm ;
    logic [31:0] D_rs1, D_rs2;
    logic branch_taken;
    decode decode_inst (
        .clk(clk),
        .rst(rst),
        .instr(D_instr),
        .pc(D_pc),
        .ctrl_in(ctrl), 
        .wb_rd(wb_rd), // Placeholder for writeback register address
        .wb_data(wb_data), // Placeholder for writeback data
        .wb_regwen(wb_regwen), // Placeholder for writeback register write enable
        
        .rs1(D_rs1),
        .rs2(D_rs2),
        .imm(D_imm),
        .take_branch(branch_taken) 
    );

    // ID/EX pipeline register
    logic E_valid;
    
    logic [31:0] E_pc;
    logic [31:0] E_rs1, E_rs2;
    logic [31:0] E_imm;
    logic [4:0]  E_rd; 
    logic [3:0]  E_alu_op;

    logic [1:0]  E_A_sel;
    logic [1:0]  E_B_sel;
    logic        E_alu_src;
    logic        E_branch;
    logic        E_mem_read;
    logic        E_mem_write;
    logic        E_reg_write;
    logic        E_mem_to_reg;
    
    pipereg #(
        .T(id_ex_t)
    ) idex_reg (
        .clk(clk),
        .reset(rst),
        .stall(1'b0),
        .flush(1'b0),

        .d( id_ex_t'({
            D_valid,
            D_pc,
            D_rs1,
            D_rs2,
            D_imm,
            ctrl.rd,
            ctrl.alu_op,
            ctrl.A_sel,
            ctrl.B_sel,
            branch_taken, // branch
            1'b0, // mem_read placeholder
            1'b0, // mem_write placeholder
            ctrl.regwen, // reg_write
            1'b0  // mem_to_reg placeholder
        }) ),
        .q( id_ex_t'({
            E_valid,
            E_pc,
            E_rs1,
            E_rs2,
            E_imm,
            E_rd,
            E_alu_op,
            E_A_sel,
            E_B_sel,
            E_branch,
            E_mem_read,
            E_mem_write,
            E_reg_write,
            E_mem_to_reg
        }) )
    );

    // Execute stage
    logic [31:0] E_alu_result;
    logic        E_zero;
    logic        E_neg;
    logic        E_overflow;
    logic [31:0] E_sd; // Store data
    logic        E_br_taken;
    execute execute_inst (
        .clk(clk),
        .rst(rst),

        .rs1_data(E_rs1),
        .rs2_data(E_rs2),
        .imm(E_imm),
        .alu_op(E_alu_op),
        .A_sel(E_A_sel), 
        .B_sel(E_B_sel), 
        .pc(E_pc),
        .is_branch(E_branch),

        .alu_result(E_alu_result),
        .zero(E_zero),
        .neg(E_neg),
        .overflow(E_overflow),
        .sd(E_sd), 
        .br_taken(E_br_taken) 
    );

    // EX/MEM pipeline register
    logic M_valid;
    logic [31:0] M_alu_result;
    logic [31:0] M_rs2;
    logic [4:0]  M_rd;

    logic        M_mem_read;
    logic        M_mem_write;
    logic        M_reg_write;
    logic        M_mem_to_reg;
    pipereg #(
        .T(ex_mem_t)
    ) exmem_reg (
        .clk(clk),
        .reset(rst),
        .stall(1'b0),
        .flush(1'b0),

        .d( ex_mem_t'({
            E_valid,
            E_alu_result,
            E_sd,
            E_rd,
            E_mem_read,
            E_mem_write,
            E_reg_write,
            E_mem_to_reg
        }) ),
        .q( ex_mem_t'({
            M_valid,
            M_alu_result,
            M_rs2,
            M_rd,
            M_mem_read,
            M_mem_write,
            M_reg_write,
            M_mem_to_reg
        }) )
    );

    // MEM stage
    logic [31:0] M_mem_rdata;
    mem mem_inst (
        .clk(clk),
        .rst(rst),

        .alu_result(M_alu_result),
        .rs2_data(M_rs2),
        .mem_we(M_mem_write),
        .mem_ren(M_mem_read),
        .mem_byte_en(4'b1111), // Placeholder for byte enables

        .mem_rdata(M_mem_rdata) 
    );

    // MEM/WB pipeline register
    logic W_valid;
    logic [31:0] W_alu_or_mem_val;
    logic [4:0]  W_rd;
    logic        W_reg_write;
    
    pipereg #(
        .T(mem_wb_t)
    ) memwb_reg (
        .clk(clk),
        .reset(rst),
        .stall(1'b0),
        .flush(1'b0),

        .d( mem_wb_t'({
            M_valid,
            M_mem_to_reg ? M_mem_rdata : M_alu_result,
            M_rd,
            M_reg_write
        }) ),
        .q( mem_wb_t'({
            W_valid,
            W_alu_or_mem_val,
            W_rd,
            W_reg_write
        }) )
    );

    //Writeback stage
    logic [4:0]  wb_rd; 
    logic [31:0] wb_data;
    logic        wb_regwen;
    
    wb writeback_inst (
        .mem_data(M_mem_rdata),
        .alu_result(M_alu_result),
        .pc_plus_4(M_alu_result + 32'd4), // Placeholder for PC+4
        .wb_sel(M_mem_to_reg ? WB_FROM_MEM : WB_FROM_ALU), // Placeholder for WB select
        .rd_in(M_rd),
        .regwrite_in(M_reg_write),

        .wb_rd(wb_rd), 
        .wb_data(wb_data), 
        .wb_regwen(wb_regwen) 
    );

endmodule
