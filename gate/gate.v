`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:52:43 02/21/2016 
// Design Name: 
// Module Name:    gate 
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
module gate(a,b,c,sum,cout);

	input a,b,c; 
	output sum,cout; 
	
	wire a,b,c; 
	wire sum,cout; 
	wire f1,f2,f3; 
	
	assign f1=a^b; 
	assign sum=f1^c; //we can combine these two to write F1=A^B^C;
	
	assign f2=f1&c; 
	assign f3=a&b;
	assign cout=f2|f3;	

endmodule 
























