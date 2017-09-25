`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:46:02 11/05/2016 
// Design Name: 
// Module Name:    ioPort 
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
module ioPort(
 a,b,c,d,e   );

inout a; 
input b,c; 
output e,d;  

 reg a;

always @( b or c)
	
	begin 
	
		assign a = 1'b1; 
		e = a & d; 
		d = b & c;
	end
endmodule



