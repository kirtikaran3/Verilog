`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:02:10 02/28/2017 
// Design Name: 
// Module Name:    delayTest 
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
module delayTest(
   in,out1,out2,clk );

	input [3:0] in;
	input clk; 
	output [3:0] out1,out2; 
	reg out1,out2;

always @(posedge clk) 

	#5 out1 = in;

always @(posedge clk) 

	out2 = #5 in;

endmodule











