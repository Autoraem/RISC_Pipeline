// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile_tb.h for the primary calling header

#include "Vregfile_tb__pch.h"
#include "Vregfile_tb___024root.h"

VL_ATTR_COLD void Vregfile_tb___024root___eval_initial__TOP(Vregfile_tb___024root* vlSelf);
VlCoroutine Vregfile_tb___024root___eval_initial__TOP__Vtiming__0(Vregfile_tb___024root* vlSelf);
VlCoroutine Vregfile_tb___024root___eval_initial__TOP__Vtiming__1(Vregfile_tb___024root* vlSelf);

void Vregfile_tb___024root___eval_initial(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_initial\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vregfile_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vregfile_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vregfile_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vregfile_tb___024root___eval_act(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_act\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vregfile_tb___024root___nba_sequent__TOP__0(Vregfile_tb___024root* vlSelf);

void Vregfile_tb___024root___eval_nba(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_nba\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vregfile_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vregfile_tb___024root___nba_sequent__TOP__0(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___nba_sequent__TOP__0\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__regfile_tb__DOT__dut__DOT__regfile__v0;
    __VdlySet__regfile_tb__DOT__dut__DOT__regfile__v0 = 0;
    IData/*31:0*/ __VdlyVal__regfile_tb__DOT__dut__DOT__regfile__v32;
    __VdlyVal__regfile_tb__DOT__dut__DOT__regfile__v32 = 0;
    CData/*4:0*/ __VdlyDim0__regfile_tb__DOT__dut__DOT__regfile__v32;
    __VdlyDim0__regfile_tb__DOT__dut__DOT__regfile__v32 = 0;
    CData/*0:0*/ __VdlySet__regfile_tb__DOT__dut__DOT__regfile__v32;
    __VdlySet__regfile_tb__DOT__dut__DOT__regfile__v32 = 0;
    // Body
    __VdlySet__regfile_tb__DOT__dut__DOT__regfile__v0 = 0U;
    __VdlySet__regfile_tb__DOT__dut__DOT__regfile__v32 = 0U;
    if (vlSelfRef.regfile_tb__DOT__rst) {
        vlSelfRef.regfile_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 0x00000020U;
        __VdlySet__regfile_tb__DOT__dut__DOT__regfile__v0 = 1U;
    } else if (vlSelfRef.regfile_tb__DOT__we) {
        __VdlyVal__regfile_tb__DOT__dut__DOT__regfile__v32 
            = vlSelfRef.regfile_tb__DOT__wd;
        __VdlyDim0__regfile_tb__DOT__dut__DOT__regfile__v32 
            = vlSelfRef.regfile_tb__DOT__rd;
        __VdlySet__regfile_tb__DOT__dut__DOT__regfile__v32 = 1U;
    }
    if (__VdlySet__regfile_tb__DOT__dut__DOT__regfile__v0) {
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[1U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[2U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[3U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[4U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[5U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[6U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[7U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[8U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[9U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x0aU] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x0bU] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x0cU] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x0dU] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x0eU] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x0fU] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x10U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x11U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x12U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x13U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x14U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x15U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x16U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x17U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x18U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x19U] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x1aU] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x1bU] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x1cU] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x1dU] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x1eU] = 0U;
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0x1fU] = 0U;
    }
    if (__VdlySet__regfile_tb__DOT__dut__DOT__regfile__v32) {
        vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[__VdlyDim0__regfile_tb__DOT__dut__DOT__regfile__v32] 
            = __VdlyVal__regfile_tb__DOT__dut__DOT__regfile__v32;
    }
}

void Vregfile_tb___024root___timing_resume(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___timing_resume\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vregfile_tb___024root___eval_triggers__act(Vregfile_tb___024root* vlSelf);

bool Vregfile_tb___024root___eval_phase__act(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_phase__act\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vregfile_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vregfile_tb___024root___timing_resume(vlSelf);
        Vregfile_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vregfile_tb___024root___eval_phase__nba(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_phase__nba\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vregfile_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__nba(Vregfile_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__act(Vregfile_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregfile_tb___024root___eval(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vregfile_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/testbenches/regfile_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vregfile_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/testbenches/regfile_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vregfile_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vregfile_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vregfile_tb___024root___eval_debug_assertions(Vregfile_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_debug_assertions\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
