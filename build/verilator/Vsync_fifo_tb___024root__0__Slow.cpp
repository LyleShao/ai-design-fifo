// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsync_fifo_tb.h for the primary calling header

#include "Vsync_fifo_tb__pch.h"

VL_ATTR_COLD void Vsync_fifo_tb___024root___eval_static__TOP(Vsync_fifo_tb___024root* vlSelf);
void Vsync_fifo_tb___024root___timing_ready(Vsync_fifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vsync_fifo_tb___024root___eval_static(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_static\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsync_fifo_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__sync_fifo_tb__DOT__clk__0 = 0U;
    Vsync_fifo_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vsync_fifo_tb___024root___eval_static__TOP(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_static__TOP\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sync_fifo_tb__DOT__clk = 0U;
    ++(vlSymsp->__Vcoverage[2]);
    vlSelfRef.sync_fifo_tb__DOT__rst = 1U;
    ++(vlSymsp->__Vcoverage[5]);
    vlSelfRef.sync_fifo_tb__DOT__test_pass_count = 0U;
    ++(vlSymsp->__Vcoverage[159]);
    vlSelfRef.sync_fifo_tb__DOT__test_fail_count = 0U;
    ++(vlSymsp->__Vcoverage[160]);
    vlSelfRef.sync_fifo_tb__DOT__test_total_count = 0U;
    ++(vlSymsp->__Vcoverage[161]);
}

VL_ATTR_COLD void Vsync_fifo_tb___024root___eval_initial__TOP(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_initial__TOP\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sync_fifo_tb__DOT__wr_en = 0U;
    vlSelfRef.sync_fifo_tb__DOT__rd_en = 0U;
    vlSelfRef.sync_fifo_tb__DOT__wr_data = 0U;
    ++(vlSymsp->__Vcoverage[162]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[0U] = 0U;
    ++(vlSymsp->__Vcoverage[248]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[1U] = 0U;
    ++(vlSymsp->__Vcoverage[248]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[2U] = 0U;
    ++(vlSymsp->__Vcoverage[248]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[3U] = 0U;
    ++(vlSymsp->__Vcoverage[248]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[4U] = 0U;
    ++(vlSymsp->__Vcoverage[248]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[5U] = 0U;
    ++(vlSymsp->__Vcoverage[248]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[6U] = 0U;
    ++(vlSymsp->__Vcoverage[248]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[7U] = 0U;
    ++(vlSymsp->__Vcoverage[248]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[8U] = 0U;
    ++(vlSymsp->__Vcoverage[248]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[9U] = 0U;
    ++(vlSymsp->__Vcoverage[248]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[10U] = 0U;
    ++(vlSymsp->__Vcoverage[248]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[11U] = 0U;
    ++(vlSymsp->__Vcoverage[248]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[12U] = 0U;
    ++(vlSymsp->__Vcoverage[248]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[13U] = 0U;
    ++(vlSymsp->__Vcoverage[248]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[14U] = 0U;
    ++(vlSymsp->__Vcoverage[248]);
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[15U] = 0U;
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__i = 0x00000010U;
    ++(vlSymsp->__Vcoverage[248]);
    ++(vlSymsp->__Vcoverage[249]);
}

VL_ATTR_COLD void Vsync_fifo_tb___024root___eval_final(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_final\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_fifo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsync_fifo_tb___024root___eval_phase__stl(Vsync_fifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vsync_fifo_tb___024root___eval_settle(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_settle\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsync_fifo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_verilog/sync_fifo_tb.v", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vsync_fifo_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vsync_fifo_tb___024root___eval_triggers_vec__stl(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_triggers_vec__stl\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vsync_fifo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_fifo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsync_fifo_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsync_fifo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vsync_fifo_tb___024root___stl_sequent__TOP__0(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___stl_sequent__TOP__0\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_hc81cc6a2__0;
    sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_hc81cc6a2__0 = 0;
    CData/*0:0*/ sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_h491041fb__0;
    sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_h491041fb__0 = 0;
    // Body
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.sync_fifo_tb__DOT__clk, vlSelfRef.sync_fifo_tb__DOT____Vtogcov__clk);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__clk 
            = vlSelfRef.sync_fifo_tb__DOT__clk;
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rst))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3, vlSelfRef.sync_fifo_tb__DOT__rst, vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rst);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rst 
            = vlSelfRef.sync_fifo_tb__DOT__rst;
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__wr_en) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6, vlSelfRef.sync_fifo_tb__DOT__wr_en, vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_en);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_en 
            = vlSelfRef.sync_fifo_tb__DOT__wr_en;
    }
    if ((vlSelfRef.sync_fifo_tb__DOT__wr_data ^ vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8, vlSelfRef.sync_fifo_tb__DOT__wr_data, vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_data);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_data 
            = vlSelfRef.sync_fifo_tb__DOT__wr_data;
    }
    if (((0x10U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__full))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 72, 
                               (0x10U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)), vlSelfRef.sync_fifo_tb__DOT____Vtogcov__full);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__full 
            = (0x10U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count));
    }
    if (((0x0cU <= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__almost_full))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 74, 
                               (0x0cU <= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)), vlSelfRef.sync_fifo_tb__DOT____Vtogcov__almost_full);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__almost_full 
            = (0x0cU <= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count));
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__rd_en) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 76, vlSelfRef.sync_fifo_tb__DOT__rd_en, vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rd_en);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rd_en 
            = vlSelfRef.sync_fifo_tb__DOT__rd_en;
    }
    if ((vlSelfRef.sync_fifo_tb__DOT__rd_data ^ vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rd_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 78, vlSelfRef.sync_fifo_tb__DOT__rd_data, vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rd_data);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rd_data 
            = vlSelfRef.sync_fifo_tb__DOT__rd_data;
    }
    if (((0U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__empty))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 142, 
                               (0U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)), vlSelfRef.sync_fifo_tb__DOT____Vtogcov__empty);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__empty 
            = (0U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count));
    }
    if (((4U >= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__almost_empty))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 144, 
                               (4U >= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)), vlSelfRef.sync_fifo_tb__DOT____Vtogcov__almost_empty);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__almost_empty 
            = (4U >= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count));
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_count))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 146, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count, vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_count);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_count 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count;
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 202, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr, vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr;
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 210, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr, vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr;
    }
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid 
        = ((0x10U != (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)) 
           & (IData)(vlSelfRef.sync_fifo_tb__DOT__wr_en));
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid 
        = ((0U != (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)) 
           & (IData)(vlSelfRef.sync_fifo_tb__DOT__rd_en));
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_en_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 244, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid, vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_en_valid);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_en_valid 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid;
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_en_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 246, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid, vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_en_valid);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_en_valid 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid;
    }
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr_next 
        = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr;
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr_next 
        = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr;
    if (vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid) {
        if ((0x0fU == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr))) {
            vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr_next = 0U;
            ++(vlSymsp->__Vcoverage[254]);
        } else {
            vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr_next 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr)));
            ++(vlSymsp->__Vcoverage[255]);
        }
        ++(vlSymsp->__Vcoverage[256]);
    } else {
        ++(vlSymsp->__Vcoverage[257]);
    }
    if (vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid) {
        if ((0x0fU == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr))) {
            vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr_next = 0U;
            ++(vlSymsp->__Vcoverage[258]);
        } else {
            vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr_next 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr)));
            ++(vlSymsp->__Vcoverage[259]);
        }
        ++(vlSymsp->__Vcoverage[260]);
    } else {
        ++(vlSymsp->__Vcoverage[261]);
    }
    ++(vlSymsp->__Vcoverage[262]);
    sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_hc81cc6a2__0 
        = ((~ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid)) 
           & (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid));
    sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_h491041fb__0 
        = ((~ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid)) 
           & (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid));
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr_next) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr_next))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 218, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr_next, vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr_next);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr_next 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr_next;
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr_next) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr_next))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 226, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr_next, vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr_next);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr_next 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr_next;
    }
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count_next 
        = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count;
    if (sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_hc81cc6a2__0) {
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count_next 
            = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)));
        ++(vlSymsp->__Vcoverage[268]);
    } else {
        if (sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_h491041fb__0) {
            vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count_next 
                = (0x0000001fU & ((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count) 
                                  - (IData)(1U)));
            ++(vlSymsp->__Vcoverage[263]);
        } else {
            ++(vlSymsp->__Vcoverage[264]);
        }
        if (sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_h491041fb__0) {
            ++(vlSymsp->__Vcoverage[265]);
        }
        if ((1U & (~ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid)))) {
            ++(vlSymsp->__Vcoverage[266]);
        }
        if (vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid) {
            ++(vlSymsp->__Vcoverage[267]);
        }
    }
    if (sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_hc81cc6a2__0) {
        ++(vlSymsp->__Vcoverage[269]);
    }
    if (vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid) {
        ++(vlSymsp->__Vcoverage[270]);
    }
    if ((1U & (~ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid)))) {
        ++(vlSymsp->__Vcoverage[271]);
    }
    ++(vlSymsp->__Vcoverage[272]);
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count_next) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__fifo_count_next))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 234, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count_next, vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__fifo_count_next);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__fifo_count_next 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count_next;
    }
}

