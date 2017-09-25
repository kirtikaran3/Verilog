`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:00:46 02/15/2016 
// Design Name: 
// Module Name:    new 
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
module new(in,out,select);

	input [1:0] select; 
	input [1:0] in; 
	output [1:0] out;  
	reg [1:0] out;
	
	always @(select) 
	begin 
		
			case(select) 
				
				2'b00: 
					out=2'b00; 
				2'b01: 
					out=2'b01; 
				2'b10: 
					out=2'b10; 
				2'b11: 
					out=2'b10; 
			endcase 
			
	end

endmodule
























