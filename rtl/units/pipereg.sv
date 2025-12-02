`timescale 1ns/1ps
module pipereg #(
    parameter type T = logic
)(
    input  logic clk,
    input  logic reset,
    input  logic stall,
    input  logic flush,
    input  T     d,
    output T     q
);
    always_ff @(posedge clk) begin
        if (reset || flush)
            q <= '0;
        else if (!stall)
            q <= d;
    end
endmodule
