// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vregfile_tb__Syms.h"


VL_ATTR_COLD void Vregfile_tb___024root__trace_init_sub__TOP__0(Vregfile_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_init_sub__TOP__0\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("regfile_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+40,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+40,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"rd1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"rd2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+7+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+39,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vregfile_tb___024root__trace_init_top(Vregfile_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_init_top\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vregfile_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vregfile_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vregfile_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vregfile_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vregfile_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vregfile_tb___024root__trace_register(Vregfile_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_register\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vregfile_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vregfile_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vregfile_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vregfile_tb___024root__trace_cleanup, vlSelf);
    }

    VL_ATTR_COLD void Vregfile_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_const_0\n"); );
        // Init
        Vregfile_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile_tb___024root*>(voidSelf);

        Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

    }

    VL_ATTR_COLD void Vregfile_tb___024root__trace_full_0_sub_0(Vregfile_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

    VL_ATTR_COLD void Vregfile_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_full_0\n"); );
        // Init
        Vregfile_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile_tb___024root*>(voidSelf);

        Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

        // Body
        Vregfile_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
    }

    VL_ATTR_COLD void Vregfile_tb___024root__trace_full_0_sub_0(Vregfile_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_full_0_sub_0\n"); );
        Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
        auto& vlSelfRef = std::ref(*vlSelf).get();
        // Init
        uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);

        // Body
        bufp->fullBit(oldp+1,(vlSelfRef.regfile_tb__DOT__we));
        bufp->fullBit(oldp+2,(vlSelfRef.regfile_tb__DOT__rst));
        bufp->fullCData(oldp+3,(vlSelfRef.regfile_tb__DOT__rs1),5);
        bufp->fullCData(oldp+4,(vlSelfRef.regfile_tb__DOT__rs2),5);
        bufp->fullCData(oldp+5,(vlSelfRef.regfile_tb__DOT__rd),5);
        bufp->fullIData(oldp+6,(vlSelfRef.regfile_tb__DOT__wd),32);
        bufp->fullIData(oldp+7,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0]),32);
        bufp->fullIData(oldp+8,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[1]),32);
        bufp->fullIData(oldp+9,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[2]),32);
        bufp->fullIData(oldp+10,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[3]),32);
        bufp->fullIData(oldp+11,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[4]),32);
        bufp->fullIData(oldp+12,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[5]),32);
        bufp->fullIData(oldp+13,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[6]),32);
        bufp->fullIData(oldp+14,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[7]),32);
        bufp->fullIData(oldp+15,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[8]),32);
        bufp->fullIData(oldp+16,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[9]),32);
        bufp->fullIData(oldp+17,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[10]),32);
        bufp->fullIData(oldp+18,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[11]),32);
        bufp->fullIData(oldp+19,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[12]),32);
        bufp->fullIData(oldp+20,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[13]),32);
        bufp->fullIData(oldp+21,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[14]),32);
        bufp->fullIData(oldp+22,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[15]),32);
        bufp->fullIData(oldp+23,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[16]),32);
        bufp->fullIData(oldp+24,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[17]),32);
        bufp->fullIData(oldp+25,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[18]),32);
        bufp->fullIData(oldp+26,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[19]),32);
        bufp->fullIData(oldp+27,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[20]),32);
        bufp->fullIData(oldp+28,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[21]),32);
        bufp->fullIData(oldp+29,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[22]),32);
        bufp->fullIData(oldp+30,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[23]),32);
        bufp->fullIData(oldp+31,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[24]),32);
        bufp->fullIData(oldp+32,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[25]),32);
        bufp->fullIData(oldp+33,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[26]),32);
        bufp->fullIData(oldp+34,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[27]),32);
        bufp->fullIData(oldp+35,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[28]),32);
        bufp->fullIData(oldp+36,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[29]),32);
        bufp->fullIData(oldp+37,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[30]),32);
        bufp->fullIData(oldp+38,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[31]),32);
        bufp->fullIData(oldp+39,(vlSelfRef.regfile_tb__DOT__dut__DOT__unnamedblk1__DOT__i),32);
        bufp->fullBit(oldp+40,(vlSelfRef.regfile_tb__DOT__clk));
        bufp->fullIData(oldp+41,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile
                                 [vlSelfRef.regfile_tb__DOT__rs1]),32);
        bufp->fullIData(oldp+42,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile
                                 [vlSelfRef.regfile_tb__DOT__rs2]),32);
    }
