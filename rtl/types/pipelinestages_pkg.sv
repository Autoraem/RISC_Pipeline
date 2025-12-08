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

        logic [1:0]  A_sel; 
        logic [1:0]  B_sel;
        //logic        take_branch; 
        logic [4:0]  rs1_id;
        logic [4:0]  rs2_id;
        logic        mem_read;
        logic        mem_write;
        logic        reg_write;
        logic        mem_to_reg; // 0 = from ALU, 1 = from MEM
        branch_type_e branch_type;
    } id_ex_t;

    // EX/MEM pipeline register type
    typedef struct packed {
        logic        valid;

        logic [31:0] alu_result;
        logic [31:0] rs2;
        logic [4:0]  rd;

        logic        mem_read;
        logic        mem_write;
        logic        reg_write;
        logic        mem_to_reg;
    } ex_mem_t;

    // MEM/WB pipeline register type
    typedef struct packed {
        logic        valid;

        logic [31:0] alu_or_mem_val;
        logic [4:0]  rd;

        logic        reg_write;
    } mem_wb_t;
endpackage
