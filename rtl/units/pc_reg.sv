module pc_reg (
    input logic clk, reset,
    input logic [31:0] pc_next,
    output logic [31:0] pc
);
    always_ff @(posedge clk) begin
        if (reset) pc <= 0;
        else pc <= pc_next;
    end
    
endmodule
