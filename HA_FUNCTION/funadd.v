`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:47:29 04/13/2016 
// Design Name: 
// Module Name:    funadd 
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
module funadd(  a,b,out,en    );

input a,b,en; 
output [1:0] out; 

reg [1:0] out; 

always @(en) 

	//	begin 

			out = ha(a,b);

		//end 

function [1:0] ha; 

input a,b;

	
		 
		ha={a&b,a^b};
		
		//end

endfunction		

endmodule























