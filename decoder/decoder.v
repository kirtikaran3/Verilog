`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:23:34 02/12/2016 
// Design Name: 
// Module Name:    decoder 
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
module decoder(in,out,enable); 

input [2:0] in; 
output [7:0] out; 
input enable; 

	reg [7:0] out; 
	wire [2:0] in; 
	
		always @(enable) 
		begin 
			
			//out=0; 
			
			case(in) 
				3'b000: 
					out=1;
				
				3'b001: 
					out=2; 
				
				3'b010:
					out=4; 
				
				3'b011:
					out=8; 
				
				3'b100:
					out=16; 
				
				3'b101:
					out=32; 
				
				3'b110: 
					out=64; 
				
				3'b111:
					out=128;
				
				default:
					out=0;
			endcase

		end

endmodule


























