`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:23:59 02/15/2016 
// Design Name: 
// Module Name:    counters 
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
module counters(count,rst,clk); 

	input clk,rst; 
	output [7:0] count; 
	reg [7:0] count = 0; 
	
	always @(negedge clk) 
	begin	
		if(rst==1) 
		begin  
		
			count = 0;
		
		end
		 
		else  
		begin
		
			if(count < 100)
			count = count + 1;
		end
	end	

endmodule






















