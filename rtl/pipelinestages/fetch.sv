`timescale 1ns/1ps
module fetch #(
    parameter ADDR_WIDTH = 10,
    parameter INIT_HEX   = ""
) (
    input  logic        clk,
    input  logic        rst,

    // input  logic [31:0] pc_next, // Input PC next value
    input  logic        pc_sel,   // PC select signal
    input  logic [31:0] branch_target, // Branch target address

    output logic [31:0] pc,
    output logic [31:0] instr
);

    pcreg pcreg_inst (
        .clk(clk),
        .rst(rst),
        .branch_target(branch_target),
        .pc_sel(pc_sel),
        .pc(pc)
    );

    imem #(.ADDR_WIDTH(ADDR_WIDTH), .INIT_HEX(INIT_HEX)) imem_inst (
        .clk(clk),
        .en(1'b1),
        .addr(pc[ADDR_WIDTH+1:2]),
        .dout(instr)
    );



endmodule
