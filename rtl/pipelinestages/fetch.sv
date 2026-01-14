`timescale 1ns/1ps
module fetch #(
    parameter ADDR_WIDTH = 10,
    parameter INIT_HEX   = ""
) (
    input  logic        clk,
    input  logic        rst,

    input  logic        pc_sel,   // PC select signal
    input  logic [31:0] branch_target, // Branch target address
    input  logic        pc_stall, // PC stall signal
    
    output logic [31:0] pc,
    output logic [31:0] pc_previous,
    output logic [31:0] instr
);

    pcreg pcreg_inst (
        .clk(clk),
        .rst(rst),
        .branch_target(branch_target),
        .pc_sel(pc_sel),
        .pc_stall(pc_stall), // Placeholder; no stalling logic yet
        .pc(pc),
        .pc_previous(pc_previous)
    );

    imem #(.ADDR_WIDTH(ADDR_WIDTH), .INIT_HEX(INIT_HEX)) imem_inst (
        .clk(clk),
        .en(1'b1),
        .addr(pc[ADDR_WIDTH+1:2]),
        .dout(instr)
    );



endmodule
