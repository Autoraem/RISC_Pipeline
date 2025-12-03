// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_core.h for the primary calling header

#include "Vtb_core__pch.h"
#include "Vtb_core__Syms.h"
#include "Vtb_core___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__stl(Vtb_core___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_core___024root___eval_triggers__stl(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_triggers__stl\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_core___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_core___024root___stl_sequent__TOP__0(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___stl_sequent__TOP__0\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ VL_ONEHOT_I((((1U == (3U & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U] 
                                             >> 7U))) 
                               << 1U) | (0U == (3U 
                                                & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U] 
                                                   >> 7U)))))))) {
        if ((0U != (((1U == (3U & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U] 
                                   >> 7U))) << 1U) 
                    | (0U == (3U & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U] 
                                    >> 7U)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: execute.sv:32: Assertion failed in %Ntb_core.dut.execute_inst: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(3U 
                                                   & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U] 
                                                      >> 7U)));
                VL_STOP_MT("rtl/pipelinestages/execute.sv", 32, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((1U == (3U & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U] 
                                             >> 5U))) 
                               << 1U) | (0U == (3U 
                                                & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U] 
                                                   >> 5U)))))))) {
        if ((0U != (((1U == (3U & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U] 
                                   >> 5U))) << 1U) 
                    | (0U == (3U & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U] 
                                    >> 5U)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: execute.sv:40: Assertion failed in %Ntb_core.dut.execute_inst: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(3U 
                                                   & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U] 
                                                      >> 5U)));
                VL_STOP_MT("rtl/pipelinestages/execute.sv", 40, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__exmem_reg__q[0U])
                                        ? 1U : 0U)) 
                               << 2U) | (((1U == ((1U 
                                                   & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__exmem_reg__q[0U])
                                                   ? 1U
                                                   : 0U)) 
                                          << 1U) | 
                                         (0U == ((1U 
                                                  & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__exmem_reg__q[0U])
                                                  ? 1U
                                                  : 0U)))))))) {
        if ((0U != (((2U == ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__exmem_reg__q[0U])
                              ? 1U : 0U)) << 2U) | 
                    (((1U == ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__exmem_reg__q[0U])
                               ? 1U : 0U)) << 1U) | 
                     (0U == ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__exmem_reg__q[0U])
                              ? 1U : 0U)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: wb.sv:17: Assertion failed in %Ntb_core.dut.writeback_inst: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(
                                                   (1U 
                                                    & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__exmem_reg__q[0U])
                                                    ? 1U
                                                    : 0U));
                VL_STOP_MT("rtl/pipelinestages/wb.sv", 17, "");
            }
        }
    }
    vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_next 
        = ((IData)(4U) + vlSelfRef.tb_core__DOT__dut__DOT__pc);
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 0U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 0U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 5U;
    vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1 
        = vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
        [(0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                         >> 0x0000000fU))];
    vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2 
        = vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
        [(0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                         >> 0x00000014U))];
    vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
        = ((0U == (3U & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U] 
                         >> 7U))) ? ((vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[3U] 
                                      << 0x0000000eU) 
                                     | (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[2U] 
                                        >> 0x00000012U))
            : ((1U == (3U & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U] 
                             >> 7U))) ? ((vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[4U] 
                                          << 0x0000000eU) 
                                         | (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[3U] 
                                            >> 0x00000012U))
                : 0xdeadbeefU));
    vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B 
        = ((0U == (3U & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U] 
                         >> 5U))) ? ((vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[2U] 
                                      << 0x0000000eU) 
                                     | (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[1U] 
                                        >> 0x00000012U))
            : ((1U == (3U & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U] 
                             >> 5U))) ? ((vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[1U] 
                                          << 0x0000000eU) 
                                         | (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U] 
                                            >> 0x00000012U))
                : 0xdeadbeefU));
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 0U;
    if ((0x00000040U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
        if ((0x00000020U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
            if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                          >> 4U)))) {
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
            }
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
        }
    } else if ((0x00000020U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
        if ((0x00000010U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
            if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                          >> 3U)))) {
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
            }
        } else if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                          >> 2U)))) {
                if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 1U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 1U;
                    }
                }
            }
        }
    } else if ((0x00000010U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
        if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                      >> 3U)))) {
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
        }
    } else {
        if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                      >> 3U)))) {
            if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                          >> 2U)))) {
                if ((2U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                    if ((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])) {
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 1U;
                    }
                }
            }
        }
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
    }
    vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__shamt 
        = (0x0000001fU & vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B);
    vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result 
        = ((0x00001000U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U])
            ? ((0x00000800U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U])
                ? 0U : ((0x00000400U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U])
                         ? 0U : ((0x00000200U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U])
                                  ? ((vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                                      < vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B)
                                      ? 1U : 0U) : 
                                 (VL_LTS_III(32, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B)
                                   ? 1U : 0U)))) : 
           ((0x00000800U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U])
             ? ((0x00000400U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U])
                 ? ((0x00000200U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U])
                     ? VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A, (IData)(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__shamt))
                     : (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                        >> (IData)(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__shamt)))
                 : ((0x00000200U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U])
                     ? (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                        << (IData)(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__shamt))
                     : (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                        ^ vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B)))
             : ((0x00000400U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U])
                 ? ((0x00000200U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U])
                     ? (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                        | vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B)
                     : (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                        & vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B))
                 : ((0x00000200U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__idex_reg__q[0U])
                     ? (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                        - vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B)
                     : (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                        + vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B)))));
    vlSelfRef.tb_core__DOT__dut__DOT__E_zero = (0U 
                                                == vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result);
    vlSelfRef.tb_core__DOT__dut__DOT__E_neg = (vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result 
                                               >> 0x1fU);
    vlSelfRef.__VdfgRegularize_he50b618e_0_0 = ((((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel) 
                                                  << 0x00000011U) 
                                                 | (((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel) 
                                                     << 0x0000000fU) 
                                                    | (0x00007c00U 
                                                       & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                          >> 5U)))) 
                                                | ((0x000003e0U 
                                                    & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                       >> 0x0000000fU)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                         >> 7U))));
    vlSelfRef.tb_core__DOT__dut__DOT____Vcellinp__idex_reg__d[0U] 
        = ((0xfffc0000U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellinp__idex_reg__d[0U]) 
           | ((((0x000001f0U & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                >> 3U)) | (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op)) 
               << 9U) | ((0x000001e0U & (vlSelfRef.__VdfgRegularize_he50b618e_0_0 
                                         >> 0x0000000aU)) 
                         | ((((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op))
                               ? ((~ ((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op) 
                                      >> 1U)) & ((1U 
                                                  & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op))
                                                  ? 
                                                 (vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1 
                                                  >= vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2)
                                                  : 
                                                 (vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1 
                                                  < vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2)))
                               : ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op))
                                   ? ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op))
                                       ? VL_GTES_III(32, vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1, vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2)
                                       : VL_LTS_III(32, vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1, vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2))
                                   : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op))
                                       ? (vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1 
                                          != vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2)
                                       : (vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1 
                                          == vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2)))) 
                             << 4U) | ((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen) 
                                       << 1U)))));
    vlSelfRef.tb_core__DOT__dut__DOT____Vcellinp__idex_reg__d[0U] 
        = ((0x0003ffffU & vlSelfRef.tb_core__DOT__dut__DOT____Vcellinp__idex_reg__d[0U]) 
           | (((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                ? ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                    ? 0U : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                             ? 0U : ((((0x00000ffeU 
                                        & ((- (IData)(
                                                      (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                       >> 0x0000001fU))) 
                                           << 1U)) 
                                       | (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                          >> 0x0000001fU)) 
                                      << 0x00000014U) 
                                     | ((((0x000001feU 
                                           & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                              >> 0x0000000bU)) 
                                          | (1U & (
                                                   vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                   >> 0x00000014U))) 
                                         << 0x0000000bU) 
                                        | (0x000007feU 
                                           & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                              >> 0x00000014U))))))
                : ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                    ? ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                        ? (0xfffff000U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                        : (((- (IData)((vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | ((0x00000800U 
                                                & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                   << 4U)) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                        >> 7U))))))
                    : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                        ? (((- (IData)((vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                     >> 7U))))
                        : (((- (IData)((vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                               >> 0x00000014U))))) 
              << 0x00000012U));
    vlSelfRef.tb_core__DOT__dut__DOT____Vcellinp__idex_reg__d[1U] 
        = ((0xfffc0000U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellinp__idex_reg__d[1U]) 
           | (((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                ? ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                    ? 0U : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                             ? 0U : ((((0x00000ffeU 
                                        & ((- (IData)(
                                                      (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                       >> 0x0000001fU))) 
                                           << 1U)) 
                                       | (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                          >> 0x0000001fU)) 
                                      << 0x00000014U) 
                                     | ((((0x000001feU 
                                           & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                              >> 0x0000000bU)) 
                                          | (1U & (
                                                   vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                   >> 0x00000014U))) 
                                         << 0x0000000bU) 
                                        | (0x000007feU 
                                           & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                              >> 0x00000014U))))))
                : ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                    ? ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                        ? (0xfffff000U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U])
                        : (((- (IData)((vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | ((0x00000800U 
                                                & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                   << 4U)) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                        >> 7U))))))
                    : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                        ? (((- (IData)((vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                                     >> 7U))))
                        : (((- (IData)((vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | (vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
                                               >> 0x00000014U))))) 
              >> 0x0000000eU));
    vlSelfRef.tb_core__DOT__dut__DOT____Vcellinp__idex_reg__d[1U] 
        = ((0x0003ffffU & vlSelfRef.tb_core__DOT__dut__DOT____Vcellinp__idex_reg__d[1U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2)))) 
              << 0x00000012U));
    vlSelfRef.tb_core__DOT__dut__DOT____Vcellinp__idex_reg__d[2U] 
        = (((IData)((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2)))) 
            >> 0x0000000eU) | ((IData)(((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2))) 
                                        >> 0x00000020U)) 
                               << 0x00000012U));
    vlSelfRef.tb_core__DOT__dut__DOT____Vcellinp__idex_reg__d[3U] 
        = (((IData)(((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd1)) 
                       << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__rd2))) 
                     >> 0x00000020U)) >> 0x0000000eU) 
           | ((IData)((0x00000001ffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[2U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[1U]))))) 
              << 0x00000012U));
    vlSelfRef.tb_core__DOT__dut__DOT____Vcellinp__idex_reg__d[4U] 
        = (0x0007ffffU & (((IData)((0x00000001ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[2U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[1U]))))) 
                           >> 0x0000000eU) | ((IData)(
                                                      ((0x00000001ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[2U])) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[1U])))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000012U)));
}
