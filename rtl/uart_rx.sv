`timescale 1ps/1ps

module uart_rx (
    input logic clk,
    input logic rst_n,
    input logic s_tick,
    input logic rx,
    output logic [7:0] rx_data,
    output logic rx_done
);

typedef enum logic [1:0] {
    IDLE,
    START,
    DATA,
    STOP
} ux_states_t;

ux_states_t current_state, next_state;

logic next_rx_done;
logic [3:0] current_count, next_count;
logic [2:0] current_bit_count, next_bit_count;
logic [7:0] data_reg, next_data_reg;

always_comb begin
    next_state = current_state;
    next_count = current_count;
    next_data_reg = data_reg;
    next_bit_count = current_bit_count;
    next_rx_done = 1'b0;

    case(current_state)
        IDLE: begin
            if(~rx) begin
                next_state = START;
                next_count = 0;
                next_bit_count = 0;
            end else begin
                next_state = IDLE;
            end
        end

        START: begin
            if(s_tick) begin
                if(current_count == 4'd7) begin
                    if(~rx) begin
                        next_count = 0;
                        next_state = DATA;
                    end else begin
                        next_state = IDLE;
                    end
                end else begin
                    next_count = current_count + 1;
                    next_state = START;
                end
            end
        end

        DATA: begin
            if(s_tick) begin
                if(current_count == 4'd15) begin
                    next_count = 0;
                    next_data_reg = {rx, data_reg[7:1]};
                    if(current_bit_count == 3'd7) begin
                        next_state = STOP;
                    end else begin
                        next_bit_count = current_bit_count + 1;
                        next_state = DATA;
                    end
                end else begin
                    next_count = current_count + 1;
                    next_state = DATA;
                end
            end
        end

        STOP: begin
            if(s_tick) begin
                if(current_count == 4'd15) begin
                    if(rx) begin 
                        next_state = IDLE;
                        next_rx_done = 1'b1;
                    end else begin
                        next_state = IDLE;
                    end
                end else begin
                    next_count = current_count + 1;
                    next_state = STOP;
                end
            end
        end
    endcase
end

always_ff @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin
        current_state <= IDLE;
        current_count <= 0;
        current_bit_count <= 0;
        data_reg <= 8'd0;
        rx_done <= 1'b0;
    end else begin
        current_state <= next_state;
        current_count <= next_count;
        current_bit_count <= next_bit_count;
        data_reg <= next_data_reg;
        rx_done <= next_rx_done;
    end
end

assign rx_data = data_reg;

endmodule
