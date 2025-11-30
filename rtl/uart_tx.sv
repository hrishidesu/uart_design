`timescale 1ps/1ps

module uart_tx (
    input logic clk,
    input logic rst_n,
    input logic s_tick,
    input logic tx_start,
    input logic [7:0] tx_data,
    output logic tx,
    output logic tx_done
);

    typedef enum logic [1:0] {
        IDLE,
        START,
        DATA,
        STOP
    } ux_states_t;

    ux_states_t current_state, next_state;

    logic [3:0] current_count, next_count;
    logic [2:0] current_bit_count, next_bit_count;
    logic [7:0] data_reg, next_data_reg;
    logic next_tx, next_tx_done;

    always_comb begin
        next_state = current_state;
        next_count = current_count;
        next_bit_count = current_bit_count;
        next_tx = tx;
        next_data_reg = data_reg;
        next_tx_done = 1'b0;

        case(current_state)
        IDLE: begin
            if(tx_start) begin
                next_state = START;
                next_count = 0;
                next_data_reg = tx_data;
            end else begin
                next_state = IDLE;
            end
        end

        START: begin
            next_tx = 1'b0;
            if(s_tick)
                if(current_count == 4'd15) begin
                    next_count = 0;
                    next_bit_count = 0;
                    next_state = DATA;
                end else begin
                    next_count = current_count + 1;
                    next_state = START;
                end
        end

        DATA: begin
            next_tx = data_reg[0];
            if(s_tick) begin
                if(current_count == 4'd15) begin
                    next_data_reg = data_reg >> 1;
                    next_bit_count = current_bit_count + 1;
                    next_count = 0;

                    if(current_bit_count == 3'd7) next_state = STOP;
                end else begin
                        next_count = current_count + 1;
                        next_state = DATA;
                    end
            end
        end

        STOP: begin
            next_tx = 1'b1;
            if(s_tick) begin
                if(current_count == 4'd15) begin
                    next_state = IDLE;
                    next_tx_done = 1'b1;
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
            tx <= 1'b1;
            tx_done <= 1'b0;
            current_state <= IDLE;
        end else begin
            current_state <= next_state;
            tx <= next_tx;
            current_bit_count <= next_bit_count;
            current_count <= next_count;
            data_reg <= next_data_reg;
            tx_done <= next_tx_done;
        end
            
    end

endmodule
