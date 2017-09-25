`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:19:50 02/15/2016 
// Design Name: 
// Module Name:    lfsr 
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
module lfsr(data,out,clk,rst); 

	input [7:0] data; 
	output [7:0] out; 
	input clk,rst; 
	
	wire [7:0] data; 
	reg [7:0] out; 
	wire linear=!(out[7] ^ out[3]); 
	
	always @(negedge clk) 
	begin 
		
			if(rst==1'b1) 
				begin 
					out<=0; 
				end 
		
			else  
				out<={out[6],out[5],out[4],out[3],out[2],out[1],out[0],linear};
	
	end

endmodule
























