`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:58:00 02/12/2016 
// Design Name: 
// Module Name:    mux4to1 
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
module mux4to1(select,q,d);
 
 input [1:0] select; 
 input [3:0] d; 
 output  q;  
 
	wire [3:0] d; 
	wire [1:0] select; 
	wire q; 
	
		assign q=d[select];
 
endmodule
















