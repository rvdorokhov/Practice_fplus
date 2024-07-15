module NumberInd(
	input clk,
	input button,
	output reg [3:0] digits,
	output reg [7:0] sticks
);

reg[4:0] counter;

always @ (posedge button)
	counter <= counter + 1'b1;
	
always @ (posedge clk)
	case(counter)
		4'h0: sticks = 7'b0111111;
		4'h1: sticks = 7'b0000110;
		4'h2: sticks = 7'b1011011;
		4'h3: sticks = 7'b1001111;
		4'h4: sticks = 7'b1100110;
		4'h5: sticks = 7'b1101101;
		4'h6: sticks = 7'b1111101;
		4'h7: sticks = 7'b0000111;
		4'h8: sticks = 7'b1111111;
		4'h9: sticks = 7'b1101111;
		default: sticks = 7'b1000000;
	endcase
endmodule
		