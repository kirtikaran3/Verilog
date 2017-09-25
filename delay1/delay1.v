`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:43:34 11/19/2016 
// Design Name: 
// Module Name:    delay1 
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
module delay1( a,b    );

	input a; 
	output b; 
	
	reg b; 
	
	always @(a) 
	
			#2 b = a;

endmodule













