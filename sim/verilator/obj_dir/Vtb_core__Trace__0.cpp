// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_core__Syms.h"


void Vtb_core___024root__trace_chg_0_sub_0(Vtb_core___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_core___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_chg_0\n"); );
    // Init
    Vtb_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_core___024root*>(voidSelf);

    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;

    // Body
    Vtb_core___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_core___024root__trace_chg_0_sub_0(Vtb_core___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_chg_0_sub_0\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);

    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op),4);
        bufp->chgBit(oldp+1,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen));
        bufp->chgCData(oldp+2,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel),3);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel),2);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel),2);
        bufp->chgCData(oldp+5,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op),4);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel),3);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel),2);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+9,(vlSelfRef.tb_core__DOT__dut__DOT__pc),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[1U]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U]),32);
        bufp->chgBit(oldp+13,((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[2U])));
        bufp->chgSData(oldp+14,((0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__pc 
                                                >> 2U))),10);
        bufp->chgIData(oldp+15,(((IData)(4U) + vlSelfRef.tb_core__DOT__dut__DOT__pc)),32);
    }
    bufp->chgBit(oldp+16,(vlSelfRef.tb_core__DOT__clk));
    bufp->chgBit(oldp+17,(vlSelfRef.tb_core__DOT__rst));
}

void Vtb_core___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_cleanup\n"); );
    // Init
    Vtb_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_core___024root*>(voidSelf);

    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
