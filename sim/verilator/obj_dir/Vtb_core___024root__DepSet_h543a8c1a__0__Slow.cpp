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
    vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0U] = 0U;
    VL_WRITEF_NX("IMEM: loading rtl/program/program.hex\n",0);
    VL_READMEM_N(true, 32, 1024, 0, "rtl/program/program.hex"s
                 ,  &(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00001000U, vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem[(0x00000fffU 
                                                                              & vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__unnamedblk1__DOT__i);
    }
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
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    VL_SCOPED_RAND_RESET_W(65, vlSelf->tb_core__DOT__dut__DOT__if_id_reg_q, __VscopeHash, 1181663855806439551ull);
    VL_SCOPED_RAND_RESET_W(169, vlSelf->tb_core__DOT__dut__DOT__id_ex_reg_q, __VscopeHash, 14441171469572941610ull);
    vlSelf->tb_core__DOT__dut__DOT__forwardA = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5877717944815825839ull);
    vlSelf->tb_core__DOT__dut__DOT__forwardB = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15152561527454703912ull);
    vlSelf->tb_core__DOT__dut__DOT__E_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15901433749350066923ull);
    vlSelf->tb_core__DOT__dut__DOT__E_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9116721820822723097ull);
    vlSelf->tb_core__DOT__dut__DOT__E_neg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18365455196084109386ull);
    VL_SCOPED_RAND_RESET_W(107, vlSelf->tb_core__DOT__dut__DOT__ex_mem_reg_q, __VscopeHash, 13763030416122723437ull);
    VL_SCOPED_RAND_RESET_W(105, vlSelf->tb_core__DOT__dut__DOT__mem_wb_reg_q, __VscopeHash, 6504542176122616774ull);
    vlSelf->tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14409100682285873029ull);
    vlSelf->tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17295239334946200497ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4171299795583919939ull);
    }
    vlSelf->tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6479035930879984337ull);
    vlSelf->tb_core__DOT__dut__DOT__ifid_reg__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7303408287192899924ull);
    vlSelf->tb_core__DOT__dut__DOT__ifid_reg__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11670577037283121449ull);
    vlSelf->tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17032642641249038862ull);
    vlSelf->tb_core__DOT__dut__DOT__control_inst__DOT__regwen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2371799827205752826ull);
    vlSelf->tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16772755223945442265ull);
    vlSelf->tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9139531167452132178ull);
    vlSelf->tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14522636914837652536ull);
    vlSelf->tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11560442581661963556ull);
    vlSelf->tb_core__DOT__dut__DOT__control_inst__DOT__branch_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13018256553452186391ull);
    vlSelf->tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2770296708128633059ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14737035311315748387ull);
    }
    vlSelf->tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15869861367899417134ull);
    VL_SCOPED_RAND_RESET_W(169, vlSelf->tb_core__DOT__dut__DOT__idex_reg__DOT__d, __VscopeHash, 5301236597491074003ull);
    vlSelf->tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardA_br = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18357800766840633366ull);
    vlSelf->tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardB_br = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7790293037272462907ull);
    vlSelf->tb_core__DOT__dut__DOT__hazard_unit_inst__DOT__id_uses_rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17171534198498134360ull);
    vlSelf->tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7225088365942859786ull);
    vlSelf->tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12500350972408830722ull);
    vlSelf->tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3060770305801025188ull);
    vlSelf->tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6078805730034543554ull);
    vlSelf->tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10094088239860621142ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10877922472453176096ull);
    }
    vlSelf->tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__rdata_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15364332301910044379ull);
    vlSelf->tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6936226912066489694ull);
    vlSelf->__VdfgRegularize_he50b618e_0_2 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8473780108624459672ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_core__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8426859880970588522ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
