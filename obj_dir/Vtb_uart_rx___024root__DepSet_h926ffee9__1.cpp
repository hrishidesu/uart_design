// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_uart_rx.h for the primary calling header

#include "Vtb_uart_rx__pch.h"
#include "Vtb_uart_rx__Syms.h"
#include "Vtb_uart_rx___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_rx___024root___dump_triggers__act(Vtb_uart_rx___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_uart_rx___024root___eval_triggers__act(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_triggers__act\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_uart_rx__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_rx__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb_uart_rx__DOT__rx_done) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_rx__DOT__rx_done__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.tb_uart_rx__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_rx__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_rx__DOT__clk__0 
        = vlSelfRef.tb_uart_rx__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_rx__DOT__rx_done__0 
        = vlSelfRef.tb_uart_rx__DOT__rx_done;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_rx__DOT__rst_n__0 
        = vlSelfRef.tb_uart_rx__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_uart_rx___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_uart_rx___024root___nba_sequent__TOP__0(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___nba_sequent__TOP__0\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_LIKELY((((IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__data_reg) 
                    == (IData)(vlSelfRef.tb_uart_rx__DOT__expected_val))))) {
        VL_WRITEF_NX("PASS: Expected 0x%x, Got 0x%x\n",0,
                     8,vlSelfRef.tb_uart_rx__DOT__expected_val,
                     8,(IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__data_reg));
    } else {
        VL_WRITEF_NX("[%0t] %%Error: tb_uart_rx.sv:66: Assertion failed in %Ntb_uart_rx: FAIL: Expected 0x%x, Got 0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelfRef.tb_uart_rx__DOT__expected_val),
                     8,vlSelfRef.tb_uart_rx__DOT__dut__DOT__data_reg);
        VL_STOP_MT("tb/tb_uart_rx.sv", 66, "");
    }
}
