import alu_pkg::*;

module alucontrol (
    input  logic [6:0] opcode,
    input  logic [2:0] funct3,
    input  logic [6:0] funct7,
    input  logic       alu_src_b_is_imm, // from main control
    output alu_op_e    alu_op
);

    always_comb begin
        unique case (opcode)

            // -------------------------------------
            // Load/store (just add)
            // -------------------------------------
            7'b0000011,    // LOAD
            7'b0100011:    // STORE
                alu_op = ALU_ADD; 

            // -------------------------------------
            // LUI / AUIPC
            // -------------------------------------
            7'b0110111: alu_op = ALU_ADD; // LUI uses ALU as passthrough; can be NOP
            7'b0010111: alu_op = ALU_ADD; // AUIPC = PC + imm

            // -------------------------------------
            // Branches (compare via ALU SUB)
            // -------------------------------------
            7'b1100011:
                alu_op = ALU_SUB;

            // -------------------------------------
            // Immediate arithmetic
            // -------------------------------------
            7'b0010011: begin
                unique case (funct3)
                    3'b000: alu_op = ALU_ADD; // ADDI
                    3'b010: alu_op = ALU_SLT; // SLTI
                    3'b011: alu_op = ALU_SLTU; // SLTIU
                    3'b100: alu_op = ALU_XOR; // XORI
                    3'b110: alu_op = ALU_OR;  // ORI
                    3'b111: alu_op = ALU_AND; // ANDI

                    3'b001: alu_op = ALU_SLL; // SLLI
                    3'b101: begin
                        if (funct7[5]) alu_op = ALU_SRA; // SRAI
                        else           alu_op = ALU_SRL; // SRLI
                    end

                    default: alu_op = ALU_ADD;
                endcase
            end

            // -------------------------------------
            // Register-register arithmetic
            // -------------------------------------
            7'b0110011: begin
                unique case ({funct7[5], funct3})
                    {1'b0,3'b000}: alu_op = ALU_ADD;
                    {1'b1,3'b000}: alu_op = ALU_SUB;

                    {1'b0,3'b111}: alu_op = ALU_AND;
                    {1'b0,3'b110}: alu_op = ALU_OR;
                    {1'b0,3'b100}: alu_op = ALU_XOR;

                    {1'b0,3'b001}: alu_op = ALU_SLL;
                    {1'b0,3'b101}: alu_op = ALU_SRL;
                    {1'b1,3'b101}: alu_op = ALU_SRA;

                    {1'b0,3'b010}: alu_op = ALU_SLT;
                    {1'b0,3'b011}: alu_op = ALU_SLTU;

                    default:        alu_op = ALU_ADD;
                endcase
            end

            default: alu_op = ALU_ADD;

        endcase
    end

endmodule
