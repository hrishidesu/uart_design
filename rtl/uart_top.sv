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

    logic s_tick;

    baud_gen #(
        .WIDTH(14)
    ) baud_gen_inst (
        .clk(clk),
        .rst_n(rst_n),
        .dvsr(dvsr),
        .tick(s_tick)
    );

    uart_tx uart_tx_inst (
        .clk(clk),
        .rst_n(rst_n),
        .s_tick(s_tick),
        .tx_start(tx_start),
        .tx_data(tx_data),
        .tx(tx),
        .tx_done(tx_done)
    );

    uart_rx uart_rx_inst (
        .clk(clk),
        .rst_n(rst_n),
        .s_tick(s_tick),
        .rx(rx),
        .rx_data(rx_data),
        .rx_done(rx_done)
    );

endmodule