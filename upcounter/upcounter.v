`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:10:21 02/15/2016 
// Design Name: 
// Module Name:    upcounter 
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
module upcounter(count,rst,clk);

	output [7:0] count;  
	input rst;  
	input clk;
	reg [7:0] count;
	
		always @(posedge clk) 
		begin 
			
				if(rst==1'b1) 
				begin 
					count<=0; 
				end
				
				else  
					count<=count+1; 
				 
			end

endmodule















