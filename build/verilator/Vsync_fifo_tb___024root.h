// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsync_fifo_tb.h for the primary calling header

#ifndef VERILATED_VSYNC_FIFO_TB___024ROOT_H_
#define VERILATED_VSYNC_FIFO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vsync_fifo_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsync_fifo_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ sync_fifo_tb__DOT__clk;
    CData/*0:0*/ sync_fifo_tb__DOT__rst;
    CData/*0:0*/ sync_fifo_tb__DOT__wr_en;
    CData/*0:0*/ sync_fifo_tb__DOT__rd_en;
    CData/*0:0*/ sync_fifo_tb__DOT____Vtogcov__clk;
    CData/*0:0*/ sync_fifo_tb__DOT____Vtogcov__rst;
    CData/*0:0*/ sync_fifo_tb__DOT____Vtogcov__wr_en;
    CData/*0:0*/ sync_fifo_tb__DOT____Vtogcov__full;
    CData/*0:0*/ sync_fifo_tb__DOT____Vtogcov__almost_full;
    CData/*0:0*/ sync_fifo_tb__DOT____Vtogcov__rd_en;
    CData/*0:0*/ sync_fifo_tb__DOT____Vtogcov__empty;
    CData/*0:0*/ sync_fifo_tb__DOT____Vtogcov__almost_empty;
    CData/*4:0*/ sync_fifo_tb__DOT____Vtogcov__wr_count;
    CData/*3:0*/ sync_fifo_tb__DOT__dut__DOT__wr_ptr;
    CData/*3:0*/ sync_fifo_tb__DOT__dut__DOT__rd_ptr;
    CData/*3:0*/ sync_fifo_tb__DOT__dut__DOT__wr_ptr_next;
    CData/*3:0*/ sync_fifo_tb__DOT__dut__DOT__rd_ptr_next;
    CData/*4:0*/ sync_fifo_tb__DOT__dut__DOT__fifo_count;
    CData/*4:0*/ sync_fifo_tb__DOT__dut__DOT__fifo_count_next;
    CData/*0:0*/ sync_fifo_tb__DOT__dut__DOT__wr_en_valid;
    CData/*0:0*/ sync_fifo_tb__DOT__dut__DOT__rd_en_valid;
    CData/*3:0*/ sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr;
    CData/*3:0*/ sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr;
    CData/*3:0*/ sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr_next;
    CData/*3:0*/ sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr_next;
    CData/*4:0*/ sync_fifo_tb__DOT__dut__DOT____Vtogcov__fifo_count_next;
    CData/*0:0*/ sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_en_valid;
    CData/*0:0*/ sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_en_valid;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sync_fifo_tb__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ sync_fifo_tb__DOT__wr_data;
    IData/*31:0*/ sync_fifo_tb__DOT__rd_data;
    IData/*31:0*/ sync_fifo_tb__DOT__test_pass_count;
    IData/*31:0*/ sync_fifo_tb__DOT__test_fail_count;
    IData/*31:0*/ sync_fifo_tb__DOT__test_total_count;
    IData/*31:0*/ sync_fifo_tb__DOT____Vtogcov__wr_data;
    IData/*31:0*/ sync_fifo_tb__DOT____Vtogcov__rd_data;
    IData/*31:0*/ sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 16> sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_habc4c356__0;

    // INTERNAL VARIABLES
    Vsync_fifo_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vsync_fifo_tb___024root(Vsync_fifo_tb__Syms* symsp, const char* namep);
    ~Vsync_fifo_tb___024root();
    VL_UNCOPYABLE(Vsync_fifo_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
