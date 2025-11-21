// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile_tb.h for the primary calling header

#include "Vregfile_tb__pch.h"
#include "Vregfile_tb__Syms.h"
#include "Vregfile_tb___024root.h"

VlCoroutine Vregfile_tb___024root___eval_initial__TOP__Vtiming__0(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("sim/waves/regfile_tb_wave.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.regfile_tb__DOT__rst = 1U;
    vlSelfRef.regfile_tb__DOT__we = 0U;
    vlSelfRef.regfile_tb__DOT__rs1 = 0U;
    vlSelfRef.regfile_tb__DOT__rs2 = 0U;
    vlSelfRef.regfile_tb__DOT__rd = 0U;
    vlSelfRef.regfile_tb__DOT__wd = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/testbenches/regfile_tb.sv", 
                                         37);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.regfile_tb__DOT__rst = 0U;
    vlSelfRef.regfile_tb__DOT__we = 1U;
    vlSelfRef.regfile_tb__DOT__rd = 5U;
    vlSelfRef.regfile_tb__DOT__wd = 0x0000002aU;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/testbenches/regfile_tb.sv", 
                                         42);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.regfile_tb__DOT__we = 0U;
    vlSelfRef.regfile_tb__DOT__rs1 = 5U;
    vlSelfRef.regfile_tb__DOT__rs2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/testbenches/regfile_tb.sv", 
                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.regfile_tb__DOT__we = 1U;
    vlSelfRef.regfile_tb__DOT__rd = 0x0aU;
    vlSelfRef.regfile_tb__DOT__wd = 0x00000054U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/testbenches/regfile_tb.sv", 
                                         50);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.regfile_tb__DOT__we = 0U;
    vlSelfRef.regfile_tb__DOT__rs1 = 5U;
    vlSelfRef.regfile_tb__DOT__rs2 = 0x0aU;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/testbenches/regfile_tb.sv", 
                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.regfile_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/testbenches/regfile_tb.sv", 
                                         57);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.regfile_tb__DOT__rst = 0U;
    VL_FINISH_MT("rtl/testbenches/regfile_tb.sv", 60, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VlCoroutine Vregfile_tb___024root___eval_initial__TOP__Vtiming__1(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "rtl/testbenches/regfile_tb.sv", 
                                             26);
        vlSelfRef.regfile_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.regfile_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__act(Vregfile_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregfile_tb___024root___eval_triggers__act(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_triggers__act\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.regfile_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0 
        = vlSelfRef.regfile_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregfile_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