VL_ATTR_COLD void Vsync_fifo_tb___024root____Vm_traceActivitySetAll(Vsync_fifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vsync_fifo_tb___024root___eval_stl(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_stl\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vsync_fifo_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vsync_fifo_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vsync_fifo_tb___024root___eval_phase__stl(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_phase__stl\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsync_fifo_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsync_fifo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vsync_fifo_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vsync_fifo_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vsync_fifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_fifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsync_fifo_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge sync_fifo_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsync_fifo_tb___024root____Vm_traceActivitySetAll(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root____Vm_traceActivitySetAll\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vsync_fifo_tb___024root___ctor_var_reset(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___ctor_var_reset\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->sync_fifo_tb__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6752404938893138931ull);
    vlSelf->sync_fifo_tb__DOT__wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12747163776103457680ull);
    vlSelf->sync_fifo_tb__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9334359914759943967ull);
    vlSelf->sync_fifo_tb__DOT__rd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18022029055576727670ull);
    vlSelf->sync_fifo_tb__DOT____Vtogcov__clk = 0;
    vlSelf->sync_fifo_tb__DOT____Vtogcov__rst = 0;
    vlSelf->sync_fifo_tb__DOT____Vtogcov__wr_en = 0;
    vlSelf->sync_fifo_tb__DOT____Vtogcov__wr_data = 0;
    vlSelf->sync_fifo_tb__DOT____Vtogcov__full = 0;
    vlSelf->sync_fifo_tb__DOT____Vtogcov__almost_full = 0;
    vlSelf->sync_fifo_tb__DOT____Vtogcov__rd_en = 0;
    vlSelf->sync_fifo_tb__DOT____Vtogcov__rd_data = 0;
    vlSelf->sync_fifo_tb__DOT____Vtogcov__empty = 0;
    vlSelf->sync_fifo_tb__DOT____Vtogcov__almost_empty = 0;
    vlSelf->sync_fifo_tb__DOT____Vtogcov__wr_count = 0;
    vlSelf->sync_fifo_tb__DOT__dut__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11385664816887285919ull);
    vlSelf->sync_fifo_tb__DOT__dut__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8378989598340891757ull);
    vlSelf->sync_fifo_tb__DOT__dut__DOT__wr_ptr_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15705752538070215487ull);
    vlSelf->sync_fifo_tb__DOT__dut__DOT__rd_ptr_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11188596608725351809ull);
    vlSelf->sync_fifo_tb__DOT__dut__DOT__fifo_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17169079574277304440ull);
    vlSelf->sync_fifo_tb__DOT__dut__DOT__fifo_count_next = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17024679716049899718ull);
    vlSelf->sync_fifo_tb__DOT__dut__DOT__wr_en_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6694596284259683143ull);
    vlSelf->sync_fifo_tb__DOT__dut__DOT__rd_en_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14466553834923675525ull);
    vlSelf->sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr = 0;
    vlSelf->sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr = 0;
    vlSelf->sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr_next = 0;
    vlSelf->sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr_next = 0;
    vlSelf->sync_fifo_tb__DOT__dut__DOT____Vtogcov__fifo_count_next = 0;
    vlSelf->sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_en_valid = 0;
    vlSelf->sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_en_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13654845194848809755ull);
    }
    vlSelf->sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16432690765994488922ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__sync_fifo_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vsync_fifo_tb___024root___configure_coverage(Vsync_fifo_tb___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___configure_coverage\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "tb_verilog/sync_fifo_tb.v", 15, 7, ".sync_fifo_tb", "v_toggle/sync_fifo_tb", "clk");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "tb_verilog/sync_fifo_tb.v", 15, 13, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "15");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3]), first, "tb_verilog/sync_fifo_tb.v", 16, 7, ".sync_fifo_tb", "v_toggle/sync_fifo_tb", "rst");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "tb_verilog/sync_fifo_tb.v", 16, 13, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "16");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[6]), first, "tb_verilog/sync_fifo_tb.v", 19, 7, ".sync_fifo_tb", "v_toggle/sync_fifo_tb", "wr_en");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[8]), first, "tb_verilog/sync_fifo_tb.v", 20, 24, ".sync_fifo_tb", "v_toggle/sync_fifo_tb", "wr_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[72]), first, "tb_verilog/sync_fifo_tb.v", 21, 8, ".sync_fifo_tb", "v_toggle/sync_fifo_tb", "full");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[74]), first, "tb_verilog/sync_fifo_tb.v", 22, 8, ".sync_fifo_tb", "v_toggle/sync_fifo_tb", "almost_full");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[76]), first, "tb_verilog/sync_fifo_tb.v", 24, 7, ".sync_fifo_tb", "v_toggle/sync_fifo_tb", "rd_en");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[78]), first, "tb_verilog/sync_fifo_tb.v", 25, 25, ".sync_fifo_tb", "v_toggle/sync_fifo_tb", "rd_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[142]), first, "tb_verilog/sync_fifo_tb.v", 26, 8, ".sync_fifo_tb", "v_toggle/sync_fifo_tb", "empty");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[144]), first, "tb_verilog/sync_fifo_tb.v", 27, 8, ".sync_fifo_tb", "v_toggle/sync_fifo_tb", "almost_empty");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[146]), first, "tb_verilog/sync_fifo_tb.v", 29, 35, ".sync_fifo_tb", "v_toggle/sync_fifo_tb", "wr_count");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[146]), first, "tb_verilog/sync_fifo_tb.v", 30, 35, ".sync_fifo_tb", "v_toggle/sync_fifo_tb", "rd_count");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "tb_verilog/sync_fifo_tb.v", 55, 19, ".sync_fifo_tb", "v_expr/sync_fifo_tb", "(clk==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "tb_verilog/sync_fifo_tb.v", 55, 19, ".sync_fifo_tb", "v_expr/sync_fifo_tb", "(clk==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "tb_verilog/sync_fifo_tb.v", 55, 3, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "tb_verilog/sync_fifo_tb.v", 58, 29, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "tb_verilog/sync_fifo_tb.v", 59, 29, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "tb_verilog/sync_fifo_tb.v", 60, 30, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "tb_verilog/sync_fifo_tb.v", 63, 3, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "63-66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "tb_verilog/sync_fifo_tb.v", 100, 5, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "if", "100-101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "tb_verilog/sync_fifo_tb.v", 100, 6, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "else", "102-103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "tb_verilog/sync_fifo_tb.v", 70, 3, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "70-79,82-84,87,90-92,95-99,105,108-109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "tb_verilog/sync_fifo_tb.v", 117, 7, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "tb_verilog/sync_fifo_tb.v", 113, 8, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "113-122");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "tb_verilog/sync_fifo_tb.v", 132, 7, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "if", "132-135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "tb_verilog/sync_fifo_tb.v", 132, 8, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "tb_verilog/sync_fifo_tb.v", 148, 7, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "if", "148-151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "tb_verilog/sync_fifo_tb.v", 148, 8, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "tb_verilog/sync_fifo_tb.v", 163, 7, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "if", "163-166");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "tb_verilog/sync_fifo_tb.v", 163, 8, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "tb_verilog/sync_fifo_tb.v", 170, 7, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "if", "170-173");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "tb_verilog/sync_fifo_tb.v", 170, 8, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "tb_verilog/sync_fifo_tb.v", 126, 8, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "126-129,139-145,155-160,176-177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "tb_verilog/sync_fifo_tb.v", 187, 7, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "187-194");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "tb_verilog/sync_fifo_tb.v", 198, 7, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "if", "198-201");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "tb_verilog/sync_fifo_tb.v", 198, 8, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "tb_verilog/sync_fifo_tb.v", 221, 9, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "if", "221-225");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "tb_verilog/sync_fifo_tb.v", 221, 10, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "tb_verilog/sync_fifo_tb.v", 214, 7, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "214-220");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "tb_verilog/sync_fifo_tb.v", 230, 7, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "if", "230-233");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "tb_verilog/sync_fifo_tb.v", 230, 8, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "tb_verilog/sync_fifo_tb.v", 181, 8, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "181-184,187,205-211,214,236-237");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "tb_verilog/sync_fifo_tb.v", 247, 7, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "if", "247-250");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "tb_verilog/sync_fifo_tb.v", 247, 8, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "tb_verilog/sync_fifo_tb.v", 277, 7, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "if", "277-280");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "tb_verilog/sync_fifo_tb.v", 277, 8, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "tb_verilog/sync_fifo_tb.v", 241, 8, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "241-244,254-259,262-268,270-275,283-284");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "tb_verilog/sync_fifo_tb.v", 290, 5, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "if", "290-291");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "tb_verilog/sync_fifo_tb.v", 290, 6, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "tb_verilog/sync_fifo_tb.v", 290, 15, ".sync_fifo_tb", "v_expr/sync_fifo_tb", "(wr_en==1 && full==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "tb_verilog/sync_fifo_tb.v", 290, 15, ".sync_fifo_tb", "v_expr/sync_fifo_tb", "(full==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "tb_verilog/sync_fifo_tb.v", 290, 15, ".sync_fifo_tb", "v_expr/sync_fifo_tb", "(wr_en==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "tb_verilog/sync_fifo_tb.v", 293, 5, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "if", "293-294");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "tb_verilog/sync_fifo_tb.v", 293, 6, ".sync_fifo_tb", "v_branch/sync_fifo_tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "tb_verilog/sync_fifo_tb.v", 293, 15, ".sync_fifo_tb", "v_expr/sync_fifo_tb", "(rd_en==1 && empty==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "tb_verilog/sync_fifo_tb.v", 293, 15, ".sync_fifo_tb", "v_expr/sync_fifo_tb", "(empty==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "tb_verilog/sync_fifo_tb.v", 293, 15, ".sync_fifo_tb", "v_expr/sync_fifo_tb", "(rd_en==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "tb_verilog/sync_fifo_tb.v", 289, 3, ".sync_fifo_tb", "v_line/sync_fifo_tb", "block", "289");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "rtl_verilog/sync_fifo.v", 14, 35, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "clk_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3]), first, "rtl_verilog/sync_fifo.v", 15, 35, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "rst_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[6]), first, "rtl_verilog/sync_fifo.v", 18, 35, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "wr_en_i");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[8]), first, "rtl_verilog/sync_fifo.v", 19, 35, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "wr_data_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[72]), first, "rtl_verilog/sync_fifo.v", 20, 35, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "full_o");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[74]), first, "rtl_verilog/sync_fifo.v", 21, 35, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "almost_full_o");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[76]), first, "rtl_verilog/sync_fifo.v", 24, 35, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "rd_en_i");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[78]), first, "rtl_verilog/sync_fifo.v", 25, 35, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "rd_data_o");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[142]), first, "rtl_verilog/sync_fifo.v", 26, 35, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "empty_o");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[144]), first, "rtl_verilog/sync_fifo.v", 27, 35, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "almost_empty_o");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[146]), first, "rtl_verilog/sync_fifo.v", 30, 35, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "wr_count_o");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[146]), first, "rtl_verilog/sync_fifo.v", 31, 35, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "rd_count_o");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[202]), first, "rtl_verilog/sync_fifo.v", 39, 24, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "wr_ptr");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[210]), first, "rtl_verilog/sync_fifo.v", 40, 24, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "rd_ptr");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[218]), first, "rtl_verilog/sync_fifo.v", 41, 24, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "wr_ptr_next");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[226]), first, "rtl_verilog/sync_fifo.v", 42, 24, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "rd_ptr_next");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[146]), first, "rtl_verilog/sync_fifo.v", 44, 25, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "fifo_count");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[234]), first, "rtl_verilog/sync_fifo.v", 45, 25, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "fifo_count_next");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[244]), first, "rtl_verilog/sync_fifo.v", 47, 8, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "wr_en_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[246]), first, "rtl_verilog/sync_fifo.v", 48, 8, ".sync_fifo_tb.dut", "v_toggle/sync_fifo", "rd_en_valid");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "rtl_verilog/sync_fifo.v", 82, 9, ".sync_fifo_tb.dut", "v_line/sync_fifo", "block", "82-83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "rtl_verilog/sync_fifo.v", 81, 7, ".sync_fifo_tb.dut", "v_line/sync_fifo", "block", "81-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "rtl_verilog/sync_fifo.v", 89, 9, ".sync_fifo_tb.dut", "v_branch/sync_fifo", "if", "89-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "rtl_verilog/sync_fifo.v", 89, 10, ".sync_fifo_tb.dut", "v_branch/sync_fifo", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "rtl_verilog/sync_fifo.v", 88, 7, ".sync_fifo_tb.dut", "v_line/sync_fifo", "block", "88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "rtl_verilog/sync_fifo.v", 94, 7, ".sync_fifo_tb.dut", "v_line/sync_fifo", "block", "94-95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "rtl_verilog/sync_fifo.v", 111, 7, ".sync_fifo_tb.dut", "v_branch/sync_fifo", "if", "111-112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "rtl_verilog/sync_fifo.v", 111, 8, ".sync_fifo_tb.dut", "v_branch/sync_fifo", "else", "114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "rtl_verilog/sync_fifo.v", 110, 5, ".sync_fifo_tb.dut", "v_branch/sync_fifo", "if", "110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "rtl_verilog/sync_fifo.v", 110, 6, ".sync_fifo_tb.dut", "v_branch/sync_fifo", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "rtl_verilog/sync_fifo.v", 118, 7, ".sync_fifo_tb.dut", "v_branch/sync_fifo", "if", "118-119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "rtl_verilog/sync_fifo.v", 118, 8, ".sync_fifo_tb.dut", "v_branch/sync_fifo", "else", "121");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "rtl_verilog/sync_fifo.v", 117, 5, ".sync_fifo_tb.dut", "v_branch/sync_fifo", "if", "117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "rtl_verilog/sync_fifo.v", 117, 6, ".sync_fifo_tb.dut", "v_branch/sync_fifo", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "rtl_verilog/sync_fifo.v", 106, 3, ".sync_fifo_tb.dut", "v_line/sync_fifo", "block", "106-108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "rtl_verilog/sync_fifo.v", 133, 14, ".sync_fifo_tb.dut", "v_branch/sync_fifo", "if", "133,135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "rtl_verilog/sync_fifo.v", 133, 15, ".sync_fifo_tb.dut", "v_branch/sync_fifo", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "rtl_verilog/sync_fifo.v", 133, 31, ".sync_fifo_tb.dut", "v_expr/sync_fifo", "(wr_en_valid==0 && rd_en_valid==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "rtl_verilog/sync_fifo.v", 133, 31, ".sync_fifo_tb.dut", "v_expr/sync_fifo", "(rd_en_valid==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "rtl_verilog/sync_fifo.v", 133, 31, ".sync_fifo_tb.dut", "v_expr/sync_fifo", "(wr_en_valid==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "rtl_verilog/sync_fifo.v", 130, 5, ".sync_fifo_tb.dut", "v_line/sync_fifo", "elsif", "130,132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "rtl_verilog/sync_fifo.v", 130, 21, ".sync_fifo_tb.dut", "v_expr/sync_fifo", "(wr_en_valid==1 && rd_en_valid==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "rtl_verilog/sync_fifo.v", 130, 21, ".sync_fifo_tb.dut", "v_expr/sync_fifo", "(rd_en_valid==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "rtl_verilog/sync_fifo.v", 130, 21, ".sync_fifo_tb.dut", "v_expr/sync_fifo", "(wr_en_valid==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "rtl_verilog/sync_fifo.v", 127, 3, ".sync_fifo_tb.dut", "v_line/sync_fifo", "block", "127-128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "rtl_verilog/sync_fifo.v", 152, 5, ".sync_fifo_tb.dut", "v_branch/sync_fifo", "if", "152,154-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "rtl_verilog/sync_fifo.v", 152, 6, ".sync_fifo_tb.dut", "v_branch/sync_fifo", "else", "157,159-161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "rtl_verilog/sync_fifo.v", 151, 3, ".sync_fifo_tb.dut", "v_line/sync_fifo", "block", "151");
}
