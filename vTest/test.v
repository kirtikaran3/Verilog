`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:16:08 04/14/2017 
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
module test(
  clk,out  );

input clk; 
output out; 
reg out; 

always @(clk) 
begin
	out=0; 
	out<=1; 
	$display($time , " Out is %b",out); 
	#50	$stop;
end
endmodule
