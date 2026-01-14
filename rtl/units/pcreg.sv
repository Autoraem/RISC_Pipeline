`timescale 1ns/1ps
module pcreg (
    input logic clk, rst,
    
    input logic [31:0] branch_target,
    input logic pc_sel,
    input logic pc_stall,
    output logic [31:0] pc,
    output logic [31:0] pc_previous
);

    logic [31:0] pc_next;
    logic [31:0] pc_plus4;
    assign pc_plus4 = pc + 32'd4;
    // PC next logic
    always_comb begin
        if (pc_stall) begin
            pc_next = pc; // Hold current PC if stalled
            // Do I need to output previous pc here?
        end
        else begin
            unique case (pc_sel)
                0: pc_next = pc_plus4;
                1: pc_next = branch_target;
                default:   pc_next = pc_plus4;
            endcase
        end
    end

    always_ff @(posedge clk) begin
        if (rst) pc <= 0;
        else begin 
            pc_previous <= pc;
            pc <= pc_next;
        end
    end
    

endmodule
