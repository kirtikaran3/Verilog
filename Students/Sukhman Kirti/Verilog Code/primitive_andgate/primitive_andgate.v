`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:57:45 04/22/2016 
// Design Name: 
// Module Name:    primitive_andgate 
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
primitive primitive_andgate(out,a,b);
input a,b;
output out;
table 
//   a      b: out;
    0       0:    0;
	 0       1:    0;
	 1       0:    0;
	 1       1:    1;
endtable
endprimitive


