`timescale 1ns/1ps
package control_pkg;

    // -------------------------
    // ALU operations
    // -------------------------
    typedef enum logic [3:0] {
        ALU_ADD,
        ALU_SUB,
        ALU_AND,
        ALU_OR,
        ALU_XOR,
        ALU_SLL,
        ALU_SRL,
        ALU_SRA,
        ALU_SLT,
        ALU_SLTU
    } alu_op_e;

    // -------------------------
    // Immediate selection
    // -------------------------
    typedef enum logic [2:0] {
        IMM_I,
        IMM_S,
        IMM_B,
        IMM_U,
        IMM_J,
        IMM_NONE
    } imm_sel_e;

    // -------------------------
    // Operand A/B select
    // -------------------------
    typedef enum logic [2:0] {
        SRC_A_RS1,
        SRC_A_PC,
        SRC_A_ZERO,
        SRC_A_EXMEM, // for forwarding unit use
        SRC_A_MEMWB  // for forwarding unit use
    } a_sel_e;

    typedef enum logic [2:0] {
        SRC_B_RS2,
        SRC_B_IMM,
        SRC_B_FOUR, 
        SRC_B_EXMEM, // for forwarding unit use
        SRC_B_MEMWB  // for forwarding unit use 
    } b_sel_e;

    // WB select
    typedef enum logic [1:0] {
        WB_FROM_ALU,
        WB_FROM_MEM,
        WB_FROM_PC_PLUS_4
    } wb_sel_e;

    // Branch type
    typedef enum logic [2:0] {
        BR_EQ,  
        BR_NE,  
        BR_LT,  
        BR_GE,  
        BR_LTU, 
        BR_GEU,
        BR_NONE,
        BR_UNCOND   // for JAL/JALR 
    } branch_type_e;

    // Type of instruction
    typedef enum logic [6:0] {
        OP_R_TYPE    = 7'b0110011,
        OP_I_TYPE    = 7'b0010011,
        OP_LOAD      = 7'b0000011,
        OP_STORE     = 7'b0100011,
        OP_BRANCH    = 7'b1100011,
        OP_JAL       = 7'b1101111,
        OP_JALR      = 7'b1100111,
        OP_LUI       = 7'b0110111,
        OP_AUIPC     = 7'b0010111,
        OP_SYSTEM    = 7'b1110011,
        OP_FENCE     = 7'b0001111,
        OP_NOP       = 7'b0000000
    } instruction_type_e;

    typedef enum logic [1:0] {
        FWD_NONE, // Branch ready
        FWD_EXMEM,
        FWD_MEMWB
    } fwd_sel_e;

    // -------------------------
    // Control bundle
    // -------------------------
    typedef struct packed {
        alu_op_e    alu_op;
        logic       regwen;
        imm_sel_e   imm_sel;
        a_sel_e     A_sel;
        b_sel_e     B_sel;
        wb_sel_e     wb_sel;
        branch_type_e branch_type;
        instruction_type_e     instruction_type; //debugging purpose

        logic [4:0] rs1;
        logic [4:0] rs2;
        logic [4:0] rd;
    } control_signals_t;

endpackage
