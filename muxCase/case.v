`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:14:31 02/21/2016 
// Design Name: 
// Module Name:    test 
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
module test(in,out,sel);

input [7:0] in; 
output out; 
input [2:0] sel; 
reg out; 
wire [7:0] in; 
wire [2:0] sel;  

	always @(sel) 
	begin 
		
			case(sel) 
					
			3'b000: 
				out=in[0]; 
		
			3'b001: 
				out=in[1];  
			
			3'b010: 
				out=in[2]; 
		
			3'b011: 
				out=in[3]; 
			
			3'b100: 
				out=in[4]; 
			
			3'b101: 
				out=in[5]; 
			
			3'b110: 
				out=in[6]; 
			
			3'b111: 
				out=in[7];
			
			endcase
	
	end
	

endmodule 
























