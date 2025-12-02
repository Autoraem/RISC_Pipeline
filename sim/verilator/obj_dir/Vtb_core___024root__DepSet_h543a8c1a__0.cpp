// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_core.h for the primary calling header

#include "Vtb_core__pch.h"
#include "Vtb_core___024root.h"

VL_ATTR_COLD void Vtb_core___024root___eval_initial__TOP(Vtb_core___024root* vlSelf);
VlCoroutine Vtb_core___024root___eval_initial__TOP__Vtiming__0(Vtb_core___024root* vlSelf);
VlCoroutine Vtb_core___024root___eval_initial__TOP__Vtiming__1(Vtb_core___024root* vlSelf);

void Vtb_core___024root___eval_initial(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_initial\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_core___024root___eval_initial__TOP(vlSelf);
    Vtb_core___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_core___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_core___024root___eval_act(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_act\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_core___024root___nba_sequent__TOP__0(Vtb_core___024root* vlSelf);

void Vtb_core___024root___eval_nba(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_nba\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_core___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vtb_core___024root___nba_sequent__TOP__0(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__0\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v0;
    __VdlySet__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v0 = 0;
    // Body
    __VdlySet__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v0 = 0U;
    if (vlSelfRef.tb_core__DOT__rst) {
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i = 0x00000020U;
        __VdlySet__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v0 = 1U;
    }
    if (__VdlySet__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v0) {
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[1U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[2U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[3U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[4U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[5U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[6U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[7U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[8U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[9U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x0aU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x0bU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x0cU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x0dU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x0eU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x0fU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x10U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x11U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x12U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x13U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x14U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x15U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x16U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x17U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x18U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x19U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x1aU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x1bU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x1cU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x1dU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x1eU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x1fU] = 0U;
    }
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 0U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 5U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 0U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 0U;
    if (vlSelfRef.tb_core__DOT__rst) {
        vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[1U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[2U] = 0U;
    } else {
        vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__pc)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r))));
        vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[1U] 
            = (IData)(((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__pc)) 
                         << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r))) 
                       >> 0x00000020U));
        vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[2U] = 1U;
    }
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
    vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r 
        = vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__mem
        [(0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__pc 
                         >> 2U))];
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
    vlSelfRef.tb_core__DOT__dut__DOT__pc = ((IData)(vlSelfRef.tb_core__DOT__rst)
                                             ? 0U : vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_next);
    vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_next 
        = ((IData)(4U) + vlSelfRef.tb_core__DOT__dut__DOT__pc);
}

void Vtb_core___024root___timing_resume(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___timing_resume\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h78f94584__0.resume(
                                                   "@(posedge tb_core.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_core___024root___timing_commit(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___timing_commit\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h78f94584__0.commit(
                                                   "@(posedge tb_core.clk)");
    }
}

void Vtb_core___024root___eval_triggers__act(Vtb_core___024root* vlSelf);

bool Vtb_core___024root___eval_phase__act(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_phase__act\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_core___024root___eval_triggers__act(vlSelf);
    Vtb_core___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_core___024root___timing_resume(vlSelf);
        Vtb_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_core___024root___eval_phase__nba(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_phase__nba\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_core___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__nba(Vtb_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__act(Vtb_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_core___024root___eval(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/testbenches/tb_core.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/testbenches/tb_core.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_core___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_core___024root___eval_debug_assertions(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_debug_assertions\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
