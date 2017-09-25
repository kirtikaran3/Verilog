`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:26:30 04/13/2016 
// Design Name: 
// Module Name:    countones 
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
`include "onecounter.v"

module countones(x,y);

input [3:0] x; 
output [3:0] y;
 
reg [3:0] y;  
integer i; 
output [3:0] j;
reg [3:0] j;

always @(x) 

		begin 
			
			onecounter(x,y); 
			

		end 
		
		
		

endmodule























