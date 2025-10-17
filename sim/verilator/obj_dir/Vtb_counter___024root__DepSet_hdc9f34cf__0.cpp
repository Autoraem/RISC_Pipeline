// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter.h for the primary calling header

#include "Vtb_counter__pch.h"
#include "Vtb_counter__Syms.h"
#include "Vtb_counter___024root.h"

VlCoroutine Vtb_counter___024root___eval_initial__TOP__Vtiming__0(Vtb_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("sim/waves/wave.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_counter__DOT__reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/tb_counter.sv", 
                                         26);
    vlSelfRef.tb_counter__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "rtl/tb_counter.sv", 
                                         30);
    VL_FINISH_MT("rtl/tb_counter.sv", 33, "");
}

VlCoroutine Vtb_counter___024root___eval_initial__TOP__Vtiming__1(Vtb_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "rtl/tb_counter.sv", 
                                             16);
        vlSelfRef.tb_counter__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_counter__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_counter___024root___dump_triggers__act(Vtb_counter___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_counter___024root___eval_triggers__act(Vtb_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter___024root___eval_triggers__act\n"); );
    Vtb_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_counter__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_counter__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb_counter__DOT__reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_counter__DOT__reset__0))));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_counter__DOT__clk__0 
        = vlSelfRef.tb_counter__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_counter__DOT__reset__0 
        = vlSelfRef.tb_counter__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_counter___024root___dump_triggers__act(vlSelf);
    }
#endif
}
