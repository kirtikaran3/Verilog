`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:33:59 02/16/2017 
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
module counters(
  count,clk,rst,udn,start,final  );

	input clk,rst; 
	output [3:0] count; 
	reg [3:0] count; 
	
	always @(posedge clk) 
	begin  
	
			if(rst==0) 
				
				count = 0; 
			
			else  
				begin 
				count = count + 1; 
					if(count == 4'b1100) 
					count = 0; 
				end	
				
	end

endmodule












