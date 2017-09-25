`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:43:19 02/22/2016 
// Design Name: 
// Module Name:    fulladder 
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

module fulladder(a,b,c,sum,carry); 

	input a,b,c; 
	output sum,carry; 
	
	wire a,b,c; 
	wire sum,carry; 
	wire f1,f2,f3; 
		
		assign f1=a^b; 
		assign sum=f1^c; 
		assign f2=a&b; 
		assign f3=f1&c; 
		assign carry=f3|c;
	
endmodule

module ripple(a,b,c,cout,cin,sum); 

	input [3:0] a,b; 
	input cin; 
	output [3:0] sum; 
	output cout; 
	
	wire [4:0] sum


end module 























