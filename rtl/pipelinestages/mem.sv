`timescale 1ns/1ps
module mem (
    input  logic         clk,
    input  logic         rst,

    // From EX/MEM pipeline register
    input  logic [31:0]  alu_result,
    input  logic [31:0]  rs2_data,
    input  logic         mem_we,        // store?
    input  logic         mem_ren,       // load?
    input  logic [3:0]   mem_byte_en,   // byte enables

    // To MEM/WB pipeline register
    output logic [31:0]  mem_rdata
);

    // Address narrowing (word-aligned)
    localparam ADDR_WIDTH = 10; // or whatever fits IMEM size

    dmem dmem_inst (
        .clk      (clk),
        .we       (mem_we),
        .byte_en  (mem_byte_en),
        .addr_w   (alu_result[ADDR_WIDTH+1:2]),
        .wdata    (rs2_data),

        .addr_r   (alu_result[ADDR_WIDTH+1:2]),
        .ren      (mem_ren),
        .rdata    (mem_rdata)
    );

endmodule
