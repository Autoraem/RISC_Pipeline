`timescale 1ns/1ps
module pcreg (
    input logic clk, rst,
    
    input logic [31:0] branch_target,
    input logic pc_sel,
    output logic [31:0] pc
);

    logic [31:0] pc_next;
    logic [31:0] pc_plus4;
    assign pc_plus4 = pc + 32'd4;
    // PC next logic
    always_comb begin
        unique case (pc_sel)
            0: pc_next = pc_plus4;
            1: pc_next = branch_target;
            default:   pc_next = 32'b0;
        endcase
    end

    always_ff @(posedge clk) begin
        if (rst) pc <= 0;
        else pc <= pc_next;
    end
    
endmodule
