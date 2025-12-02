// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_core.h for the primary calling header

#include "Vtb_core__pch.h"
#include "Vtb_core__Syms.h"
#include "Vtb_core___024root.h"

VlCoroutine Vtb_core___024root___eval_initial__TOP__Vtiming__0(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_core__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_core__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_core__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_core__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("sim/waves/tb_core_wave.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_core__DOT__clk = 0U;
    vlSelfRef.tb_core__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "rtl/testbenches/tb_core.sv", 
                                         26);
    vlSelfRef.tb_core__DOT__rst = 0U;
    tb_core__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x00000032U;
    while (VL_LTS_III(32, 0U, tb_core__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h78f94584__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_core.clk)", 
                                                             "rtl/testbenches/tb_core.sv", 
                                                             29);
        tb_core__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_core__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_core__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "rtl/testbenches/tb_core.sv", 
                                         31);
    vlSelfRef.tb_core__DOT__rst = 0U;
    tb_core__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x00000032U;
    while (VL_LTS_III(32, 0U, tb_core__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h78f94584__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_core.clk)", 
                                                             "rtl/testbenches/tb_core.sv", 
                                                             33);
        tb_core__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_core__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_FINISH_MT("rtl/testbenches/tb_core.sv", 35, "");
}

VlCoroutine Vtb_core___024root___eval_initial__TOP__Vtiming__1(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "rtl/testbenches/tb_core.sv", 
                                             16);
        vlSelfRef.tb_core__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_core__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__act(Vtb_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_core___024root___eval_triggers__act(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_triggers__act\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_core__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core__DOT__clk__0 
        = vlSelfRef.tb_core__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_core___024root___dump_triggers__act(vlSelf);
    }
#endif
}
