// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontroldecoder_tb.h for the primary calling header

#include "Vcontroldecoder_tb__pch.h"
#include "Vcontroldecoder_tb___024root.h"

VL_ATTR_COLD void Vcontroldecoder_tb___024root___eval_static(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___eval_static\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcontroldecoder_tb___024root___eval_final(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___eval_final\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroldecoder_tb___024root___dump_triggers__stl(Vcontroldecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcontroldecoder_tb___024root___eval_phase__stl(Vcontroldecoder_tb___024root* vlSelf);

VL_ATTR_COLD void Vcontroldecoder_tb___024root___eval_settle(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___eval_settle\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcontroldecoder_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/testbenches/controldecoder_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcontroldecoder_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroldecoder_tb___024root___dump_triggers__stl(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___dump_triggers__stl\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vcontroldecoder_tb___024root___act_sequent__TOP__0(Vcontroldecoder_tb___024root* vlSelf);
VL_ATTR_COLD void Vcontroldecoder_tb___024root____Vm_traceActivitySetAll(Vcontroldecoder_tb___024root* vlSelf);

VL_ATTR_COLD void Vcontroldecoder_tb___024root___eval_stl(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___eval_stl\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcontroldecoder_tb___024root___act_sequent__TOP__0(vlSelf);
        Vcontroldecoder_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vcontroldecoder_tb___024root___eval_triggers__stl(Vcontroldecoder_tb___024root* vlSelf);

VL_ATTR_COLD bool Vcontroldecoder_tb___024root___eval_phase__stl(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___eval_phase__stl\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcontroldecoder_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcontroldecoder_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroldecoder_tb___024root___dump_triggers__act(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___dump_triggers__act\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vcontroldecoder_tb___024root___dump_triggers__nba(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___dump_triggers__nba\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vcontroldecoder_tb___024root____Vm_traceActivitySetAll(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root____Vm_traceActivitySetAll\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vcontroldecoder_tb___024root___ctor_var_reset(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___ctor_var_reset\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->controldecoder_tb__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2337989324897508238ull);
    vlSelf->controldecoder_tb__DOT__ctrl = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 13517675133172263370ull);
    vlSelf->controldecoder_tb__DOT__dut__DOT__alu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7202924060665617576ull);
    vlSelf->controldecoder_tb__DOT__dut__DOT__regwen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12624550543653196552ull);
    vlSelf->controldecoder_tb__DOT__dut__DOT__imm_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 986287279279660253ull);
    vlSelf->controldecoder_tb__DOT__dut__DOT__A_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3192153166986333010ull);
    vlSelf->controldecoder_tb__DOT__dut__DOT__B_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14710367145185363867ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
