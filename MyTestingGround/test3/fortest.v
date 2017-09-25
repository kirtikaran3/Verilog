`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:57:20 04/01/2016 
// Design Name: 
// Module Name:    fortest 
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
module fortest(out,in,clk );
input in;
output [7:0] out; 
reg [7:0] out;
input clk;
integer i;
always @(posedge clk) 

begin 

	for(i=0;i<255;i=i+1)

		begin 
			out =i; 
			$display("out=%d",out);

		end  
	
	end

endmodule














