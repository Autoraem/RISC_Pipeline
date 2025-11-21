// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vcontroldecoder_tb__Syms.h"


void Vcontroldecoder_tb___024root__trace_chg_0_sub_0(Vcontroldecoder_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vcontroldecoder_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root__trace_chg_0\n"); );
    // Init
    Vcontroldecoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontroldecoder_tb___024root*>(voidSelf);

    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;

    // Body
    Vcontroldecoder_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcontroldecoder_tb___024root__trace_chg_0_sub_0(Vcontroldecoder_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root__trace_chg_0_sub_0\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);

    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__alu_op),4);
        bufp->chgBit(oldp+1,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__regwen));
        bufp->chgCData(oldp+2,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__imm_sel),3);
        bufp->chgCData(oldp+3,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__A_sel),2);
        bufp->chgCData(oldp+4,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__B_sel),2);
        bufp->chgCData(oldp+5,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__alu_op),4);
        bufp->chgCData(oldp+6,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__imm_sel),3);
        bufp->chgCData(oldp+7,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__A_sel),2);
        bufp->chgCData(oldp+8,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__B_sel),2);
    }
    bufp->chgIData(oldp+9,(vlSelfRef.controldecoder_tb__DOT__instr),32);
    bufp->chgCData(oldp+10,((0x0000001fU & (vlSelfRef.controldecoder_tb__DOT__instr 
                                            >> 0x0000000fU))),5);
    bufp->chgCData(oldp+11,((0x0000001fU & (vlSelfRef.controldecoder_tb__DOT__instr 
                                            >> 0x00000014U))),5);
    bufp->chgCData(oldp+12,((0x0000001fU & (vlSelfRef.controldecoder_tb__DOT__instr 
                                            >> 7U))),5);
}

void Vcontroldecoder_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root__trace_cleanup\n"); );
    // Init
    Vcontroldecoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontroldecoder_tb___024root*>(voidSelf);

    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
