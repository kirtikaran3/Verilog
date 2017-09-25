`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:14:21 02/02/2017 
// Design Name: 
// Module Name:    rubbish 
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
module rubbish(
   in,out  );


	input [2:0] in; 
	output out; 
	
	wire f; 
	
	assign f = in[0] & in[1]; 
	assign out = f & in[2];



endmodule
