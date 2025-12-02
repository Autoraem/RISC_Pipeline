`timescale 1ns/1ps
package pipelinestages_pkg;
    // IF/ID pipeline register type
    typedef struct packed {
        logic        valid;
        logic [31:0] pc;
        logic [31:0] instr;
    } if_id_t;

    // ID/EX pipeline register type
    typedef struct packed {
        logic [31:0] pc;
        logic [31:0] rs1_val;
        logic [31:0] rs2_val;
        logic [31:0] imm;
        logic [4:0]  rd;
        logic [3:0]  alu_op;

        logic        alu_src;
        logic        branch;
        logic        mem_read;
        logic        mem_write;
        logic        reg_write;
        logic        mem_to_reg;

        logic        valid;
    } id_ex_t;

    // EX/MEM pipeline register type
    typedef struct packed {
        logic [31:0] alu_result;
        logic [31:0] rs2_val;
        logic [4:0]  rd;

        logic        mem_read;
        logic        mem_write;
        logic        reg_write;
        logic        mem_to_reg;

        logic        valid;
    } ex_mem_t;

    // MEM/WB pipeline register type
    typedef struct packed {
        logic [31:0] alu_or_mem_val;
        logic [4:0]  rd;

        logic        reg_write;

        logic        valid;
    } mem_wb_t;
endpackage
