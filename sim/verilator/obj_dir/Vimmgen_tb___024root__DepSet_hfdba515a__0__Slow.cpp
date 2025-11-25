// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimmgen_tb.h for the primary calling header

#include "Vimmgen_tb__pch.h"
#include "Vimmgen_tb___024root.h"

VL_ATTR_COLD void Vimmgen_tb___024root___eval_static__TOP(Vimmgen_tb___024root* vlSelf);

VL_ATTR_COLD void Vimmgen_tb___024root___eval_static(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___eval_static\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vimmgen_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vimmgen_tb___024root___eval_static__TOP(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___eval_static__TOP\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.immgen_tb__DOT__failures = 0U;
}

VL_ATTR_COLD void Vimmgen_tb___024root___eval_final(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___eval_final\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmgen_tb___024root___dump_triggers__stl(Vimmgen_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vimmgen_tb___024root___eval_phase__stl(Vimmgen_tb___024root* vlSelf);

VL_ATTR_COLD void Vimmgen_tb___024root___eval_settle(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___eval_settle\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vimmgen_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/testbenches/immgen_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vimmgen_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmgen_tb___024root___dump_triggers__stl(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___dump_triggers__stl\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vimmgen_tb___024root___act_sequent__TOP__0(Vimmgen_tb___024root* vlSelf);

VL_ATTR_COLD void Vimmgen_tb___024root___eval_stl(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___eval_stl\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vimmgen_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vimmgen_tb___024root___eval_triggers__stl(Vimmgen_tb___024root* vlSelf);

VL_ATTR_COLD bool Vimmgen_tb___024root___eval_phase__stl(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___eval_phase__stl\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vimmgen_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vimmgen_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmgen_tb___024root___dump_triggers__act(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___dump_triggers__act\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmgen_tb___024root___dump_triggers__nba(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___dump_triggers__nba\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vimmgen_tb___024root___ctor_var_reset(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___ctor_var_reset\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->immgen_tb__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 726748151069469461ull);
    vlSelf->immgen_tb__DOT__imm_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5995796346747828781ull);
    vlSelf->immgen_tb__DOT__failures = 0;
    vlSelf->immgen_tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->immgen_tb__DOT__dut__DOT__imm_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 393667880773739938ull);
    }
