`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:38:26 04/22/2016 
// Design Name: 
// Module Name:    primitive_dff 
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
primitive primitive_dff(out,clk,d);
input clk,d;
output out;
reg out;
table
//   clk     d:  out:   out;
     0       x:    x:      x;
	  1       0:    x:       0;
	  1       1:    x:      1;
endtable
endprimitive



