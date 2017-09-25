`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:44:20 11/05/2016 
// Design Name: 
// Module Name:    ha 
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
module ha(in,out,select ); 

	input [3:0] in;  
	input [1:0] select; 
	//input clk;
	output out; 

	reg out;
	
	always @(select) 
		begin
	
			case(select) 
	
			2'b00: 
					out = in[0];
			2'b01: 
					out = in[1];
			2'b10: 
					out = in[2];
			2'b11: 
					out = in[3];
	
			endcase
	end
endmodule
