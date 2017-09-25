`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:47:13 02/14/2017 
// Design Name: 
// Module Name:    allgates 
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
module allgates(
 in,out   );

	input clk,en;
		input [3:0] in; 	//in1,in2,in3
		
		output [1:0] out; 
		reg [1:0] out;
		
always 		
		
	begin 	
		if(rst == 1)
		begin
		
		out[0] = 0; 
		out[1] = 0;
		
		end 
		
	end	

endmodule








