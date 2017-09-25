`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:49:11 03/31/2016 
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
module test(a,b,c,x,y);

input a,b,c;
output x,y; 

reg enable; 

always @(enable) 

	begin 
	
			x<=a; 
		#5 y<=b; 
		#5 c<=y; 
		#5 a<=x;
	
	end 

endmodule




















