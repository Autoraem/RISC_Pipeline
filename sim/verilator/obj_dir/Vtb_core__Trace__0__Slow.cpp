// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_core__Syms.h"


VL_ATTR_COLD void Vtb_core___024root__trace_init_sub__TOP__0(Vtb_core___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_init_sub__TOP__0\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("if_id_reg_d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+37,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("if_id_reg_q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+38,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+41,0,"alu_op",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"regwen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"imm_sel",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,0,"A_sel",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"B_sel",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"wb_sel",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"branch_type",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+48,0,"instruction_type",7, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+49,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+51,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+52,0,"D_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"D_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"D_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("id_ex_reg_d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+53,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"A_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"B_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+62,0,"rs1_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"rs2_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+64,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"branch_type",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+69,0,"instruction_type",7, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("id_ex_reg_q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+70,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+76,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+77,0,"A_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+78,0,"B_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+79,0,"rs1_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+80,0,"rs2_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+81,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"branch_type",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+86,0,"instruction_type",7, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->declBus(c+87,0,"forwardA",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+88,0,"forwardB",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+89,0,"forwardA_br",8, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"forwardB_br",8, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+91,0,"stall_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"stall_ifid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"flush_ifid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"flush_idex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"E_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"E_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"E_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"E_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"E_sd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+97,0,"E_take_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ex_mem_reg_d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+70,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+81,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ex_mem_reg_q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+98,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+102,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+106,0,"M_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mem_wb_reg_d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+98,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"alu_or_mem_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+104,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mem_wb_reg_q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+108,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"alu_or_mem_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+111,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+110,0,"wb_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+111,0,"wb_regwen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("control_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("control_signals", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+41,0,"alu_op",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"regwen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"imm_sel",2, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,0,"A_sel",3, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"B_sel",4, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"wb_sel",5, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"branch_type",6, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+48,0,"instruction_type",7, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+49,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+51,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+113,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+114,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+115,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+116,0,"alu_op",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"regwen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"imm_sel",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+118,0,"A_sel",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+119,0,"B_sel",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+120,0,"wb_sel",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+121,0,"branch_type",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+122,0,"instruction_type",7, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ctrl_in", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+41,0,"alu_op",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"regwen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"imm_sel",2, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,0,"A_sel",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"B_sel",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"wb_sel",5, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"branch_type",6, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+48,0,"instruction_type",7, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+49,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+51,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+110,0,"wb_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"wb_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+111,0,"wb_regwen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("immgen_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"imm_sel",2, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"imm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("regfile_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+114,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+110,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"rd1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"rd2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+123,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("execute_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"exmem_forwarded_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"memwb_forwarded_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"alu_op",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+87,0,"A_sel",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+88,0,"B_sel",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+71,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"forwardA_br",8, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"forwardB_br",8, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"ex_mem_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"mem_wb_alu_or_mem_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"branch_type",6, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+94,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"neg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"sd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+97,0,"take_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"alu_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"alu_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"rs1_br",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"rs2_br",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"Opcode",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+94,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"Neg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"Overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("brcmp_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+70,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"branch_type",6, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+97,0,"take_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("exmem_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+70,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+81,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"mem_to_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+98,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+102,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fetch_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+153,0,"INIT_HEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 183,0);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"pc_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"branch_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"pc_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("imem_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+153,0,"INIT_HEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 183,0);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+36,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"dout_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pcreg_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"branch_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+97,0,"pc_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"pc_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("forwardingunit_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"id_ex_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,0,"id_ex_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+101,0,"ex_mem_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+104,0,"ex_mem_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"mem_wb_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+111,0,"mem_wb_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"ex_A_sel",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+134,0,"ex_B_sel",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"if_id_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+80,0,"if_id_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"forwardA_alu",3, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+88,0,"forwardB_alu",4, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+89,0,"forwardA_br",8, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"forwardB_br",8, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("hazard_unit_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+38,0,"id_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"id_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+114,0,"id_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+135,0,"id_instruction_type",7, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+136,0,"ex_instruction_type",7, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+70,0,"ex_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"ex_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+97,0,"ex_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"ex_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"ex_pc_plus_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"stall_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"stall_ifid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"flush_ifid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"flush_idex",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"id_uses_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"id_uses_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"ex_is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"ex_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"ex_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"load_use_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"mispredict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"jump_redirect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"do_redirect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("idex_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+53,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"A_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"B_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+62,0,"rs1_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"rs2_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+64,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"mem_to_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"branch_type",6, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+69,0,"instruction_type",7, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+70,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+76,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+77,0,"A_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+78,0,"B_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+79,0,"rs1_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+80,0,"rs2_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+81,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"branch_type",6, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+86,0,"instruction_type",7, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ifid_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+37,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+38,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mem_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"mem_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"mem_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"mem_byte_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+106,0,"mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dmem_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+162,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"INIT_HEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"byte_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+145,0,"addr_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+100,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"addr_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+102,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("memwb_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+98,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"alu_or_mem_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+104,0,"reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+108,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"alu_or_mem_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+111,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("writeback_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+109,0,"mem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"pc_plus_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"wb_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+110,0,"rd_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+111,0,"regwrite_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"wb_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+111,0,"wb_regwen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_core___024root__trace_init_top(Vtb_core___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_init_top\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_core___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_core___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_core___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_core___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_core___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_core___024root__trace_register(Vtb_core___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_register\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_core___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_core___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_core___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_core___024root__trace_cleanup, vlSelf);
    }

    VL_ATTR_COLD void Vtb_core___024root__trace_const_0_sub_0(Vtb_core___024root* vlSelf, VerilatedFst::Buffer* bufp);

    VL_ATTR_COLD void Vtb_core___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_const_0\n"); );
        // Init
        Vtb_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_core___024root*>(voidSelf);

        Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

        // Body
        Vtb_core___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
    }

    VL_ATTR_COLD void Vtb_core___024root__trace_const_0_sub_0(Vtb_core___024root* vlSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_const_0_sub_0\n"); );
        Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
        auto& vlSelfRef = std::ref(*vlSelf).get();
        // Init
        uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);

        VlWide<6>/*191:0*/ __Vtemp_1;
        // Body
        bufp->fullIData(oldp+151,(0x0000000aU),32);
        bufp->fullBit(oldp+152,(0U));
        __Vtemp_1[0U] = 0x2e686578U;
        __Vtemp_1[1U] = 0x6772616dU;
        __Vtemp_1[2U] = 0x2f70726fU;
        __Vtemp_1[3U] = 0x6772616dU;
        __Vtemp_1[4U] = 0x2f70726fU;
        __Vtemp_1[5U] = 0x0072746cU;
        bufp->fullWData(oldp+153,(__Vtemp_1),184);
        bufp->fullBit(oldp+159,(1U));
        bufp->fullIData(oldp+160,(0x00000400U),32);
        bufp->fullCData(oldp+161,(0x0fU),4);
        bufp->fullIData(oldp+162,(0x0000000cU),32);
        bufp->fullCData(oldp+163,(0U),8);
        bufp->fullIData(oldp+164,(0x00001000U),32);
    }

    VL_ATTR_COLD void Vtb_core___024root__trace_full_0_sub_0(Vtb_core___024root* vlSelf, VerilatedFst::Buffer* bufp);

    VL_ATTR_COLD void Vtb_core___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_full_0\n"); );
        // Init
        Vtb_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_core___024root*>(voidSelf);

        Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

        // Body
        Vtb_core___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
    }

    VL_ATTR_COLD void Vtb_core___024root__trace_full_0_sub_0(Vtb_core___024root* vlSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_full_0_sub_0\n"); );
        Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
        auto& vlSelfRef = std::ref(*vlSelf).get();
        // Init
        uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);

        // Body
        bufp->fullIData(oldp+1,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
                                [(0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                 >> 0x0000000fU))]),32);
        bufp->fullIData(oldp+2,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
                                [(0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                 >> 0x00000014U))]),32);
        bufp->fullIData(oldp+3,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0]),32);
        bufp->fullIData(oldp+4,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[1]),32);
        bufp->fullIData(oldp+5,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[2]),32);
        bufp->fullIData(oldp+6,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[3]),32);
        bufp->fullIData(oldp+7,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[4]),32);
        bufp->fullIData(oldp+8,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[5]),32);
        bufp->fullIData(oldp+9,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[6]),32);
        bufp->fullIData(oldp+10,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[7]),32);
        bufp->fullIData(oldp+11,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[8]),32);
        bufp->fullIData(oldp+12,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[9]),32);
        bufp->fullIData(oldp+13,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[10]),32);
        bufp->fullIData(oldp+14,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[11]),32);
        bufp->fullIData(oldp+15,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[12]),32);
        bufp->fullIData(oldp+16,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[13]),32);
        bufp->fullIData(oldp+17,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[14]),32);
        bufp->fullIData(oldp+18,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[15]),32);
        bufp->fullIData(oldp+19,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[16]),32);
        bufp->fullIData(oldp+20,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[17]),32);
        bufp->fullIData(oldp+21,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[18]),32);
        bufp->fullIData(oldp+22,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[19]),32);
        bufp->fullIData(oldp+23,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[20]),32);
        bufp->fullIData(oldp+24,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[21]),32);
        bufp->fullIData(oldp+25,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[22]),32);
        bufp->fullIData(oldp+26,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[23]),32);
        bufp->fullIData(oldp+27,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[24]),32);
        bufp->fullIData(oldp+28,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[25]),32);
        bufp->fullIData(oldp+29,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[26]),32);
        bufp->fullIData(oldp+30,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[27]),32);
        bufp->fullIData(oldp+31,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[28]),32);
        bufp->fullIData(oldp+32,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[29]),32);
        bufp->fullIData(oldp+33,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[30]),32);
        bufp->fullIData(oldp+34,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[31]),32);
        bufp->fullIData(oldp+35,(vlSelfRef.tb_core__DOT__dut__DOT__pc),32);
        bufp->fullIData(oldp+36,(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r),32);
        bufp->fullBit(oldp+37,((1U & (~ (IData)(vlSelfRef.tb_core__DOT__dut__DOT__ifid_reg__DOT__stall)))));
        bufp->fullBit(oldp+38,((1U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[2U])));
        bufp->fullIData(oldp+39,(vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[1U]),32);
        bufp->fullIData(oldp+40,(vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U]),32);
        bufp->fullCData(oldp+41,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op),4);
        bufp->fullBit(oldp+42,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen));
        bufp->fullCData(oldp+43,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel),3);
        bufp->fullCData(oldp+44,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel),3);
        bufp->fullCData(oldp+45,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel),3);
        bufp->fullCData(oldp+46,((3U & (vlSelfRef.__VdfgRegularize_he50b618e_0_1 
                                        >> 0x00000019U))),2);
        bufp->fullCData(oldp+47,((7U & (vlSelfRef.__VdfgRegularize_he50b618e_0_1 
                                        >> 0x00000016U))),3);
        bufp->fullCData(oldp+48,((0x0000007fU & (vlSelfRef.__VdfgRegularize_he50b618e_0_1 
                                                 >> 0x0000000fU))),7);
        bufp->fullCData(oldp+49,((0x0000001fU & (vlSelfRef.__VdfgRegularize_he50b618e_0_1 
                                                 >> 0x0000000aU))),5);
        bufp->fullCData(oldp+50,((0x0000001fU & (vlSelfRef.__VdfgRegularize_he50b618e_0_1 
                                                 >> 5U))),5);
        bufp->fullCData(oldp+51,((0x0000001fU & vlSelfRef.__VdfgRegularize_he50b618e_0_1)),5);
        bufp->fullIData(oldp+52,(((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                                   ? ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                                                ? 0U
                                                : (
                                                   ((- (IData)(
                                                               (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                                >> 0x0000001fU))) 
                                                    << 0x00000014U) 
                                                   | ((((0x000001feU 
                                                         & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                            >> 0x0000000bU)) 
                                                        | (1U 
                                                           & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                              >> 0x00000014U))) 
                                                       << 0x0000000bU) 
                                                      | (0x000007feU 
                                                         & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                            >> 0x00000014U))))))
                                   : ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                                       ? ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                                           ? (0xfffff000U 
                                              & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                           : (((- (IData)(
                                                          (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000dU) 
                                              | ((((2U 
                                                    & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                       >> 0x0000001eU)) 
                                                   | (1U 
                                                      & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                         >> 7U))) 
                                                  << 0x0000000bU) 
                                                 | ((0x000007e0U 
                                                     & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001eU 
                                                       & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                          >> 7U))))))
                                       : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                                           ? (((- (IData)(
                                                          (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000cU) 
                                              | ((0x00000fe0U 
                                                  & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                       >> 7U))))
                                           : (((- (IData)(
                                                          (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000cU) 
                                              | (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                 >> 0x00000014U)))))),32);
        bufp->fullBit(oldp+53,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[5U] 
                                      >> 5U))));
        bufp->fullIData(oldp+54,(((vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[5U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[4U] 
                                     >> 5U))),32);
        bufp->fullIData(oldp+55,(((vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[4U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[3U] 
                                     >> 5U))),32);
        bufp->fullIData(oldp+56,(((vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[3U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[2U] 
                                     >> 5U))),32);
        bufp->fullIData(oldp+57,(((vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[2U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[1U] 
                                     >> 5U))),32);
        bufp->fullCData(oldp+58,((0x0000001fU & vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[1U])),5);
        bufp->fullCData(oldp+59,((vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U] 
                                  >> 0x0000001cU)),4);
        bufp->fullCData(oldp+60,((3U & (vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U] 
                                        >> 0x0000001aU))),2);
        bufp->fullCData(oldp+61,((3U & (vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U] 
                                        >> 0x00000018U))),2);
        bufp->fullCData(oldp+62,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U] 
                                                 >> 0x00000013U))),5);
        bufp->fullCData(oldp+63,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U] 
                                                 >> 0x0000000eU))),5);
        bufp->fullBit(oldp+64,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U] 
                                      >> 0x0000000dU))));
        bufp->fullBit(oldp+65,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U] 
                                      >> 0x0000000cU))));
        bufp->fullBit(oldp+66,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U] 
                                      >> 0x0000000bU))));
        bufp->fullBit(oldp+67,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U] 
                                      >> 0x0000000aU))));
        bufp->fullCData(oldp+68,((7U & (vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U] 
                                        >> 7U))),3);
        bufp->fullCData(oldp+69,((0x0000007fU & vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U])),7);
        bufp->fullBit(oldp+70,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                      >> 5U))));
        bufp->fullIData(oldp+71,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                                     >> 5U))),32);
        bufp->fullIData(oldp+72,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] 
                                     >> 5U))),32);
        bufp->fullIData(oldp+73,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[2U] 
                                     >> 5U))),32);
        bufp->fullIData(oldp+74,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[2U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U] 
                                     >> 5U))),32);
        bufp->fullCData(oldp+75,((0x0000001fU & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U])),5);
        bufp->fullCData(oldp+76,((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                  >> 0x0000001cU)),4);
        bufp->fullCData(oldp+77,((3U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                        >> 0x0000001aU))),2);
        bufp->fullCData(oldp+78,((3U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                        >> 0x00000018U))),2);
        bufp->fullCData(oldp+79,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                                 >> 0x00000013U))),5);
        bufp->fullCData(oldp+80,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                                 >> 0x0000000eU))),5);
        bufp->fullBit(oldp+81,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                      >> 0x0000000dU))));
        bufp->fullBit(oldp+82,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                      >> 0x0000000cU))));
        bufp->fullBit(oldp+83,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                      >> 0x0000000bU))));
        bufp->fullBit(oldp+84,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                      >> 0x0000000aU))));
        bufp->fullCData(oldp+85,((7U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                        >> 7U))),3);
        bufp->fullCData(oldp+86,((0x0000007fU & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])),7);
        bufp->fullCData(oldp+87,(vlSelfRef.tb_core__DOT__dut__DOT__forwardA),3);
        bufp->fullCData(oldp+88,(vlSelfRef.tb_core__DOT__dut__DOT__forwardB),3);
        bufp->fullCData(oldp+89,(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardA_br),2);
        bufp->fullCData(oldp+90,(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardB_br),2);
        bufp->fullBit(oldp+91,(vlSelfRef.tb_core__DOT__dut__DOT__ifid_reg__DOT__stall));
        bufp->fullBit(oldp+92,(vlSelfRef.tb_core__DOT__dut__DOT__ifid_reg__DOT__flush));
        bufp->fullBit(oldp+93,(((IData)(vlSelfRef.tb_core__DOT__dut__DOT__ifid_reg__DOT__stall) 
                                | (IData)(vlSelfRef.tb_core__DOT__dut__DOT__ifid_reg__DOT__flush))));
        bufp->fullIData(oldp+94,(vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result),32);
        bufp->fullBit(oldp+95,(vlSelfRef.tb_core__DOT__dut__DOT__E_zero));
        bufp->fullBit(oldp+96,(vlSelfRef.tb_core__DOT__dut__DOT__E_neg));
        bufp->fullBit(oldp+97,(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_sel));
        bufp->fullBit(oldp+98,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
                                      >> 9U))));
        bufp->fullIData(oldp+99,(((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
                                   << 0x00000017U) 
                                  | (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                     >> 9U))),32);
        bufp->fullIData(oldp+100,(((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                    << 0x00000017U) 
                                   | (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                      >> 9U))),32);
        bufp->fullCData(oldp+101,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                                  >> 4U))),5);
        bufp->fullBit(oldp+102,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                       >> 3U))));
        bufp->fullBit(oldp+103,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                       >> 2U))));
        bufp->fullBit(oldp+104,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                       >> 1U))));
        bufp->fullBit(oldp+105,((1U & vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U])));
        bufp->fullIData(oldp+106,(vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__rdata_r),32);
        bufp->fullIData(oldp+107,(((1U & vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U])
                                    ? vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__rdata_r
                                    : ((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
                                        << 0x00000017U) 
                                       | (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                          >> 9U)))),32);
        bufp->fullBit(oldp+108,((1U & (IData)((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                               >> 0x00000026U)))));
        bufp->fullIData(oldp+109,((IData)((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                           >> 6U))),32);
        bufp->fullCData(oldp+110,((0x0000001fU & (IData)(
                                                         (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                          >> 1U)))),5);
        bufp->fullBit(oldp+111,((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q))));
        bufp->fullIData(oldp+112,(((0U == ((0U != (IData)(
                                                          (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                           >> 6U)))
                                            ? 1U : 0U))
                                    ? (IData)((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                               >> 6U))
                                    : ((1U == ((0U 
                                                != (IData)(
                                                           (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                            >> 6U)))
                                                ? 1U
                                                : 0U))
                                        ? (IData)((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                   >> 6U))
                                        : ((2U == (
                                                   (0U 
                                                    != (IData)(
                                                               (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                                >> 6U)))
                                                    ? 1U
                                                    : 0U))
                                            ? ((IData)(4U) 
                                               + (IData)(
                                                         (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                          >> 6U)))
                                            : 0xdeadbeefU)))),32);
        bufp->fullCData(oldp+113,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                  >> 0x0000000fU))),5);
        bufp->fullCData(oldp+114,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                  >> 0x00000014U))),5);
        bufp->fullCData(oldp+115,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                  >> 7U))),5);
        bufp->fullCData(oldp+116,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op),4);
        bufp->fullCData(oldp+117,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel),3);
        bufp->fullCData(oldp+118,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel),3);
        bufp->fullCData(oldp+119,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel),3);
        bufp->fullCData(oldp+120,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel),2);
        bufp->fullCData(oldp+121,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__branch_type),3);
        bufp->fullCData(oldp+122,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type),7);
        bufp->fullIData(oldp+123,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->fullCData(oldp+124,((7U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                         >> 7U))),3);
        bufp->fullIData(oldp+125,(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A),32);
        bufp->fullIData(oldp+126,(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B),32);
        bufp->fullIData(oldp+127,(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1),32);
        bufp->fullIData(oldp+128,(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2),32);
        bufp->fullCData(oldp+129,(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__shamt),5);
        bufp->fullSData(oldp+130,((0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__pc 
                                                  >> 2U))),10);
        bufp->fullIData(oldp+131,(((IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_sel)
                                    ? vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result
                                    : ((IData)(4U) 
                                       + vlSelfRef.tb_core__DOT__dut__DOT__pc))),32);
        bufp->fullIData(oldp+132,(((IData)(4U) + vlSelfRef.tb_core__DOT__dut__DOT__pc)),32);
        bufp->fullCData(oldp+133,((3U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                         >> 0x0000001aU))),3);
        bufp->fullCData(oldp+134,((3U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                         >> 0x00000018U))),3);
        bufp->fullCData(oldp+135,((0x0000007fU & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])),7);
        bufp->fullCData(oldp+136,((0x0000007fU & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])),7);
        bufp->fullIData(oldp+137,(((IData)(4U) + ((
                                                   vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                                   << 0x0000001bU) 
                                                  | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                                                     >> 5U)))),32);
        bufp->fullBit(oldp+138,(vlSelfRef.tb_core__DOT__dut__DOT__hazard_unit_inst__DOT__id_uses_rs1));
        bufp->fullBit(oldp+139,(((0x00000040U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                  ? ((1U & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                            >> 5U)) 
                                     && ((1U & (~ (
                                                   vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                   >> 4U))) 
                                         && ((1U & 
                                              (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                  >> 3U))) 
                                             && ((1U 
                                                  & (~ 
                                                     (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                      >> 2U))) 
                                                 && ((1U 
                                                      & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U]))))))
                                  : ((1U & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                            >> 5U)) 
                                     && ((0x00000010U 
                                          & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                          ? ((1U & 
                                              (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                  >> 3U))) 
                                             && ((1U 
                                                  & (~ 
                                                     (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                      >> 2U))) 
                                                 && ((1U 
                                                      & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U]))))
                                          : ((1U & 
                                              (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                  >> 3U))) 
                                             && ((1U 
                                                  & (~ 
                                                     (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                      >> 2U))) 
                                                 && ((1U 
                                                      & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])))))))));
        bufp->fullBit(oldp+140,((3U == (0x0000007fU 
                                        & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U]))));
        bufp->fullBit(oldp+141,((0x63U == (0x0000007fU 
                                           & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U]))));
        bufp->fullBit(oldp+142,(((0x6fU == (0x0000007fU 
                                            & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])) 
                                 | (0x67U == (0x0000007fU 
                                              & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])))));
        bufp->fullBit(oldp+143,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                  >> 5U) & ((IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_sel) 
                                            & (0x63U 
                                               == (0x0000007fU 
                                                   & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U]))))));
        bufp->fullBit(oldp+144,((((0x6fU == (0x0000007fU 
                                             & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])) 
                                  | (0x67U == (0x0000007fU 
                                               & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U]))) 
                                 & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                    >> 5U))));
        bufp->fullSData(oldp+145,((0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                                  >> 0x0000000bU))),12);
        bufp->fullIData(oldp+146,(((IData)(4U) + (IData)(
                                                         (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                          >> 6U)))),32);
        bufp->fullCData(oldp+147,(((0U != (IData)((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                   >> 6U)))
                                    ? 1U : 0U)),2);
        bufp->fullBit(oldp+148,(vlSelfRef.tb_core__DOT__clk));
        bufp->fullBit(oldp+149,(vlSelfRef.tb_core__DOT__rst));
        bufp->fullIData(oldp+150,(vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__unnamedblk1__DOT__i),32);
    }
