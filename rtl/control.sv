module control(
    input   logic [31:0]    instr,
    output  logic [3:0]     alu_opcode
);
//6 Types of instructions
//R-type:  opcode=0110011
//I-type:  opcode=0000011 (load)
//         opcode=0010011 (ALU immediate)
//         opcode=1100111 (JALR)
//         opcode=1110011 (ecall, ebreak)
///S-type: opcode=0100011 (store)
//B-type:  opcode=1100011 (branch)
//U-type:  opcode=0110111 (LUI)
//         opcode=0010111 (AUIPC)
//J-type:  opcode=1101111 (JAL)

//IF -> ID -> EX -> MEM -> WB



    always_ff() begin
        
    end


endmodule control();