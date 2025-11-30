// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_uart_tx.h for the primary calling header

#ifndef VERILATED_VTB_UART_TX___024ROOT_H_
#define VERILATED_VTB_UART_TX___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_uart_tx__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_uart_tx___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_uart_tx__DOT__clk;
    CData/*0:0*/ tb_uart_tx__DOT__rst_n;
    CData/*0:0*/ tb_uart_tx__DOT__s_tick;
    CData/*0:0*/ tb_uart_tx__DOT__tx_start;
    CData/*7:0*/ tb_uart_tx__DOT__tx_data;
    CData/*0:0*/ tb_uart_tx__DOT__tx;
    CData/*0:0*/ tb_uart_tx__DOT__tx_done;
    CData/*3:0*/ tb_uart_tx__DOT__tick_counter;
    CData/*1:0*/ tb_uart_tx__DOT__dut__DOT__current_state;
    CData/*1:0*/ tb_uart_tx__DOT__dut__DOT__next_state;
    CData/*3:0*/ tb_uart_tx__DOT__dut__DOT__current_count;
    CData/*3:0*/ tb_uart_tx__DOT__dut__DOT__next_count;
    CData/*2:0*/ tb_uart_tx__DOT__dut__DOT__current_bit_count;
    CData/*2:0*/ tb_uart_tx__DOT__dut__DOT__next_bit_count;
    CData/*7:0*/ tb_uart_tx__DOT__dut__DOT__data_reg;
    CData/*7:0*/ tb_uart_tx__DOT__dut__DOT__next_data_reg;
    CData/*0:0*/ tb_uart_tx__DOT__dut__DOT__next_tx;
    CData/*0:0*/ tb_uart_tx__DOT__dut__DOT__next_tx_done;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_uart_tx__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_uart_tx__DOT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_uart_tx__DOT__tx_done__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h33c223cb__0;
    VlTriggerScheduler __VtrigSched_h09f77cee__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_uart_tx__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_uart_tx___024root(Vtb_uart_tx__Syms* symsp, const char* v__name);
    ~Vtb_uart_tx___024root();
    VL_UNCOPYABLE(Vtb_uart_tx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
