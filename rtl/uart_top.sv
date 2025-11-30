module uart_top (
    input logic clk,
    input logic rst_n,

    input logic [10:0] dvsr,

    input logic tx,
    output logic rx,

    input logic tx_start,
    input logic [7:0] tx_data,
    output logic tx_done,

    output logic [7:0] rx_data,
    output logic rx_done
);

endmodule