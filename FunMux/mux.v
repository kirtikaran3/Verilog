`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:12:55 04/15/2016 
// Design Name: 
// Module Name:    mux 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module MUX4X1_Using_TASK (Q, IN, SEL);

  input [3:0] IN;
  input [1:0] SEL;
  output Q;
  reg Q;
 
always @(IN or SEL)
 
 mux(IN, SEL,Q);
   
	task mux;
 
			input [3:0] in;
			input [1:0] sel;
			output out;
			reg out;
		
		begin 
			
			case (sel)

					2'b00: out = in[0];
					2'b01: out = in[1];
					2'b10: out = in[2];
					2'b11: out = in[3];

			endcase

		end
		
	endtask

endmodule
