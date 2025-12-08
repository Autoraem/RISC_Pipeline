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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
                               [(0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                >> 0x0000000fU))]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
                               [(0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                >> 0x00000014U))]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[1]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[2]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[3]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[4]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[5]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[6]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[7]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[8]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[9]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[10]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[11]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[12]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[13]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[14]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[15]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[16]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[17]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[18]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[19]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[20]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[21]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[22]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[23]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[24]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[25]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[26]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[27]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[28]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[29]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[30]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+34,(vlSelfRef.tb_core__DOT__dut__DOT__pc),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r),32);
        bufp->chgBit(oldp+36,((1U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[2U])));
        bufp->chgIData(oldp+37,(vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[1U]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U]),32);
        bufp->chgCData(oldp+39,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op),4);
        bufp->chgBit(oldp+40,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen));
        bufp->chgCData(oldp+41,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel),3);
        bufp->chgCData(oldp+42,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel),3);
        bufp->chgCData(oldp+43,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel),3);
        bufp->chgCData(oldp+44,((3U & (vlSelfRef.__VdfgRegularize_he50b618e_0_1 
                                       >> 0x00000019U))),2);
        bufp->chgCData(oldp+45,((7U & (vlSelfRef.__VdfgRegularize_he50b618e_0_1 
                                       >> 0x00000016U))),3);
        bufp->chgCData(oldp+46,((0x0000007fU & (vlSelfRef.__VdfgRegularize_he50b618e_0_1 
                                                >> 0x0000000fU))),7);
        bufp->chgCData(oldp+47,((0x0000001fU & (vlSelfRef.__VdfgRegularize_he50b618e_0_1 
                                                >> 0x0000000aU))),5);
        bufp->chgCData(oldp+48,((0x0000001fU & (vlSelfRef.__VdfgRegularize_he50b618e_0_1 
                                                >> 5U))),5);
        bufp->chgCData(oldp+49,((0x0000001fU & vlSelfRef.__VdfgRegularize_he50b618e_0_1)),5);
        bufp->chgIData(oldp+50,(((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
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
        bufp->chgBit(oldp+51,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[4U] 
                                     >> 0x0000001eU))));
        bufp->chgIData(oldp+52,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[4U] 
                                  << 2U) | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[3U] 
                                            >> 0x0000001eU))),32);
        bufp->chgIData(oldp+53,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[3U] 
                                  << 2U) | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[2U] 
                                            >> 0x0000001eU))),32);
        bufp->chgIData(oldp+54,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[2U] 
                                  << 2U) | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[1U] 
                                            >> 0x0000001eU))),32);
        bufp->chgIData(oldp+55,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[1U] 
                                  << 2U) | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                            >> 0x0000001eU))),32);
        bufp->chgCData(oldp+56,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                                >> 0x00000019U))),5);
        bufp->chgCData(oldp+57,((0x0000000fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                                >> 0x00000015U))),4);
        bufp->chgCData(oldp+58,((3U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                       >> 0x00000013U))),2);
        bufp->chgCData(oldp+59,((3U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                       >> 0x00000011U))),2);
        bufp->chgCData(oldp+60,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                                >> 0x0000000cU))),5);
        bufp->chgCData(oldp+61,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                                >> 7U))),5);
        bufp->chgBit(oldp+62,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                     >> 6U))));
        bufp->chgBit(oldp+63,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+64,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                     >> 4U))));
        bufp->chgBit(oldp+65,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U] 
                                     >> 3U))));
        bufp->chgCData(oldp+66,((7U & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_d[0U])),3);
        bufp->chgBit(oldp+67,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                                     >> 0x0000001eU))));
        bufp->chgIData(oldp+68,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                                  << 2U) | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] 
                                            >> 0x0000001eU))),32);
        bufp->chgIData(oldp+69,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] 
                                  << 2U) | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[2U] 
                                            >> 0x0000001eU))),32);
        bufp->chgIData(oldp+70,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[2U] 
                                  << 2U) | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U] 
                                            >> 0x0000001eU))),32);
        bufp->chgIData(oldp+71,(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U] 
                                  << 2U) | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                            >> 0x0000001eU))),32);
        bufp->chgCData(oldp+72,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                                >> 0x00000019U))),5);
        bufp->chgCData(oldp+73,((0x0000000fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                                >> 0x00000015U))),4);
        bufp->chgCData(oldp+74,((3U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                       >> 0x00000013U))),2);
        bufp->chgCData(oldp+75,((3U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                       >> 0x00000011U))),2);
        bufp->chgCData(oldp+76,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                                >> 0x0000000cU))),5);
        bufp->chgCData(oldp+77,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                                >> 7U))),5);
        bufp->chgBit(oldp+78,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                     >> 6U))));
        bufp->chgBit(oldp+79,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+80,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                     >> 4U))));
        bufp->chgBit(oldp+81,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                     >> 3U))));
        bufp->chgCData(oldp+82,((7U & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])),3);
        bufp->chgCData(oldp+83,(vlSelfRef.tb_core__DOT__dut__DOT__forwardA),3);
        bufp->chgCData(oldp+84,(vlSelfRef.tb_core__DOT__dut__DOT__forwardB),3);
        bufp->chgCData(oldp+85,(vlSelfRef.tb_core__DOT__dut__DOT__forwardA_br),2);
        bufp->chgCData(oldp+86,(vlSelfRef.tb_core__DOT__dut__DOT__forwardB_br),2);
        bufp->chgIData(oldp+87,(vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result),32);
        bufp->chgBit(oldp+88,(vlSelfRef.tb_core__DOT__dut__DOT__E_zero));
        bufp->chgBit(oldp+89,(vlSelfRef.tb_core__DOT__dut__DOT__E_neg));
        bufp->chgBit(oldp+90,((IData)(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                                        >> 0x0000001eU) 
                                       & ((4U & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                           ? ((2U & 
                                               vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                               ? vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U]
                                               : ((1U 
                                                   & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                                   ? 
                                                  (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1 
                                                   >= vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2)
                                                   : 
                                                  (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1 
                                                   < vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2)))
                                           : ((2U & 
                                               vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                               ? ((1U 
                                                   & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                                   ? 
                                                  VL_GTES_III(32, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2)
                                                   : 
                                                  VL_LTS_III(32, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2))
                                               : ((1U 
                                                   & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                                   ? 
                                                  (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1 
                                                   != vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2)
                                                   : 
                                                  (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1 
                                                   == vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2))))))));
        bufp->chgBit(oldp+91,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
                                     >> 9U))));
        bufp->chgIData(oldp+92,(((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
                                  << 0x00000017U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                  >> 9U))),32);
        bufp->chgIData(oldp+93,(((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                  << 0x00000017U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                  >> 9U))),32);
        bufp->chgCData(oldp+94,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                                >> 4U))),5);
        bufp->chgBit(oldp+95,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                     >> 3U))));
        bufp->chgBit(oldp+96,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+97,((1U & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+98,((1U & vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U])));
        bufp->chgIData(oldp+99,(vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__rdata_r),32);
        bufp->chgIData(oldp+100,(((1U & vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U])
                                   ? vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__rdata_r
                                   : ((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
                                       << 0x00000017U) 
                                      | (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                         >> 9U)))),32);
        bufp->chgBit(oldp+101,((1U & (IData)((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                              >> 0x00000026U)))));
        bufp->chgIData(oldp+102,((IData)((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                          >> 6U))),32);
        bufp->chgCData(oldp+103,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                         >> 1U)))),5);
        bufp->chgBit(oldp+104,((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q))));
        bufp->chgIData(oldp+105,(((0U == ((0U != (IData)(
                                                         (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                          >> 6U)))
                                           ? 1U : 0U))
                                   ? (IData)((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                              >> 6U))
                                   : ((1U == ((0U != (IData)(
                                                             (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                              >> 6U)))
                                               ? 1U
                                               : 0U))
                                       ? (IData)((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                  >> 6U))
                                       : ((2U == ((0U 
                                                   != (IData)(
                                                              (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                               >> 6U)))
                                                   ? 1U
                                                   : 0U))
                                           ? ((IData)(4U) 
                                              + (IData)(
                                                        (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                         >> 6U)))
                                           : 0xdeadbeefU)))),32);
        bufp->chgCData(oldp+106,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+107,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                 >> 0x00000014U))),5);
        bufp->chgCData(oldp+108,((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+109,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op),4);
        bufp->chgCData(oldp+110,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel),3);
        bufp->chgCData(oldp+111,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel),3);
        bufp->chgCData(oldp+112,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel),3);
        bufp->chgCData(oldp+113,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel),2);
        bufp->chgCData(oldp+114,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__branch_type),3);
        bufp->chgCData(oldp+115,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type),7);
        bufp->chgIData(oldp+116,(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+117,((7U & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])),3);
        bufp->chgIData(oldp+118,(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A),32);
        bufp->chgIData(oldp+119,(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B),32);
        bufp->chgIData(oldp+120,(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1),32);
        bufp->chgIData(oldp+121,(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2),32);
        bufp->chgCData(oldp+122,(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__shamt),5);
        bufp->chgSData(oldp+123,((0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__pc 
                                                 >> 2U))),10);
        bufp->chgIData(oldp+124,(((IData)(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                                            >> 0x0000001eU) 
                                           & ((4U & 
                                               vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                               ? ((2U 
                                                   & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                                   ? 
                                                  vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U]
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                                    ? 
                                                   (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1 
                                                    >= vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2)
                                                    : 
                                                   (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1 
                                                    < vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2)))
                                               : ((2U 
                                                   & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                                    ? 
                                                   VL_GTES_III(32, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2)
                                                    : 
                                                   VL_LTS_III(32, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                                    ? 
                                                   (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1 
                                                    != vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2)
                                                    : 
                                                   (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1 
                                                    == vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2))))))
                                   ? vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result
                                   : ((IData)(4U) + vlSelfRef.tb_core__DOT__dut__DOT__pc))),32);
        bufp->chgIData(oldp+125,(((IData)(4U) + vlSelfRef.tb_core__DOT__dut__DOT__pc)),32);
        bufp->chgCData(oldp+126,((3U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                        >> 0x00000013U))),3);
        bufp->chgCData(oldp+127,((3U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                        >> 0x00000011U))),3);
        bufp->chgSData(oldp+128,((0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                                 >> 0x0000000bU))),12);
        bufp->chgIData(oldp+129,(((IData)(4U) + (IData)(
                                                        (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                         >> 6U)))),32);
        bufp->chgCData(oldp+130,(((0U != (IData)((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q 
                                                  >> 6U)))
                                   ? 1U : 0U)),2);
    }
    bufp->chgBit(oldp+131,(vlSelfRef.tb_core__DOT__clk));
    bufp->chgBit(oldp+132,(vlSelfRef.tb_core__DOT__rst));
    bufp->chgIData(oldp+133,(vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__unnamedblk1__DOT__i),32);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
