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

    // Branch forwarding inputs
    // input  fwd_sel_e          forwardA_br,
    // input  fwd_sel_e          forwardB_br,
    // input  logic [31:0]       ex_mem_alu_result,
    // input  logic [31:0]       mem_wb_alu_or_mem_val,

    // Outputs to ID/EX pipeline register
    output logic [31:0]       rs1, 
    output logic [31:0]       rs2,
    output logic [31:0]       imm
    //output logic              take_branch
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

    immgen immgen_inst (
        .instr(instr),
        .imm_sel(ctrl_in.imm_sel),
        .imm_out(imm)
    );

    // logic [31:0] rs1_br;
    // logic [31:0] rs2_br;

    // always_comb begin
    //     unique case (forwardA_br)
    //         FWD_NONE: rs1_br = rs1;
    //         FWD_EXMEM: rs1_br = ex_mem_alu_result;
    //         FWD_MEMWB: rs1_br = mem_wb_alu_or_mem_val;
    //         default: rs1_br = 32'hDEADBEEF;
    //     endcase
    //     unique case (forwardB_br)
    //         FWD_NONE: rs2_br = rs2;
    //         FWD_EXMEM: rs2_br = ex_mem_alu_result;
    //         FWD_MEMWB: rs2_br = mem_wb_alu_or_mem_val;
    //         default: rs2_br = 32'hDEADBEEF;
    //     endcase
    // end

    // brcmp brcmp_inst (
    //     .rs1(rs1_br),
    //     .rs2(rs2_br),
    //     .branch_type(ctrl_in.branch_type),
    //     .take_branch(take_branch)
    // );

endmodule
