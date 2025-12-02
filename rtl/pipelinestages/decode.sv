`timescale 1ns/1ps
module decode (
    input  logic              clk,
    input  logic              reset,

    // From IF/ID pipeline register
    input  logic [31:0]       instr,
    input  logic [31:0]       pc,
    input  control_signals_t  ctrl_in,

    // Register file writeback port (from WB stage)
    input  logic [4:0]        wb_rd,
    input  logic [31:0]       wb_data,
    input  logic              wb_regwen,

    // Outputs to ID/EX pipeline register
    output logic [31:0]       rs1_data,
    output logic [31:0]       rs2_data,
    output logic [31:0]       imm,
    output logic              take_branch
);

    import control_pkg::*;

    regfile regfile_inst (
        .clk(clk),
        .rs1_addr(ctrl_in.rs1),
        .rs2_addr(ctrl_in.rs2),
        .rd_addr(wb_rd),
        .rd_data(wb_data),
        .regwen(wb_regwen),
        .rs1_data(rs1_data),
        .rs2_data(rs2_data)
    );

    immgen immgen_inst (
        .instr(instr),
        .imm_sel(ctrl_in.imm_sel),
        .imm_out(imm)
    );

    brcmp brcmp_inst (
        .rs1_data(rs1_data),
        .rs2_data(rs2_data),
        .br_type(ctrl_in.br_type),
        .take_branch(take_branch)
    );

endmodule
