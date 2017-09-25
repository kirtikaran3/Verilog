`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:54:37 02/12/2016 
// Design Name: 
// Module Name:    encoder 
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
module encoder(in,out,enable);

input [7:0] in; 
output [2:0] out; 
input enable; 

	wire [7:0] in; 
	reg [2:0] out; 
	
		always @(enable) 
		begin 			
				out=0; 

			if(in==7'b00000001) 
			begin 
				out=1; 
			end 
			
			if(in==7'b00000010) 
			begin 
				out=2; 
			end 
			if(in==7'b00000100) 
			begin 
				out=3; 
			end 
			
			if(in==7'b00001000) 
			begin 
				out=4; 
			end 
			
			if(in==7'b00010000) 
			begin 
				out=5; 
			end  
			
			if(in==7'b00100000) 
			begin 
				out=6; 
			end
 
			if(in==7'b01000000) 
			begin 
				out=7; 
			end
	
		end

endmodule






























