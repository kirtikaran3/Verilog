`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:36:57 02/02/2017 
// Design Name: 
// Module Name:    andT 
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
module andT(in,out   );

	input [2:0] in; 
	output out; 
	
	wire f; 
	
	assign f = in[0] & in[1]; 
	assign out = f & in[2];


endmodule




