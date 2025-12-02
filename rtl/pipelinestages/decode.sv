`timescale 1ns/1ps
module decode (
    input  logic              clk,
    input  logic              rst,

    // From IF/ID pipeline register
    input  logic [31:0]       instr,
    input  logic [31:0]       pc,
    input  control_signals_t  ctrl_in,

    // Register file writeback port (from WB stage)
    input  logic [4:0]        wb_rd,
    input  logic [31:0]       wb_data,
    input  logic              wb_regwen,

    // Outputs to ID/EX pipeline register
    output logic [31:0]       rs1, 
    output logic [31:0]       rs2,
    output logic [31:0]       imm,
    output logic              take_branch
);

    import control_pkg::*;

    regfile regfile_inst (
        .clk(clk),
        .rst(rst),
        .we(wb_regwen),
        .rs1(ctrl_in.rs1), // rs1 address
        .rs2(ctrl_in.rs2), // rs2 address
        .rd(wb_rd),
        .wd(wb_data),
        .rd1(rs1), // rs1 data
        .rd2(rs2) // rs2 data
    );

    always_comb begin
        // $display("Decode Stage: Instr = %h, rs1 = %0d, rs2 = %0d, rd = %0d, imm = %0d, take_branch = %0b",
        //          instr, ctrl_in.rs1, ctrl_in.rs2, ctrl_in.rd, imm, take_branch);
        // $display("Output: rs1 data = %h, rs2 data = %h", rs1, rs2);
        // $display("ALU op: %0d", ctrl_in.alu_op);
    end

    immgen immgen_inst (
        .instr(instr),
        .imm_sel(ctrl_in.imm_sel),
        .imm_out(imm)
    );

    brcmp brcmp_inst (
        .rs1(rs1),
        .rs2(rs2),
        .funct3(ctrl_in.alu_op[2:0]),
        .take_branch(take_branch)
    );

endmodule
