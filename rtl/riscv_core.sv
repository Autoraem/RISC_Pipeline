module riscv_core (
    input  logic clk,
    input  logic reset
);

    import control_pkg::*;
    import IFID_pkg::*;
    import IDEX_pkg::*;
    import EXMEM_pkg::*;
    import MEMWB_pkg::*;

    // ------------------------------
    // Pipeline Register Wires
    // ------------------------------
    IFID_t  ifid_q,  ifid_d;
    IDEX_t  idex_q,  idex_d;
    EXMEM_t exmem_q, exmem_d;
    MEMWB_t memwb_q, memwb_d;

    // ------------------------------
    // Fetch Stage
    // ------------------------------
    logic [31:0] pc_next;
    logic [31:0] pc;
    logic [31:0] instr;

    fetch fetch_inst (
        .clk(clk),
        .reset(reset),
        .pc_next(pc_next),
        .pc(pc),
        .instruction(instr)
    );

    // IF/ID Pipeline Register
    pipelinereg #(.T(IFID_t)) IFID (
        .clk(clk),
        .reset(reset),
        .d(ifid_d),
        .q(ifid_q)
    );

    assign ifid_d.pc    = pc;
    assign ifid_d.instr = instr;

    // ------------------------------
    // Decode Stage
    // ------------------------------
    logic [31:0] rs1_data, rs2_data, imm;
    control_signals_t ctrl_out;
    logic             take_branch;

    decode decode_inst (
        .clk(clk),
        .reset(reset),
        .instr(ifid_q.instr),
        .pc(ifid_q.pc),
        .ctrl_in(ctrl_out),
        .wb_rd(memwb_q.rd),
        .wb_data(wb_data),
        .wb_regwen(memwb_q.regwrite),
        .rs1_data(rs1_data),
        .rs2_data(rs2_data),
        .imm(imm),
        .take_branch(take_branch)
    );

    // ID/EX Pipeline Register
    pipelinereg #(.T(IDEX_t)) IDEX (
        .clk(clk),
        .reset(reset),
        .d(idex_d),
        .q(idex_q)
    );

    assign idex_d = '{
        rs1_data: rs1_data,
        rs2_data: rs2_data,
        imm:      imm,
        pc:       ifid_q.pc,
        ctrl:     ctrl_out
    };

    // ------------------------------
    // Execute Stage
    // ------------------------------
    logic [31:0] alu_result, sd;
    logic br_taken;

    execute execute_inst (
        .clk(clk),
        .reset(reset),
        .rs1_data(idex_q.rs1_data),
        .rs2_data(idex_q.rs2_data),
        .imm(idex_q.imm),
        .alu_op(idex_q.ctrl.alu_op),
        .A_sel(idex_q.ctrl.A_sel),
        .B_sel(idex_q.ctrl.B_sel),
        .pc(idex_q.pc),
        .is_branch(idex_q.ctrl.is_branch),
        .alu_result(alu_result),
        .sd(sd),
        .br_taken(br_taken)
    );

    // EX/MEM Pipeline Register
    pipelinereg #(.T(EXMEM_t)) EXMEM (
        .clk(clk),
        .reset(reset),
        .d(exmem_d),
        .q(exmem_q)
    );

    assign exmem_d = '{
        alu_result: alu_result,
        sd:         sd,
        ctrl:       idex_q.ctrl.MEM
    };

    // ------------------------------
    // MEM Stage
    // ------------------------------
    logic [31:0] mem_data;

    mem mem_inst (
        .clk(clk),
        .reset(reset),
        .alu_result(exmem_q.alu_result),
        .sd(exmem_q.sd),
        .mem_read(exmem_q.ctrl.mem_read),
        .mem_write(exmem_q.ctrl.mem_write),
        .mem_data(mem_data)
    );

    // MEM/WB Pipeline Register
    pipelinereg #(.T(MEMWB_t)) MEMWB (
        .clk(clk),
        .reset(reset),
        .d(memwb_d),
        .q(memwb_q)
    );

    assign memwb_d = '{
        alu_result: exmem_q.alu_result,
        mem_data:   mem_data,
        ctrl:       exmem_q.ctrl.WB
    };

    // ------------------------------
    // Writeback Stage
    // ------------------------------
    logic [31:0] wb_data;

    wb wb_inst (
        .mem_data(memwb_q.mem_data),
        .alu_result(memwb_q.alu_result),
        .mem_to_reg(memwb_q.ctrl.mem_to_reg),
        .wb_data(wb_data)
    );

    // ------------------------------
    // PC Select (Prefetch)
    // ------------------------------
    prefetch prefetch_inst (
        .pc_plus_4(pc + 32'd4),
        .alu_result(alu_result),
        .pc_sel(ctrl_out.pc_sel),
        .pc_next(pc_next)
    );

endmodule
