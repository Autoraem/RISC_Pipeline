// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_core__Syms.h"


void Vtb_core___024root__trace_chg_0_sub_0(Vtb_core___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_core___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_chg_0\n"); );
    // Init
    Vtb_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_core___024root*>(voidSelf);

    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;

    // Body
    Vtb_core___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_core___024root__trace_chg_0_sub_0(Vtb_core___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_chg_0_sub_0\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);

    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_core__DOT__dut__DOT__pc),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_core__DOT__dut__DOT__pc_previous),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r),32);
        bufp->chgBit(oldp+3,((1U & (~ (IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_stall)))));
        bufp->chgBit(oldp+4,((1U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[2U])));
        bufp->chgIData(oldp+5,(vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[1U]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U]),32);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op),4);
        bufp->chgBit(oldp+8,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen));
        bufp->chgCData(oldp+9,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel),3);
        bufp->chgCData(oldp+10,((7U & (IData)((vlSelfRef.__VdfgRegularize_he50b618e_0_2 
                                               >> 0x0000001eU)))),3);
        bufp->chgCData(oldp+11,((7U & (IData)((vlSelfRef.__VdfgRegularize_he50b618e_0_2 
                                               >> 0x0000001bU)))),3);
        bufp->chgCData(oldp+12,((3U & (IData)((vlSelfRef.__VdfgRegularize_he50b618e_0_2 
                                               >> 0x00000019U)))),2);
        bufp->chgCData(oldp+13,((7U & (IData)((vlSelfRef.__VdfgRegularize_he50b618e_0_2 
                                               >> 0x00000016U)))),3);
        bufp->chgCData(oldp+14,((0x0000007fU & (IData)(
                                                       (vlSelfRef.__VdfgRegularize_he50b618e_0_2 
                                                        >> 0x0000000fU)))),7);
        bufp->chgCData(oldp+15,((0x0000001fU & (IData)(
                                                       (vlSelfRef.__VdfgRegularize_he50b618e_0_2 
                                                        >> 0x0000000aU)))),5);
        bufp->chgCData(oldp+16,((0x0000001fU & (IData)(
                                                       (vlSelfRef.__VdfgRegularize_he50b618e_0_2 
                                                        >> 5U)))),5);
        bufp->chgCData(oldp+17,((0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_2))),5);
        bufp->chgIData(oldp+18,(((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                                  ? ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                                      ? 0U : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                                               ? 0U
                                               : ((
                                                   ((0x00000ffeU 
                                                     & ((- (IData)(
                                                                   (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                                    >> 0x0000001fU))) 
                                                        << 1U)) 
                                                    | (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                       >> 0x0000001fU)) 
                                                   << 0x00000014U) 
                                                  | ((((0x000001feU 
                                                        & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                           >> 0x0000000bU)) 
                                                       | (1U 
                                                          & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                             >> 0x00000014U))) 
                                                      << 0x0000000bU) 
                                                     | (0x000007feU 
                                                        & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                           >> 0x00000014U))))))
                                  : ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                                      ? ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                                          ? (0xfffff000U 
                                             & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                          : (((- (IData)(
                                                         (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                          >> 0x0000001fU))) 
                                              << 0x0000000cU) 
                                             | ((0x00000800U 
                                                 & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                    << 4U)) 
                                                | ((0x000007e0U 
                                                    & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001eU 
                                                      & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                         >> 7U))))))
                                      : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                                          ? (((- (IData)(
                                                         (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                          >> 0x0000001fU))) 
                                              << 0x0000000cU) 
                                             | ((0x00000fe0U 
                                                 & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                    >> 0x00000014U)) 
                                                | (0x0000001fU 
                                                   & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                      >> 7U))))
                                          : (((- (IData)(
                                                         (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                          >> 0x0000001fU))) 
                                              << 0x0000000cU) 
                                             | (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                >> 0x00000014U)))))),32);
        bufp->chgIData(oldp+19,(((0U == (0x0000001fU 
                                         & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                            >> 0x0000000fU)))
                                  ? 0U : (((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                            >> 2U) 
                                           & (((0x0000001fU 
                                                & (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                                   >> 3U)) 
                                               == (0x0000001fU 
                                                   & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                      >> 0x0000000fU))) 
                                              & (0U 
                                                 != 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                                     >> 3U)))))
                                           ? vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__wd
                                           : vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
                                          [(0x0000001fU 
                                            & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                               >> 0x0000000fU))]))),32);
        bufp->chgIData(oldp+20,(((0U == (0x0000001fU 
                                         & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                            >> 0x00000014U)))
                                  ? 0U : (((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                            >> 2U) 
                                           & (((0x0000001fU 
                                                & (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                                   >> 3U)) 
                                               == (0x0000001fU 
                                                   & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                      >> 0x00000014U))) 
                                              & (0U 
                                                 != 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                                     >> 3U)))))
                                           ? vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__wd
                                           : vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
                                          [(0x0000001fU 
                                            & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                               >> 0x00000014U))]))),32);
        bufp->chgBit(oldp+21,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[5U] 
                                     >> 8U))));
        bufp->chgIData(oldp+22,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[5U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[4U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+23,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[4U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[3U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+24,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[3U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[2U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+25,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[2U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[1U] 
                                  >> 8U))),32);
        bufp->chgCData(oldp+26,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[1U] 
                                                >> 3U))),5);
        bufp->chgCData(oldp+27,((0x0000000fU & ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[1U] 
                                                 << 1U) 
                                                | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                                   >> 0x0000001fU)))),4);
        bufp->chgCData(oldp+28,((7U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                       >> 0x0000001cU))),3);
        bufp->chgCData(oldp+29,((7U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                       >> 0x00000019U))),3);
        bufp->chgCData(oldp+30,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+31,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                                >> 0x0000000fU))),5);
        bufp->chgBit(oldp+32,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                     >> 0x0000000eU))));
        bufp->chgBit(oldp+33,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                     >> 0x0000000dU))));
        bufp->chgBit(oldp+34,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                     >> 0x0000000cU))));
        bufp->chgCData(oldp+35,((3U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                       >> 0x0000000aU))),2);
        bufp->chgCData(oldp+36,((7U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                       >> 7U))),3);
        bufp->chgCData(oldp+37,((0x0000007fU & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U])),7);
        bufp->chgBit(oldp+38,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                     >> 8U))));
        bufp->chgIData(oldp+39,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+40,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+41,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[2U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+42,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[2U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U] 
                                  >> 8U))),32);
        bufp->chgCData(oldp+43,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U] 
                                                >> 3U))),5);
        bufp->chgCData(oldp+44,((0x0000000fU & ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U] 
                                                 << 1U) 
                                                | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                                   >> 0x0000001fU)))),4);
        bufp->chgCData(oldp+45,((7U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                       >> 0x0000001cU))),3);
        bufp->chgCData(oldp+46,((7U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                       >> 0x00000019U))),3);
        bufp->chgCData(oldp+47,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+48,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                                >> 0x0000000fU))),5);
        bufp->chgBit(oldp+49,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                     >> 0x0000000eU))));
        bufp->chgBit(oldp+50,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                     >> 0x0000000dU))));
        bufp->chgBit(oldp+51,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                     >> 0x0000000cU))));
        bufp->chgCData(oldp+52,((3U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                       >> 0x0000000aU))),2);
        bufp->chgCData(oldp+53,((7U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                       >> 7U))),3);
        bufp->chgCData(oldp+54,((0x0000007fU & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])),7);
        bufp->chgCData(oldp+55,(vlSelfRef.tb_core__DOT__dut__DOT__forwardA),3);
        bufp->chgCData(oldp+56,(vlSelfRef.tb_core__DOT__dut__DOT__forwardB),3);
        bufp->chgCData(oldp+57,(vlSelfRef.tb_core__DOT__dut__DOT__forwardA_br),2);
        bufp->chgCData(oldp+58,(vlSelfRef.tb_core__DOT__dut__DOT__forwardB_br),2);
        bufp->chgBit(oldp+59,(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_stall));
        bufp->chgBit(oldp+60,(vlSelfRef.tb_core__DOT__dut__DOT__flush_ifid));
        bufp->chgBit(oldp+61,(((IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_stall) 
                               | (IData)(vlSelfRef.tb_core__DOT__dut__DOT__flush_ifid))));
        bufp->chgIData(oldp+62,(vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result),32);
        bufp->chgBit(oldp+63,(vlSelfRef.tb_core__DOT__dut__DOT__E_zero));
        bufp->chgBit(oldp+64,(vlSelfRef.tb_core__DOT__dut__DOT__E_neg));
        bufp->chgBit(oldp+65,(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_sel));
        bufp->chgIData(oldp+66,(((IData)(4U) + ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                                                   >> 8U)))),32);
        bufp->chgBit(oldp+67,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[3U] 
                                     >> 0x0000000aU))));
        bufp->chgIData(oldp+68,(((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[3U] 
                                  << 0x00000016U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
                                  >> 0x0000000aU))),32);
        bufp->chgIData(oldp+69,(((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
                                  << 0x00000016U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                  >> 0x0000000aU))),32);
        bufp->chgIData(oldp+70,(((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                  << 0x00000016U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                  >> 0x0000000aU))),32);
        bufp->chgCData(oldp+71,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                                >> 5U))),5);
        bufp->chgBit(oldp+72,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                     >> 4U))));
        bufp->chgBit(oldp+73,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                     >> 3U))));
        bufp->chgBit(oldp+74,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                     >> 2U))));
        bufp->chgCData(oldp+75,((3U & vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U])),2);
        bufp->chgIData(oldp+76,(vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__rdata_r),32);
        bufp->chgBit(oldp+77,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[3U] 
                                     >> 8U))));
        bufp->chgIData(oldp+78,(((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[3U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[2U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+79,(((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[2U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[1U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+80,(((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[1U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                  >> 8U))),32);
        bufp->chgCData(oldp+81,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                                >> 3U))),5);
        bufp->chgBit(oldp+82,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                     >> 2U))));
        bufp->chgCData(oldp+83,((3U & vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U])),2);
        bufp->chgIData(oldp+84,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__wd),32);
        bufp->chgCData(oldp+85,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+86,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+87,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                >> 7U))),5);
        bufp->chgCData(oldp+88,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op),4);
        bufp->chgCData(oldp+89,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel),3);
        bufp->chgCData(oldp+90,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel),3);
        bufp->chgCData(oldp+91,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel),3);
        bufp->chgCData(oldp+92,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel),2);
        bufp->chgCData(oldp+93,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__branch_type),3);
        bufp->chgCData(oldp+94,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type),7);
        bufp->chgIData(oldp+95,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[1]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[2]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[3]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[4]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[5]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[6]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[7]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[8]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[9]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[10]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[11]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[12]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[13]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[14]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[15]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[16]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[17]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[18]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[19]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[20]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[21]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[22]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[23]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[24]),32);
        bufp->chgIData(oldp+120,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[25]),32);
        bufp->chgIData(oldp+121,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[26]),32);
        bufp->chgIData(oldp+122,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[27]),32);
        bufp->chgIData(oldp+123,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[28]),32);
        bufp->chgIData(oldp+124,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[29]),32);
        bufp->chgIData(oldp+125,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[30]),32);
        bufp->chgIData(oldp+126,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[31]),32);
        bufp->chgIData(oldp+127,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+128,(vlSelfRef.tb_core__DOT__dut__DOT____Vcellinp__execute_inst__memwb_forwarded_data),32);
        bufp->chgCData(oldp+129,((7U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                        >> 7U))),3);
        bufp->chgIData(oldp+130,(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A),32);
        bufp->chgIData(oldp+131,(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B),32);
        bufp->chgIData(oldp+132,(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__rs1_br),32);
        bufp->chgIData(oldp+133,(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__rs2_br),32);
        bufp->chgCData(oldp+134,(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__shamt),5);
        bufp->chgSData(oldp+135,((0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__pc 
                                                 >> 2U))),10);
        bufp->chgIData(oldp+136,(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_next),32);
        bufp->chgIData(oldp+137,(((IData)(4U) + vlSelfRef.tb_core__DOT__dut__DOT__pc)),32);
        bufp->chgCData(oldp+138,((0x0000007fU & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])),7);
        bufp->chgCData(oldp+139,((0x0000007fU & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])),7);
        bufp->chgBit(oldp+140,(vlSelfRef.tb_core__DOT__dut__DOT__hazard_unit_inst__DOT__id_uses_rs1));
        bufp->chgBit(oldp+141,(((0x00000040U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                 ? ((1U & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                           >> 5U)) 
                                    && ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                  >> 4U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                    >> 3U))) 
                                            && ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                     >> 2U))) 
                                                && ((1U 
                                                     & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                        >> 1U)) 
                                                    && (1U 
                                                        & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U]))))))
                                 : ((1U & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                           >> 5U)) 
                                    && ((0x00000010U 
                                         & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                         ? ((1U & (~ 
                                                   (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                    >> 3U))) 
                                            && ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                     >> 2U))) 
                                                && ((1U 
                                                     & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                        >> 1U)) 
                                                    && (1U 
                                                        & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U]))))
                                         : ((1U & (~ 
                                                   (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                    >> 3U))) 
                                            && ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                     >> 2U))) 
                                                && ((1U 
                                                     & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                        >> 1U)) 
                                                    && (1U 
                                                        & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])))))))));
        bufp->chgBit(oldp+142,((3U == (0x0000007fU 
                                       & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U]))));
        bufp->chgBit(oldp+143,((0x63U == (0x0000007fU 
                                          & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U]))));
        bufp->chgBit(oldp+144,(((0x6fU == (0x0000007fU 
                                           & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])) 
                                | (0x67U == (0x0000007fU 
                                             & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])))));
        bufp->chgBit(oldp+145,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                 >> 8U) & ((IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_sel) 
                                           & (0x63U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U]))))));
        bufp->chgBit(oldp+146,((((0x6fU == (0x0000007fU 
                                            & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])) 
                                 | (0x67U == (0x0000007fU 
                                              & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U]))) 
                                & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                   >> 8U))));
        bufp->chgSData(oldp+147,((0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                                 >> 0x0000000cU))),12);
    }
    bufp->chgBit(oldp+148,(vlSelfRef.tb_core__DOT__clk));
    bufp->chgBit(oldp+149,(vlSelfRef.tb_core__DOT__rst));
    bufp->chgIData(oldp+150,(vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__unnamedblk1__DOT__i),32);
}

void Vtb_core___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_cleanup\n"); );
    // Init
    Vtb_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_core___024root*>(voidSelf);

    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
