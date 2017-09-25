`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:17:54 04/19/2016 
// Design Name: 
// Module Name:    tlc 
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
module tlc(clk,out);

input clk; 
output [3:0] out; 

reg [2:0] out; 
reg [2:0] sig; 

parameter s0=3'b001,s1=3'b010,s2=3'b100; 

always @(posedge clk) 

		begin 

			case(sig) 
			
					s0: 
					
					begin 
						sig=s1; 
						out=3'b010;
					end
					
					s1: 
					
					begin 
						sig=s2; 
						out=3'b100;
					end
 
					s2: 
					
					begin 
						sig=s0; 
						out=3'b001;
					end
 
					default: 
					
					begin 
						sig=s0; 
						out=3'b001;
					end
 
			endcase

		end 

endmodule























