// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontroldecoder_tb.h for the primary calling header

#include "Vcontroldecoder_tb__pch.h"
#include "Vcontroldecoder_tb___024root.h"

VlCoroutine Vcontroldecoder_tb___024root___eval_initial__TOP__Vtiming__0(Vcontroldecoder_tb___024root* vlSelf);

void Vcontroldecoder_tb___024root___eval_initial(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___eval_initial\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcontroldecoder_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vcontroldecoder_tb___024root___act_sequent__TOP__0(Vcontroldecoder_tb___024root* vlSelf);

void Vcontroldecoder_tb___024root___eval_act(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___eval_act\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcontroldecoder_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vcontroldecoder_tb___024root___act_sequent__TOP__0(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___act_sequent__TOP__0\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.controldecoder_tb__DOT__dut__DOT__alu_op = 0U;
    vlSelfRef.controldecoder_tb__DOT__dut__DOT__regwen = 0U;
    vlSelfRef.controldecoder_tb__DOT__dut__DOT__imm_sel = 5U;
    vlSelfRef.controldecoder_tb__DOT__dut__DOT__A_sel = 0U;
    vlSelfRef.controldecoder_tb__DOT__dut__DOT__B_sel = 0U;
    if ((0x00000040U & vlSelfRef.controldecoder_tb__DOT__instr)) {
        if ((0x00000020U & vlSelfRef.controldecoder_tb__DOT__instr)) {
            if ((1U & (~ (vlSelfRef.controldecoder_tb__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.controldecoder_tb__DOT__instr 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                        if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                            if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                                vlSelfRef.controldecoder_tb__DOT__dut__DOT__alu_op = 0U;
                            }
                        }
                    } else if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                        if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                            vlSelfRef.controldecoder_tb__DOT__dut__DOT__alu_op = 1U;
                        }
                    }
                }
                if ((8U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                    if ((4U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                        if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                            if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                                vlSelfRef.controldecoder_tb__DOT__dut__DOT__imm_sel = 4U;
                                vlSelfRef.controldecoder_tb__DOT__dut__DOT__A_sel = 1U;
                                vlSelfRef.controldecoder_tb__DOT__dut__DOT__B_sel = 2U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                    if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                        if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                            vlSelfRef.controldecoder_tb__DOT__dut__DOT__imm_sel = 0U;
                            vlSelfRef.controldecoder_tb__DOT__dut__DOT__A_sel = 0U;
                            vlSelfRef.controldecoder_tb__DOT__dut__DOT__B_sel = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                    if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__imm_sel = 2U;
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__A_sel = 0U;
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__B_sel = 0U;
                    }
                }
            }
            if ((0x00000010U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                if ((1U & (~ (vlSelfRef.controldecoder_tb__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.controldecoder_tb__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                            if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                                vlSelfRef.controldecoder_tb__DOT__dut__DOT__regwen = 0U;
                            }
                        }
                    }
                }
            } else if ((8U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                if ((4U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                    if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                        if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                            vlSelfRef.controldecoder_tb__DOT__dut__DOT__regwen = 1U;
                        }
                    }
                }
            } else if ((4U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                    if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__regwen = 1U;
                    }
                }
            } else if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                    vlSelfRef.controldecoder_tb__DOT__dut__DOT__regwen = 0U;
                }
            }
        }
    } else if ((0x00000020U & vlSelfRef.controldecoder_tb__DOT__instr)) {
        if ((0x00000010U & vlSelfRef.controldecoder_tb__DOT__instr)) {
            if ((1U & (~ (vlSelfRef.controldecoder_tb__DOT__instr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.controldecoder_tb__DOT__instr 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                        if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                            if ((0x40000000U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                                if ((0x00004000U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                                    if ((1U & (~ (vlSelfRef.controldecoder_tb__DOT__instr 
                                                  >> 0x0000000dU)))) {
                                        if ((0x00001000U 
                                             & vlSelfRef.controldecoder_tb__DOT__instr)) {
                                            vlSelfRef.controldecoder_tb__DOT__dut__DOT__alu_op = 7U;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.controldecoder_tb__DOT__instr 
                                                   >> 0x0000000dU)))) {
                                    if ((1U & (~ (vlSelfRef.controldecoder_tb__DOT__instr 
                                                  >> 0x0000000cU)))) {
                                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__alu_op = 1U;
                                    }
                                }
                            } else {
                                vlSelfRef.controldecoder_tb__DOT__dut__DOT__alu_op 
                                    = ((0x00004000U 
                                        & vlSelfRef.controldecoder_tb__DOT__instr)
                                        ? ((0x00002000U 
                                            & vlSelfRef.controldecoder_tb__DOT__instr)
                                            ? ((0x00001000U 
                                                & vlSelfRef.controldecoder_tb__DOT__instr)
                                                ? 2U
                                                : 3U)
                                            : ((0x00001000U 
                                                & vlSelfRef.controldecoder_tb__DOT__instr)
                                                ? 6U
                                                : 4U))
                                        : ((0x00002000U 
                                            & vlSelfRef.controldecoder_tb__DOT__instr)
                                            ? ((0x00001000U 
                                                & vlSelfRef.controldecoder_tb__DOT__instr)
                                                ? 9U
                                                : 8U)
                                            : ((0x00001000U 
                                                & vlSelfRef.controldecoder_tb__DOT__instr)
                                                ? 5U
                                                : 0U)));
                            }
                        }
                    }
                }
                if ((4U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                    if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                        if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                            vlSelfRef.controldecoder_tb__DOT__dut__DOT__regwen = 1U;
                            vlSelfRef.controldecoder_tb__DOT__dut__DOT__imm_sel = 3U;
                            vlSelfRef.controldecoder_tb__DOT__dut__DOT__A_sel = 2U;
                            vlSelfRef.controldecoder_tb__DOT__dut__DOT__B_sel = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                    if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__regwen = 1U;
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__imm_sel = 5U;
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__A_sel = 0U;
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__B_sel = 0U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.controldecoder_tb__DOT__instr 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.controldecoder_tb__DOT__instr 
                          >> 2U)))) {
                if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                    if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__regwen = 0U;
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__imm_sel = 1U;
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__A_sel = 0U;
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__B_sel = 1U;
                    }
                }
            }
        }
    } else if ((0x00000010U & vlSelfRef.controldecoder_tb__DOT__instr)) {
        if ((1U & (~ (vlSelfRef.controldecoder_tb__DOT__instr 
                      >> 3U)))) {
            if ((1U & (~ (vlSelfRef.controldecoder_tb__DOT__instr 
                          >> 2U)))) {
                if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                    if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__alu_op 
                            = ((0x00004000U & vlSelfRef.controldecoder_tb__DOT__instr)
                                ? ((0x00002000U & vlSelfRef.controldecoder_tb__DOT__instr)
                                    ? ((0x00001000U 
                                        & vlSelfRef.controldecoder_tb__DOT__instr)
                                        ? 2U : 3U) : 
                                   ((0x00001000U & vlSelfRef.controldecoder_tb__DOT__instr)
                                     ? ((0x40000000U 
                                         & vlSelfRef.controldecoder_tb__DOT__instr)
                                         ? 7U : 6U)
                                     : 4U)) : ((0x00002000U 
                                                & vlSelfRef.controldecoder_tb__DOT__instr)
                                                ? (
                                                   (0x00001000U 
                                                    & vlSelfRef.controldecoder_tb__DOT__instr)
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (0x00001000U 
                                                    & vlSelfRef.controldecoder_tb__DOT__instr)
                                                    ? 5U
                                                    : 0U)));
                    }
                }
            }
            if ((4U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                    if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__regwen = 1U;
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__imm_sel = 3U;
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__A_sel = 1U;
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__B_sel = 1U;
                    }
                }
            } else if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                    vlSelfRef.controldecoder_tb__DOT__dut__DOT__regwen = 1U;
                    vlSelfRef.controldecoder_tb__DOT__dut__DOT__imm_sel = 0U;
                    vlSelfRef.controldecoder_tb__DOT__dut__DOT__A_sel = 0U;
                    vlSelfRef.controldecoder_tb__DOT__dut__DOT__B_sel = 1U;
                }
            }
        }
    } else {
        if ((1U & (~ (vlSelfRef.controldecoder_tb__DOT__instr 
                      >> 3U)))) {
            if ((1U & (~ (vlSelfRef.controldecoder_tb__DOT__instr 
                          >> 2U)))) {
                if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                    if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__alu_op = 0U;
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__imm_sel = 0U;
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__A_sel = 0U;
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__B_sel = 1U;
                    }
                }
            }
        }
        if ((8U & vlSelfRef.controldecoder_tb__DOT__instr)) {
            if ((4U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                    if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                        vlSelfRef.controldecoder_tb__DOT__dut__DOT__regwen = 0U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.controldecoder_tb__DOT__instr 
                             >> 2U)))) {
            if ((2U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                if ((1U & vlSelfRef.controldecoder_tb__DOT__instr)) {
                    vlSelfRef.controldecoder_tb__DOT__dut__DOT__regwen = 1U;
                }
            }
        }
    }
    vlSelfRef.controldecoder_tb__DOT__ctrl = ((((((IData)(vlSelfRef.controldecoder_tb__DOT__dut__DOT__alu_op) 
                                                  << 8U) 
                                                 | ((IData)(vlSelfRef.controldecoder_tb__DOT__dut__DOT__regwen) 
                                                    << 7U)) 
                                                | (((IData)(vlSelfRef.controldecoder_tb__DOT__dut__DOT__imm_sel) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.controldecoder_tb__DOT__dut__DOT__A_sel) 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.controldecoder_tb__DOT__dut__DOT__B_sel)))) 
                                               << 0x0000000fU) 
                                              | ((0x00007c00U 
                                                  & (vlSelfRef.controldecoder_tb__DOT__instr 
                                                     >> 5U)) 
                                                 | ((0x000003e0U 
                                                     & (vlSelfRef.controldecoder_tb__DOT__instr 
                                                        >> 0x0000000fU)) 
                                                    | (0x0000001fU 
                                                       & (vlSelfRef.controldecoder_tb__DOT__instr 
                                                          >> 7U)))));
}

void Vcontroldecoder_tb___024root___eval_nba(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___eval_nba\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcontroldecoder_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vcontroldecoder_tb___024root___timing_resume(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___timing_resume\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcontroldecoder_tb___024root___eval_triggers__act(Vcontroldecoder_tb___024root* vlSelf);

bool Vcontroldecoder_tb___024root___eval_phase__act(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___eval_phase__act\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcontroldecoder_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcontroldecoder_tb___024root___timing_resume(vlSelf);
        Vcontroldecoder_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcontroldecoder_tb___024root___eval_phase__nba(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___eval_phase__nba\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcontroldecoder_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroldecoder_tb___024root___dump_triggers__nba(Vcontroldecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroldecoder_tb___024root___dump_triggers__act(Vcontroldecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontroldecoder_tb___024root___eval(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___eval\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcontroldecoder_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/testbenches/controldecoder_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcontroldecoder_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/testbenches/controldecoder_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcontroldecoder_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcontroldecoder_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcontroldecoder_tb___024root___eval_debug_assertions(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___eval_debug_assertions\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
