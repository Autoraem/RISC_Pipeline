// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vtb_core___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"ALU_ADD", "ALU_SUB", "ALU_AND", "ALU_OR", 
                                "ALU_XOR", "ALU_SLL", 
                                "ALU_SRL", "ALU_SRA", 
                                "ALU_SLT", "ALU_SLTU"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001"};
        tracep->declDTypeEnum(1, "control_pkg::alu_op_e", 10, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IMM_I", "IMM_S", "IMM_B", "IMM_U", "IMM_J", 
                                "IMM_NONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(2, "control_pkg::imm_sel_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SRC_A_RS1", "SRC_A_PC", "SRC_A_ZERO", "SRC_A_EXMEM", 
                                "SRC_A_MEMWB"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(3, "control_pkg::a_sel_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SRC_B_RS2", "SRC_B_IMM", "SRC_B_FOUR", 
                                "SRC_B_EXMEM", "SRC_B_MEMWB"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(4, "control_pkg::b_sel_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"WB_FROM_ALU", "WB_FROM_MEM", "WB_FROM_PC_PLUS_4"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(5, "control_pkg::wb_sel_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"BR_EQ", "BR_NE", "BR_LT", "BR_GE", "BR_LTU", 
                                "BR_GEU", "BR_NONE", 
                                "BR_UNCOND"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(6, "control_pkg::branch_type_e", 8, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OP_R_TYPE", "OP_I_TYPE", "OP_LOAD", "OP_STORE", 
                                "OP_BRANCH", "OP_JAL", 
                                "OP_JALR", "OP_LUI", 
                                "OP_AUIPC", "OP_SYSTEM", 
                                "OP_FENCE", "OP_NOP"};
        const char* __VenumItemValues[]
        = {"110011", "10011", "11", "100011", "1100011", 
                                "1101111", "1100111", 
                                "110111", "10111", 
                                "1110011", "1111", 
                                "0"};
        tracep->declDTypeEnum(7, "control_pkg::instruction_type_e", 12, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FWD_NONE", "FWD_EXMEM", "FWD_MEMWB"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(8, "control_pkg::fwd_sel_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
}

void Vtb_core___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtb_core___024root__traceDeclTypesSub0(tracep);
}
