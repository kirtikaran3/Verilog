`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:26:04 02/22/2016 
// Design Name: 
// Module Name:    Fadder 
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
module Fadder(a,b,c,sum,carry);


	input a,b,c; 
	output sum,carry; 
	wire a,b,c; 
	wire sum,carry; 
	wire f1,f2,f3;

		assign f1=a^b; 
		assign sum=c^f1; 
		assign f2=a&b; 
		assign f3=f1&c; 
		assign carry=f3|f2;

endmodule  



























