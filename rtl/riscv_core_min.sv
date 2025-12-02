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
    logic pc_sel = 0; // Placeholder for PC select logic
    logic [31:0] branch_target = 32'd0; // Placeholder for branch target logic

    // Fetch stage
    logic [31:0] instr;
    fetch #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .INIT_HEX("rtl/program/program.hex")
    ) fetch_inst (
        .clk(clk),
        .rst(rst),
        .pc_sel(pc_sel),
        .branch_target(branch_target),
        .pc(pc), 
        .instr(instr)
    );

    // // IF/ID pipeline register
    logic [31:0] D_pc;
    logic [31:0] D_instr;
    logic D_valid;
    pipereg #(
        .T(if_id_t)
    ) ifid_reg (
        .clk(clk),
        .reset(rst),
        .stall(1'b0),
        .flush(1'b0),
        .d( if_id_t'({ 1'b1, pc, instr }) ),
        .q( if_id_t'({ D_valid, D_pc, D_instr })) // Outputs to be connected to decode stage
    );

    // Control unit
    control_signals_t ctrl;
    control control_inst (
        .instr(D_instr), // placeholder; fixed below
        .control_signals(ctrl)
    );

    // always_comb begin
    //         $display("Control Signals: ALU Op = %0d, RegWen = %0b, ImmSel = %0d, A_sel = %0d, B_sel = %0d, rs1 = %0d, rs2 = %0d, rd = %0d",
    //          ctrl.alu_op, ctrl.regwen, ctrl.imm_sel, ctrl.A_sel, ctrl.B_sel, ctrl.rs1, ctrl.rs2, ctrl.rd);
    // end

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
        .wb_rd(5'd0), // Placeholder for writeback register address
        .wb_data(32'd0), // Placeholder for writeback data
        .wb_regwen(1'b0), // Placeholder for writeback register write enable
        .rs1(D_rs1),
        .rs2(D_rs2),
        .imm(D_imm),
        .take_branch(branch_taken)
    );





endmodule
