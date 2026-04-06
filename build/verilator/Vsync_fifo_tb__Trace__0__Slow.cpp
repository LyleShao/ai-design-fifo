// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vsync_fifo_tb__Syms.h"


VL_ATTR_COLD void Vsync_fifo_tb___024root__trace_init_sub__TOP__0(Vsync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root__trace_init_sub__TOP__0\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("sync_fifo_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"ALMOST_FULL_THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"ALMOST_EMPTY_THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+42,0,"MEMORY_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+29,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"almost_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"almost_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"wr_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+26,0,"rd_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"test_pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+35,0,"test_fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+36,0,"test_total_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"ALMOST_FULL_THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"ALMOST_EMPTY_THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+42,0,"MEMORY_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+29,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"almost_full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"rd_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"almost_empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"wr_count_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+26,0,"rd_count_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+41,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"COUNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+28,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"wr_ptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"rd_ptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"fifo_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"fifo_count_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+19,0,"wr_en_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"rd_en_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+0+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+37,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsync_fifo_tb___024root__trace_init_top(Vsync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root__trace_init_top\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsync_fifo_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsync_fifo_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsync_fifo_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsync_fifo_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsync_fifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsync_fifo_tb___024root__trace_register(Vsync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root__trace_register\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsync_fifo_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vsync_fifo_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vsync_fifo_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vsync_fifo_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsync_fifo_tb___024root__trace_const_0_sub_0(Vsync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsync_fifo_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root__trace_const_0\n"); );
    // Body
    Vsync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsync_fifo_tb___024root*>(voidSelf);
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsync_fifo_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsync_fifo_tb___024root__trace_const_0_sub_0(Vsync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root__trace_const_0_sub_0\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+38,(0x00000020U),32);
    bufp->fullIData(oldp+39,(0x00000010U),32);
    bufp->fullIData(oldp+40,(0x0000000cU),32);
    bufp->fullIData(oldp+41,(4U),32);
    bufp->fullQData(oldp+42,(0x5245474953544552ULL),64);
    bufp->fullIData(oldp+44,(5U),32);
}

VL_ATTR_COLD void Vsync_fifo_tb___024root__trace_full_0_sub_0(Vsync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsync_fifo_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root__trace_full_0\n"); );
    // Body
    Vsync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsync_fifo_tb___024root*>(voidSelf);
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsync_fifo_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsync_fifo_tb___024root__trace_full_0_sub_0(Vsync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root__trace_full_0_sub_0\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[0]),32);
    bufp->fullIData(oldp+1,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[1]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[2]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[3]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[4]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[5]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[6]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[7]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[8]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[9]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[10]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[11]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[12]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[13]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[14]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[15]),32);
    bufp->fullCData(oldp+16,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr_next),4);
    bufp->fullCData(oldp+17,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr_next),4);
    bufp->fullCData(oldp+18,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count_next),5);
    bufp->fullBit(oldp+19,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid));
    bufp->fullBit(oldp+20,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid));
    bufp->fullBit(oldp+21,((0x10U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))));
    bufp->fullBit(oldp+22,((0x0cU <= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))));
    bufp->fullIData(oldp+23,(vlSelfRef.sync_fifo_tb__DOT__rd_data),32);
    bufp->fullBit(oldp+24,((0U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))));
    bufp->fullBit(oldp+25,((4U >= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))));
    bufp->fullCData(oldp+26,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count),5);
    bufp->fullCData(oldp+27,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr),4);
    bufp->fullCData(oldp+28,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr),4);
    bufp->fullBit(oldp+29,(vlSelfRef.sync_fifo_tb__DOT__clk));
    bufp->fullBit(oldp+30,(vlSelfRef.sync_fifo_tb__DOT__rst));
    bufp->fullBit(oldp+31,(vlSelfRef.sync_fifo_tb__DOT__wr_en));
    bufp->fullIData(oldp+32,(vlSelfRef.sync_fifo_tb__DOT__wr_data),32);
    bufp->fullBit(oldp+33,(vlSelfRef.sync_fifo_tb__DOT__rd_en));
    bufp->fullIData(oldp+34,(vlSelfRef.sync_fifo_tb__DOT__test_pass_count),32);
    bufp->fullIData(oldp+35,(vlSelfRef.sync_fifo_tb__DOT__test_fail_count),32);
    bufp->fullIData(oldp+36,(vlSelfRef.sync_fifo_tb__DOT__test_total_count),32);
    bufp->fullIData(oldp+37,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__i),32);
}
