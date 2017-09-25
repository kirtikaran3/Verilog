`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:07:46 04/28/2016 
// Design Name: 
// Module Name:    primitive_demux 
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
primitive primitive_demux(out,s0,s1,din);
input s0,s1,din;
output out;
table 
// din  s1      s1:   out;
   0     0       1:    1;
	0     1       1:    0;
	1     0       1:    0;
   1     1       1:    1;
endtable
endprimitive
