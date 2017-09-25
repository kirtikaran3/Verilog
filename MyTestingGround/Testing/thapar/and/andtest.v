`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:51:05 01/08/2017 
// Design Name: 
// Module Name:    andtest 
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
module andtest( out,in,clk    );

	input  in,clk; 
	output  out; 
		reg out;

always @(posedge clk) 
begin 
	out = in;
end

endmodule
