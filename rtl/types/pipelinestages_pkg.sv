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

        logic [2:0]  A_sel;           // FIXED: Changed to 3 bits to match a_sel_e 
        logic [2:0]  B_sel;           // FIXED: Changed to 3 bits to match b_sel_e
        logic [4:0]  rs1_id;
        logic [4:0]  rs2_id;
        
        logic        mem_read;
        logic        mem_write;
        logic        reg_write;
        wb_sel_e     wb_sel;          // FIXED: Changed from mem_to_reg to wb_sel (proper type)
        
        branch_type_e branch_type;
        instruction_type_e instruction_type; 
    } id_ex_t;

    // EX/MEM pipeline register type
    typedef struct packed {
        logic        valid;

        logic [31:0] pc_plus_4;       // FIXED: Added PC+4 for JAL/JALR
        logic [31:0] alu_result;
        logic [31:0] rs2;
        logic [4:0]  rd;

        logic        mem_read;
        logic        mem_write;
        logic        reg_write;
        wb_sel_e     wb_sel;          // FIXED: Changed from mem_to_reg to wb_sel
    } ex_mem_t;

    // MEM/WB pipeline register type
    typedef struct packed {
        logic        valid;

        logic [31:0] pc_plus_4;       // FIXED: Added PC+4 for JAL/JALR
        logic [31:0] alu_result;      // FIXED: Separated alu_result
        logic [31:0] mem_data;        // FIXED: Separated mem_data
        logic [4:0]  rd;

        logic        reg_write;
        wb_sel_e     wb_sel;          // FIXED: Added wb_sel to select between sources
    } mem_wb_t;
    
endpackage
