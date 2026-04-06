// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vsync_fifo_tb__Syms.h"


void Vsync_fifo_tb___024root__trace_chg_0_sub_0(Vsync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsync_fifo_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root__trace_chg_0\n"); );
    // Body
    Vsync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsync_fifo_tb___024root*>(voidSelf);
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vsync_fifo_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsync_fifo_tb___024root__trace_chg_0_sub_0(Vsync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root__trace_chg_0_sub_0\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[15]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgCData(oldp+16,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr_next),4);
        bufp->chgCData(oldp+17,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr_next),4);
        bufp->chgCData(oldp+18,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count_next),5);
        bufp->chgBit(oldp+19,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid));
        bufp->chgBit(oldp+20,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+21,((0x10U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))));
        bufp->chgBit(oldp+22,((0x0cU <= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))));
        bufp->chgIData(oldp+23,(vlSelfRef.sync_fifo_tb__DOT__rd_data),32);
        bufp->chgBit(oldp+24,((0U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))));
        bufp->chgBit(oldp+25,((4U >= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))));
        bufp->chgCData(oldp+26,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count),5);
        bufp->chgCData(oldp+27,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr),4);
        bufp->chgCData(oldp+28,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr),4);
    }
    bufp->chgBit(oldp+29,(vlSelfRef.sync_fifo_tb__DOT__clk));
    bufp->chgBit(oldp+30,(vlSelfRef.sync_fifo_tb__DOT__rst));
    bufp->chgBit(oldp+31,(vlSelfRef.sync_fifo_tb__DOT__wr_en));
    bufp->chgIData(oldp+32,(vlSelfRef.sync_fifo_tb__DOT__wr_data),32);
    bufp->chgBit(oldp+33,(vlSelfRef.sync_fifo_tb__DOT__rd_en));
    bufp->chgIData(oldp+34,(vlSelfRef.sync_fifo_tb__DOT__test_pass_count),32);
    bufp->chgIData(oldp+35,(vlSelfRef.sync_fifo_tb__DOT__test_fail_count),32);
    bufp->chgIData(oldp+36,(vlSelfRef.sync_fifo_tb__DOT__test_total_count),32);
    bufp->chgIData(oldp+37,(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__i),32);
}

void Vsync_fifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root__trace_cleanup\n"); );
    // Body
    Vsync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsync_fifo_tb___024root*>(voidSelf);
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
