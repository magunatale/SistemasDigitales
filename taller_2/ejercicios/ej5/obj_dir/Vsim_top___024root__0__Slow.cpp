// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "Vsim_top__pch.h"

void Vsim_top___024root___timing_ready(Vsim_top___024root* vlSelf);

VL_ATTR_COLD void Vsim_top___024root___eval_static(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_static\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 
        = vlSelfRef.sim_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__done__0 
        = vlSelfRef.sim_top__DOT__done;
    vlSelfRef.__Vtrigprevexpr_h5b83a2b0__1 = (1U & 
                                              (~ (IData)(vlSelfRef.sim_top__DOT__rst)));
    Vsim_top___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vsim_top___024root___eval_final(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_final\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsim_top___024root___eval_phase__stl(Vsim_top___024root* vlSelf);

VL_ATTR_COLD void Vsim_top___024root___eval_settle(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_settle\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsim_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/workspaces/SistemasDigitales/taller_2/ejercicios/lib/sim_top.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vsim_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vsim_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsim_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsim_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vsim_top___024root___stl_sequent__TOP__0(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___stl_sequent__TOP__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__registroCuatro__DOT__registro__DOT__rst 
        = ((IData)(vlSelfRef.sim_top__DOT__rst) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__rst_extra));
    if (vlSelfRef.sim_top__DOT__tb__DOT__we_b) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__registroCuatro__DOT__registro__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__registroTres__DOT__registro__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__registroDos__DOT__registro__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__registroUno__DOT__registro__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__registroCuatro__DOT__registro__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT____Vcellout__registroCuatro__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__registroTres__DOT__registro__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT____Vcellout__registroTres__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__registroDos__DOT__registro__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT____Vcellout__registroDos__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__registroUno__DOT__registro__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT____Vcellout__registroUno__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__we_a) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__registroCuatro__DOT__registro__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__registroTres__DOT__registro__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__registroDos__DOT__registro__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__registroUno__DOT__registro__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__registroCuatro__DOT__registro__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT____Vcellout__registroCuatro__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__registroTres__DOT__registro__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT____Vcellout__registroTres__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__registroDos__DOT__registro__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT____Vcellout__registroDos__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__registroUno__DOT__registro__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT____Vcellout__registroUno__q));
    }
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT____Vcellout__registroCuatro__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT____Vcellout__registroTres__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT____Vcellout__registroDos__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT____Vcellout__registroUno__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT____Vcellout__registroCuatro__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT____Vcellout__registroTres__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT____Vcellout__registroDos__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT____Vcellout__registroUno__q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__q) 
                                                & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__q) 
                                                ^ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__q));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroDos__DOT__din 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                 ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                    >> 1U)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador__DOT__fa2__DOT__ha1__DOT__b 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                  >> 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                               >> 1U))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroTres__DOT__din 
        = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador__DOT__fa2__DOT__ha1__DOT__b) 
                 ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                    >> 2U)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroCuatro__DOT__din 
        = (1U & ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                   >> 2U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador__DOT__fa2__DOT__ha1__DOT__b) 
                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                >> 2U))) ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                            >> 3U)));
    if (vlSelfRef.sim_top__DOT__tb__DOT__we_s) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroUno__DOT__registro__DOT__d 
            = (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroDos__DOT__registro__DOT__d 
            = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroDos__DOT__din;
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroTres__DOT__registro__DOT__d 
            = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroTres__DOT__din;
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroCuatro__DOT__registro__DOT__d 
            = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroCuatro__DOT__din;
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroUno__DOT__registro__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT____Vcellout__registroUno__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroDos__DOT__registro__DOT__d 
            = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT____Vcellout__registroDos__q;
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroTres__DOT__registro__DOT__d 
            = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT____Vcellout__registroTres__q;
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroCuatro__DOT__registro__DOT__d 
            = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT____Vcellout__registroCuatro__q;
    }
}

VL_ATTR_COLD bool Vsim_top___024root___eval_phase__stl(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_phase__stl\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsim_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vsim_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vsim_top___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vsim_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsim_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge sim_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( sim_top.done)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( (~ sim_top.rst))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge sim_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim_top___024root___ctor_var_reset(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___ctor_var_reset\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->sim_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3530725056373553288ull);
    vlSelf->sim_top__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11400418036824371223ull);
    vlSelf->sim_top__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3402611505963488124ull);
    vlSelf->sim_top__DOT__pass_all = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 753177774469670543ull);
    vlSelf->sim_top__DOT__tb__DOT__force_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17808076716579637202ull);
    vlSelf->sim_top__DOT__tb__DOT__we_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3755008886758109040ull);
    vlSelf->sim_top__DOT__tb__DOT__we_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1676694928210767383ull);
    vlSelf->sim_top__DOT__tb__DOT__we_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11887227507511761411ull);
    vlSelf->sim_top__DOT__tb__DOT__rst_extra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8651839580731846872ull);
    vlSelf->sim_top__DOT__tb__DOT__nfail = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3770900744349794232ull);
    vlSelf->sim_top__DOT__tb__DOT__npass = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4804682576698571265ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__sumador__DOT__fa2__DOT__ha1__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8188265247119278470ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT____Vcellout__registroUno__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT____Vcellout__registroDos__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT____Vcellout__registroTres__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT____Vcellout__registroCuatro__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroCuatro__DOT__din = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17175669351297289804ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroCuatro__DOT__registro__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10823262448043370697ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroTres__DOT__din = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13646787614635659901ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroTres__DOT__registro__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10008098042577406100ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroDos__DOT__din = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16184994199341954766ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroDos__DOT__registro__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14909265083534541517ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_s__DOT__registroUno__DOT__registro__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14944080900378968662ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12299904425272883275ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT____Vcellout__registroUno__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT____Vcellout__registroDos__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT____Vcellout__registroTres__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT____Vcellout__registroCuatro__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__registroCuatro__DOT__registro__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13188843833749714110ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__registroTres__DOT__registro__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14602739047142600481ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__registroDos__DOT__registro__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5122057626780574791ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_b__DOT__registroUno__DOT__registro__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1239185160650935558ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13189425202391952254ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT____Vcellout__registroUno__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT____Vcellout__registroDos__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT____Vcellout__registroTres__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT____Vcellout__registroCuatro__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__registroCuatro__DOT__registro__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13241078811475256889ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__registroCuatro__DOT__registro__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12485279322767079841ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__registroTres__DOT__registro__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3705468579406958504ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__registroDos__DOT__registro__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3492544944918991414ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R_a__DOT__registroUno__DOT__registro__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3814428671578902937ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__sim_top__DOT__done__0 = 0;
    vlSelf->__Vtrigprevexpr_h5b83a2b0__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
