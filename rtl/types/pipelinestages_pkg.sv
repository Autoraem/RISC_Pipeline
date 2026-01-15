`timescale 1ns/1ps
package pipelinestages_pkg;
    import control_pkg::*;
    // IF/ID pipeline register type
    typedef struct packed {
        logic        valid;
        logic [31:0] pc;
        logic [31:0] instr;
    } if_id_t;

    // ID/EX pipeline register type
    typedef struct packed {
        logic        valid;
        
        logic [31:0] pc;
        logic [31:0] rs1;
        logic [31:0] rs2;
        logic [31:0] imm;
        logic [4:0]  rd;
        logic [3:0]  alu_op;

        logic [2:0]  A_sel;  // FIXED: 3 bits for 5 enum values
        logic [2:0]  B_sel;  // FIXED: 3 bits for 5 enum values
        logic [4:0]  rs1_id;
        logic [4:0]  rs2_id;
        logic        mem_read;
        logic        mem_write;
        logic        reg_write;
        logic [1:0]  wb_sel; // FIXED: 2 bits for 3 enum values (WB_FROM_ALU/MEM/PC_PLUS_4)
        branch_type_e branch_type;
        instruction_type_e instruction_type; 
    } id_ex_t;

    // EX/MEM pipeline register type
    typedef struct packed {
        logic        valid;
        
        logic [31:0] pc_plus_4;    // ADDED: for JAL/JALR writeback
        logic [31:0] alu_result;
        logic [31:0] rs2;
        logic [4:0]  rd;

        logic        mem_read;
        logic        mem_write;
        logic        reg_write;
        logic [1:0]  wb_sel;       // FIXED: 2 bits for 3 enum values
    } ex_mem_t;

    // MEM/WB pipeline register type
    typedef struct packed {
        logic        valid;
        
        logic [31:0] pc_plus_4;    // ADDED: for JAL/JALR writeback
        logic [31:0] alu_result;   // SPLIT: separate ALU result
        logic [31:0] mem_data;     // SPLIT: separate memory data
        logic [4:0]  rd;

        logic        reg_write;
        logic [1:0]  wb_sel;       // FIXED: 2 bits for 3 enum values
    } mem_wb_t;
endpackage