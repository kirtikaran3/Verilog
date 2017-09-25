`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:59:43 04/22/2016 
// Design Name: 
// Module Name:    primitive_mux 
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
primitive primitive_mux(out,s0,s1,a,b,c,d);
input a,b,c,d,s0,s1;
output out;

table
//   s0      s1: out;
    1111     00:    1;
	 0110     01:    1;
	 0001     10:    0;
	 1111     11:    1;
endtable
endprimitive

