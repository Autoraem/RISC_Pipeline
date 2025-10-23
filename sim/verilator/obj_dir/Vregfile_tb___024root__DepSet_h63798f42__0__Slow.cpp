// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile_tb.h for the primary calling header

#include "Vregfile_tb__pch.h"
#include "Vregfile_tb___024root.h"

VL_ATTR_COLD void Vregfile_tb___024root___eval_static(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_static\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0 
        = vlSelfRef.regfile_tb__DOT__clk;
}

VL_ATTR_COLD void Vregfile_tb___024root___eval_initial__TOP(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_initial__TOP\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.regfile_tb__DOT__clk = 0U;
}

VL_ATTR_COLD void Vregfile_tb___024root___eval_final(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_final\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vregfile_tb___024root___eval_settle(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_settle\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__act(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___dump_triggers__act\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge regfile_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__nba(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___dump_triggers__nba\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge regfile_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregfile_tb___024root___ctor_var_reset(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___ctor_var_reset\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->regfile_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8627095460176101873ull);
    vlSelf->regfile_tb__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15650167984266830383ull);
    vlSelf->regfile_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11297256341081812731ull);
    vlSelf->regfile_tb__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17840162551515260976ull);
    vlSelf->regfile_tb__DOT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 652867507003873062ull);
    vlSelf->regfile_tb__DOT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14604590134135924654ull);
    vlSelf->regfile_tb__DOT__wd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10832996914759806319ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->regfile_tb__DOT__dut__DOT__regfile[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11248400077094246150ull);
    }
    vlSelf->regfile_tb__DOT__dut__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11476243989741473172ull);
    vlSelf->__Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17789289843659854962ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
