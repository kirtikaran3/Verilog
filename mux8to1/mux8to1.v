`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:16:13 02/12/2016 
// Design Name: 
// Module Name:    mux8to1 
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
module mux8to1(select,in,out);

	input [2:0] select; 
	input [7:0] in; 
	output out; 
	
		
			wire [7:0] in; 
			wire [2:0] select; 
			
				
					assign out=in[select];


endmodule 
















