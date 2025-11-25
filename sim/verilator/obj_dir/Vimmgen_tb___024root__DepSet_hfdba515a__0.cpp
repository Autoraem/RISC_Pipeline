// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimmgen_tb.h for the primary calling header

#include "Vimmgen_tb__pch.h"
#include "Vimmgen_tb___024root.h"

VlCoroutine Vimmgen_tb___024root___eval_initial__TOP__Vtiming__0(Vimmgen_tb___024root* vlSelf);

void Vimmgen_tb___024root___eval_initial(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___eval_initial\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vimmgen_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vimmgen_tb___024root___act_sequent__TOP__0(Vimmgen_tb___024root* vlSelf);

void Vimmgen_tb___024root___eval_act(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___eval_act\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vimmgen_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vimmgen_tb___024root___act_sequent__TOP__0(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___act_sequent__TOP__0\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.immgen_tb__DOT__dut__DOT__imm_out = (
                                                   (4U 
                                                    & (IData)(vlSelfRef.immgen_tb__DOT__imm_sel))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.immgen_tb__DOT__imm_sel))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.immgen_tb__DOT__imm_sel))
                                                      ? 0U
                                                      : 
                                                     ((((0x00000ffeU 
                                                         & ((- (IData)(
                                                                       (vlSelfRef.immgen_tb__DOT__instr 
                                                                        >> 0x0000001fU))) 
                                                            << 1U)) 
                                                        | (vlSelfRef.immgen_tb__DOT__instr 
                                                           >> 0x0000001fU)) 
                                                       << 0x00000014U) 
                                                      | ((((0x000001feU 
                                                            & (vlSelfRef.immgen_tb__DOT__instr 
                                                               >> 0x0000000bU)) 
                                                           | (1U 
                                                              & (vlSelfRef.immgen_tb__DOT__instr 
                                                                 >> 0x00000014U))) 
                                                          << 0x0000000bU) 
                                                         | (0x000007feU 
                                                            & (vlSelfRef.immgen_tb__DOT__instr 
                                                               >> 0x00000014U))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.immgen_tb__DOT__imm_sel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.immgen_tb__DOT__imm_sel))
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelfRef.immgen_tb__DOT__instr)
                                                      : 
                                                     (((- (IData)(
                                                                  (vlSelfRef.immgen_tb__DOT__instr 
                                                                   >> 0x0000001fU))) 
                                                       << 0x0000000dU) 
                                                      | ((((2U 
                                                            & (vlSelfRef.immgen_tb__DOT__instr 
                                                               >> 0x0000001eU)) 
                                                           | (1U 
                                                              & (vlSelfRef.immgen_tb__DOT__instr 
                                                                 >> 7U))) 
                                                          << 0x0000000bU) 
                                                         | ((0x000007e0U 
                                                             & (vlSelfRef.immgen_tb__DOT__instr 
                                                                >> 0x00000014U)) 
                                                            | (0x0000001eU 
                                                               & (vlSelfRef.immgen_tb__DOT__instr 
                                                                  >> 7U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.immgen_tb__DOT__imm_sel))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelfRef.immgen_tb__DOT__instr 
                                                                   >> 0x0000001fU))) 
                                                       << 0x0000000cU) 
                                                      | ((0x00000fe0U 
                                                          & (vlSelfRef.immgen_tb__DOT__instr 
                                                             >> 0x00000014U)) 
                                                         | (0x0000001fU 
                                                            & (vlSelfRef.immgen_tb__DOT__instr 
                                                               >> 7U))))
                                                      : 
                                                     (((- (IData)(
                                                                  (vlSelfRef.immgen_tb__DOT__instr 
                                                                   >> 0x0000001fU))) 
                                                       << 0x0000000cU) 
                                                      | (vlSelfRef.immgen_tb__DOT__instr 
                                                         >> 0x00000014U)))));
}

void Vimmgen_tb___024root___eval_nba(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___eval_nba\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vimmgen_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vimmgen_tb___024root___timing_resume(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___timing_resume\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vimmgen_tb___024root___eval_triggers__act(Vimmgen_tb___024root* vlSelf);

bool Vimmgen_tb___024root___eval_phase__act(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___eval_phase__act\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vimmgen_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vimmgen_tb___024root___timing_resume(vlSelf);
        Vimmgen_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vimmgen_tb___024root___eval_phase__nba(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___eval_phase__nba\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vimmgen_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmgen_tb___024root___dump_triggers__nba(Vimmgen_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmgen_tb___024root___dump_triggers__act(Vimmgen_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vimmgen_tb___024root___eval(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___eval\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vimmgen_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/testbenches/immgen_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vimmgen_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/testbenches/immgen_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vimmgen_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vimmgen_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vimmgen_tb___024root___eval_debug_assertions(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___eval_debug_assertions\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
