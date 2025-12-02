// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_core.h for the primary calling header

#include "Vtb_core__pch.h"
#include "Vtb_core___024root.h"

VL_ATTR_COLD void Vtb_core___024root___eval_static(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_static\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core__DOT__clk__0 
        = vlSelfRef.tb_core__DOT__clk;
}

VL_ATTR_COLD void Vtb_core___024root___eval_initial__TOP(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_initial__TOP\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("IMEM: loading rtl/program/program.hex\n",0);
    VL_READMEM_N(true, 32, 1024, 0, "rtl/program/program.hex"s
                 ,  &(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb_core___024root___eval_final(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_final\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__stl(Vtb_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_core___024root___eval_phase__stl(Vtb_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_core___024root___eval_settle(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_settle\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_core___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/testbenches/tb_core.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_core___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__stl(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___dump_triggers__stl\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_core___024root___stl_sequent__TOP__0(Vtb_core___024root* vlSelf);
VL_ATTR_COLD void Vtb_core___024root____Vm_traceActivitySetAll(Vtb_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_core___024root___eval_stl(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_stl\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_core___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_core___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_core___024root___stl_sequent__TOP__0(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___stl_sequent__TOP__0\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 0U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 5U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 0U;
    vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_next 
        = ((IData)(4U) + vlSelfRef.tb_core__DOT__dut__DOT__pc);
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 0U;
    if ((0x00000040U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
        if ((0x00000020U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
            if ((0x00000010U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                            if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                                vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 0U;
                            }
                        }
                    }
                }
            } else if ((8U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                if ((4U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 1U;
                        }
                    }
                }
            } else if ((4U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 1U;
                    }
                }
            } else if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 0U;
                }
            }
            if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                          >> 4U)))) {
                if ((8U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    if ((4U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                            if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                                vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 4U;
                                vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 1U;
                                vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 2U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 0U;
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 2U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 0U;
                    }
                }
                if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                            if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                                vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 0U;
                            }
                        }
                    } else if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x00000020U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
        if ((0x00000010U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
            if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                          >> 3U)))) {
                if ((4U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 1U;
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 3U;
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 2U;
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 1U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 5U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 0U;
                    }
                }
                if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                            if ((0x40000000U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                                if ((0x00004000U & 
                                     vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                                    if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                  >> 0x0000000dU)))) {
                                        if ((0x00001000U 
                                             & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 7U;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                   >> 0x0000000dU)))) {
                                    if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                  >> 0x0000000cU)))) {
                                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 1U;
                                    }
                                }
                            } else {
                                vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op 
                                    = ((0x00004000U 
                                        & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                                        ? ((0x00002000U 
                                            & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                                            ? ((0x00001000U 
                                                & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                                                ? 2U
                                                : 3U)
                                            : ((0x00001000U 
                                                & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                                                ? 6U
                                                : 4U))
                                        : ((0x00002000U 
                                            & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                                            ? ((0x00001000U 
                                                & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                                                ? 9U
                                                : 8U)
                                            : ((0x00001000U 
                                                & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                                                ? 5U
                                                : 0U)));
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                          >> 2U)))) {
                if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 1U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 1U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 0U;
                    }
                }
            }
        }
    } else if ((0x00000010U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
        if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                      >> 3U)))) {
            if ((4U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 1U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 3U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 1U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 1U;
                    }
                }
            } else if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 1U;
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 0U;
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 1U;
                }
            }
            if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                          >> 2U)))) {
                if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op 
                            = ((0x00004000U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                                ? ((0x00002000U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                                    ? ((0x00001000U 
                                        & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                                        ? 2U : 3U) : 
                                   ((0x00001000U & 
                                     vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                                     ? ((0x40000000U 
                                         & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                                         ? 7U : 6U)
                                     : 4U)) : ((0x00002000U 
                                                & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                                                ? (
                                                   (0x00001000U 
                                                    & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (0x00001000U 
                                                    & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                                                    ? 5U
                                                    : 0U)));
                    }
                }
            }
        }
    } else {
        if ((8U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
            if ((4U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 0U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                             >> 2U)))) {
            if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 1U;
                }
            }
        }
        if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                      >> 3U)))) {
            if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                          >> 2U)))) {
                if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 1U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 0U;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1 
        = vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
        [(0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                         >> 0x0000000fU))];
    vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2 
        = vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
        [(0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                         >> 0x00000014U))];
    vlSelfRef.tb_core__DOT__dut__DOT__branch_taken 
        = ((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op))
            ? ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op))
                ? ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op))
                    ? (vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1 
                       >= vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2)
                    : (vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1 
                       < vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2))
                : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op))
                    ? VL_GTES_III(32, vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1, vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2)
                    : VL_LTS_III(32, vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1, vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2)))
            : ((1U & (~ ((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op) 
                         >> 1U))) && ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op))
                                       ? (vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1 
                                          != vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2)
                                       : (vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1 
                                          == vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2))));
    VL_WRITEF_NX("Branch Compare: rs1 = %0#, rs2 = %0#, funct3 = %b, take_branch = %b\n",0,
                 32,vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1,
                 32,vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2,
                 3,(7U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op)),
                 1,(IData)(vlSelfRef.tb_core__DOT__dut__DOT__branch_taken));
}

VL_ATTR_COLD void Vtb_core___024root___eval_triggers__stl(Vtb_core___024root* vlSelf);

VL_ATTR_COLD bool Vtb_core___024root___eval_phase__stl(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_phase__stl\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_core___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_core___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__act(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___dump_triggers__act\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_core.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__nba(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___dump_triggers__nba\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_core.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_core___024root____Vm_traceActivitySetAll(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root____Vm_traceActivitySetAll\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtb_core___024root___ctor_var_reset(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___ctor_var_reset\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_core__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6610376131445473662ull);
    vlSelf->tb_core__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17748420191367145818ull);
    vlSelf->tb_core__DOT__dut__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11829988500410995702ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q, __VscopeHash, 217298331171805065ull);
    vlSelf->tb_core__DOT__dut__DOT__branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1533118207850177698ull);
    vlSelf->tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17295239334946200497ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4171299795583919939ull);
    }
    vlSelf->tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6479035930879984337ull);
    vlSelf->tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17032642641249038862ull);
    vlSelf->tb_core__DOT__dut__DOT__control_inst__DOT__regwen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2371799827205752826ull);
    vlSelf->tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16772755223945442265ull);
    vlSelf->tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9139531167452132178ull);
    vlSelf->tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14522636914837652536ull);
    vlSelf->tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2375486721544720482ull);
    vlSelf->tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6212232700302964165ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14737035311315748387ull);
    }
    vlSelf->tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15869861367899417134ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_core__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8426859880970588522ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
