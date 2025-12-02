// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_core__Syms.h"


VL_ATTR_COLD void Vtb_core___024root__trace_init_sub__TOP__0(Vtb_core___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_init_sub__TOP__0\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"pc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"branch_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"pctemp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"instrtemp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"validtemp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1,0,"alu_op",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"regwen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"imm_sel",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,0,"A_sel",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"B_sel",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBit(c+24,0,"control_inst_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("control_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("control_signals", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1,0,"alu_op",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"regwen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"imm_sel",2, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,0,"A_sel",3, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"B_sel",4, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+23,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"alu_op",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"regwen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"imm_sel",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+8,0,"A_sel",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"B_sel",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("fetch_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+26,0,"INIT_HEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 183,0);
    tracep->declBit(c+17,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"pc_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"branch_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("imem_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+26,0,"INIT_HEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 183,0);
    tracep->declBit(c+17,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+11,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"dout_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pcreg_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"branch_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"pc_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ifid_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+32,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+14,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_core___024root__trace_init_top(Vtb_core___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_init_top\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_core___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_core___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_core___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_core___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_core___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_core___024root__trace_register(Vtb_core___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_register\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_core___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_core___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_core___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_core___024root__trace_cleanup, vlSelf);
    }

    VL_ATTR_COLD void Vtb_core___024root__trace_const_0_sub_0(Vtb_core___024root* vlSelf, VerilatedFst::Buffer* bufp);

    VL_ATTR_COLD void Vtb_core___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_const_0\n"); );
        // Init
        Vtb_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_core___024root*>(voidSelf);

        Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

        // Body
        Vtb_core___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
    }

    VL_ATTR_COLD void Vtb_core___024root__trace_const_0_sub_0(Vtb_core___024root* vlSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_const_0_sub_0\n"); );
        Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
        auto& vlSelfRef = std::ref(*vlSelf).get();
        // Init
        uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);

        VlWide<6>/*191:0*/ __Vtemp_1;
        // Body
        bufp->fullIData(oldp+19,(0x0000000aU),32);
        bufp->fullIData(oldp+20,(vlSelfRef.tb_core__DOT__dut__DOT__pc_next),32);
        bufp->fullBit(oldp+21,(0U));
        bufp->fullIData(oldp+22,(0U),32);
        bufp->fullCData(oldp+23,(0U),5);
        bufp->fullBit(oldp+24,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst_instr));
        bufp->fullIData(oldp+25,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst_instr),32);
        __Vtemp_1[0U] = 0x2e686578U;
        __Vtemp_1[1U] = 0x6772616dU;
        __Vtemp_1[2U] = 0x2f70726fU;
        __Vtemp_1[3U] = 0x6772616dU;
        __Vtemp_1[4U] = 0x2f70726fU;
        __Vtemp_1[5U] = 0x0072746cU;
        bufp->fullWData(oldp+26,(__Vtemp_1),184);
        bufp->fullBit(oldp+32,(1U));
        bufp->fullIData(oldp+33,(0x00000400U),32);
    }

    VL_ATTR_COLD void Vtb_core___024root__trace_full_0_sub_0(Vtb_core___024root* vlSelf, VerilatedFst::Buffer* bufp);

    VL_ATTR_COLD void Vtb_core___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_full_0\n"); );
        // Init
        Vtb_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_core___024root*>(voidSelf);

        Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

        // Body
        Vtb_core___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
    }

    VL_ATTR_COLD void Vtb_core___024root__trace_full_0_sub_0(Vtb_core___024root* vlSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_full_0_sub_0\n"); );
        Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
        auto& vlSelfRef = std::ref(*vlSelf).get();
        // Init
        uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);

        // Body
        bufp->fullCData(oldp+1,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op),4);
        bufp->fullBit(oldp+2,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen));
        bufp->fullCData(oldp+3,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel),3);
        bufp->fullCData(oldp+4,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel),2);
        bufp->fullCData(oldp+5,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel),2);
        bufp->fullCData(oldp+6,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op),4);
        bufp->fullCData(oldp+7,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel),3);
        bufp->fullCData(oldp+8,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel),2);
        bufp->fullCData(oldp+9,(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel),2);
        bufp->fullIData(oldp+10,(vlSelfRef.tb_core__DOT__dut__DOT__pc),32);
        bufp->fullIData(oldp+11,(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r),32);
        bufp->fullIData(oldp+12,(vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[1U]),32);
        bufp->fullIData(oldp+13,(vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U]),32);
        bufp->fullBit(oldp+14,((1U & vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[2U])));
        bufp->fullSData(oldp+15,((0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__pc 
                                                 >> 2U))),10);
        bufp->fullIData(oldp+16,(((IData)(4U) + vlSelfRef.tb_core__DOT__dut__DOT__pc)),32);
        bufp->fullBit(oldp+17,(vlSelfRef.tb_core__DOT__clk));
        bufp->fullBit(oldp+18,(vlSelfRef.tb_core__DOT__rst));
    }
