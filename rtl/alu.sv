module alu(
    input   logic [31:0]    A,
    input   logic [31:0]    B,
    input   logic [3:0]     Opcode,
    output  logic [31:0]    Q,
    output  logic          Zero,   
    output  logic          Neg,    
    output  logic          Overflow
);  
//ADD, SUB, AND, OR, XOR, SHIFT (R, L, Arthimetic), SLT (signed, unsigned)
//Immediate versions, values stored in B, need immediate generator
//Values in A and B are data not addresses
logic [4:0] shamt; //shift amount

always_comb begin
    shamt = B[4:0];
    case (Opcode)
        4'd0: Q = A + B; //ADD
        4'd1: Q = A - B; //SUB
        4'd2: Q = A & B; //AND
        4'd3: Q = A | B; //OR
        4'd4: Q = A ^ B; //XOR
        4'd5: Q = A << shamt; //SLL 
        4'd6: Q = A >> shamt; //SRL 
        4'd7: Q = A >>> shamt; //SRA 
        4'd8: Q = ($signed(A) < $signed(B)) ? 1 : 0; //SLT
        4'd9: Q = ($unsigned(A) < $unsigned(B)) ? 1 : 0; //SLTU
        default: Q = 32'b0;
    endcase
    //Flags
    Zero = (Q == 32'b0) ? 1'b1 : 1'b0;
    Neg = Q[31];
    Overflow = 1'b0; // Placeholder
end


endmodule alu();
