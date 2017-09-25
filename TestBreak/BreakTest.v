`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:18:44 02/24/2017 
// Design Name: 
// Module Name:    BreakTest 
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
module BreakTest(
 clk,out   );

	input clk; 
	output [3:0] out; 
	reg [3:0] out; 
	reg [3:0] count;
	integer i; 

always @(posedge clk)	

begin
		for(i=0;i<10;i=i+1) 
		begin 
			count = count + 1; 
		
				if(count == 4'b0011) 
					break; 
		end			
end
endmodule







