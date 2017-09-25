`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:59:18 01/28/2017 
// Design Name: 
// Module Name:    UDP 
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
