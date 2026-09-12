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
            VL_FATAL_MT("/workspaces/SistemasDigitales/taller_3/ejercicios/lib/sim_top.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs1__DOT__r1__DOT__b 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT____Vcellout__b0__q)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT____Vcellout__b0__q));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__din 
        = ((0U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_b))
            ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__q)
            : ((1U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_b))
                ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__q)
                : ((2U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_b))
                    ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__q)
                    : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__q))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__din 
        = ((0U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_a))
            ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__q)
            : ((1U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_a))
                ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__q)
                : ((2U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_a))
                    ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__q)
                    : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__q))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result 
        = ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__q) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__q) 
                                                ^ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__q));
    if (vlSelfRef.sim_top__DOT__tb__DOT__load_op_b) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT____Vcellout__b0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__load_op_a) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT____Vcellout__b0__q));
    }
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b 
        = (1U & (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                  >> 1U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                               >> 1U))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b 
        = (((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                >> 1U)) & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs1__DOT__r1__DOT__b)) 
           | ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT____Vcellout__b1__q)) 
              & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT____Vcellout__b1__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din 
        = ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_en)
            ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in)
            : ((0U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__op))
                ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result)
                : ((1U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__op))
                    ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__q) 
                       | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__q))
                    : ((((2U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__op))
                          ? ((4U & (((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                       >> 2U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b) 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                    >> 2U))) 
                                     ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                        >> 3U)) << 2U)) 
                             | ((2U & (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b) 
                                        << 1U) ^ (0x7ffffffeU 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                     >> 1U)))) 
                                | (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                         ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                            >> 1U)))))
                          : ((4U & (((((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                           >> 2U)) 
                                       & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b)) 
                                      | ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT____Vcellout__b2__q)) 
                                         & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT____Vcellout__b2__q))) 
                                     ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                        >> 3U)) << 2U)) 
                             | ((2U & (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b) 
                                        << 1U) ^ (0x7ffffffeU 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                     >> 1U)))) 
                                | (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs1__DOT__r1__DOT__b) 
                                         ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                            >> 1U)))))) 
                        << 1U) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))));
    if (vlSelfRef.sim_top__DOT__tb__DOT__we3) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R3__DOT____Vcellout__b0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__we2) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R2__DOT____Vcellout__b0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__we1) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R1__DOT____Vcellout__b0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__we0) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__R0__DOT____Vcellout__b0__q));
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
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    vlSelfRef.__Vm_traceActivity[5U] = 1U;
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
    vlSelf->sim_top__DOT__tb__DOT__force_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11825736345054608814ull);
    vlSelf->sim_top__DOT__tb__DOT__we0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6694083616346457009ull);
    vlSelf->sim_top__DOT__tb__DOT__we1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18000738162312929594ull);
    vlSelf->sim_top__DOT__tb__DOT__we2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3040683914065009311ull);
    vlSelf->sim_top__DOT__tb__DOT__we3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 82640113596366877ull);
    vlSelf->sim_top__DOT__tb__DOT__load_op_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15016561342497989392ull);
    vlSelf->sim_top__DOT__tb__DOT__load_op_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8270684038552559718ull);
    vlSelf->sim_top__DOT__tb__DOT__src_a = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 941689211681791435ull);
    vlSelf->sim_top__DOT__tb__DOT__src_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5194931667482497760ull);
    vlSelf->sim_top__DOT__tb__DOT__op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8635571930154692363ull);
    vlSelf->sim_top__DOT__tb__DOT__nfail = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3770900744349794232ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7014293319240499795ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs1__DOT__r1__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18420261758410329679ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3809700207030106975ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4601065738441347925ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R3__DOT____Vcellout__b0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R3__DOT____Vcellout__b1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R3__DOT____Vcellout__b2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R3__DOT____Vcellout__b3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__b3__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10855662891079306068ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__b2__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 752177045453837881ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__b1__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15632969377835214835ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R3__DOT__b0__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12269651078755624825ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16469427741481328584ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R2__DOT____Vcellout__b0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R2__DOT____Vcellout__b1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R2__DOT____Vcellout__b2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R2__DOT____Vcellout__b3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__b3__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15425201347199899839ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__b2__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5262232935255431722ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__b1__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10422834029476589665ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R2__DOT__b0__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7182686244861335693ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16050293983351638725ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R1__DOT____Vcellout__b0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R1__DOT____Vcellout__b1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R1__DOT____Vcellout__b2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R1__DOT____Vcellout__b3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__b3__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6284714868721389034ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__b2__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4659757216165707907ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__b1__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18008800195168280573ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R1__DOT__b0__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4196292546921245576ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__din = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2750202832068672096ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17095604409730292904ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R0__DOT____Vcellout__b0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R0__DOT____Vcellout__b1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R0__DOT____Vcellout__b2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R0__DOT____Vcellout__b3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__b3__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 987432507940466396ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__b2__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9060612103303979356ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__b1__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9033051672044459332ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__R0__DOT__b0__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12360944038315910750ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__din = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10835730265992817152ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15081601815795836963ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT____Vcellout__b0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT____Vcellout__b1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT____Vcellout__b2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT____Vcellout__b3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__b3__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6331566960620496989ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__b2__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5691321611790296244ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__b1__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9381924424274123001ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_b__DOT__b0__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1313001162764418658ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__din = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4787502976012045630ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18329095469974079211ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT____Vcellout__b0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT____Vcellout__b1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT____Vcellout__b2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT____Vcellout__b3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__b3__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10355351356518995423ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__b2__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2381494855760890507ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__b1__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16384466110860029817ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__operando_a__DOT__b0__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15486326782836570342ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1634047360035179224ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
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
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
