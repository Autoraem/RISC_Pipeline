module alu(
    input   logic [31:0]    A,
    input   logic [31:0]    B,
    input   logic [3:0]     Opcode,
    output  logic [31:0]    Q
    // Considerations for zero, negative, overflow flags? Useful for future additions.
);  

    always_comb begin
        case (Opcode)
            4'b0000: Q = A + B;          // ADD
            4'b0001: Q = A - B;          // SUB
            4'b0010: Q = A & B;          // AND
            4'b0011: Q = A | B;          // OR
            4'b0100: Q = A ^ B;          // XOR
            4'b0101: Q = ~(A | B);       // NOR
            4'b0110: Q = A << B[4:0];    // SLL
            4'b0111: Q = A >> B[4:0];    // SRL
            4'b1000: Q = $signed(A) >>> B[4:0]; // SRA
            4'b1001: Q = (A < B) ? 32'b1 : 32'b0; // SLT
            default: Q = 32'b0;           // NOP or undefined operation
        endcase


endmodule alu();
