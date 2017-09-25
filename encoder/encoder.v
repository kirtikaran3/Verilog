`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:43:51 02/12/2016 
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
	 
	input [15:0] in; 
	output [3:0] out; 
	input enable;

	wire [15:0] in; 
	reg [3:0] out; 
	
	always @(enable) 
	
	begin 
		out=0;
		
		if(in==16'h0002)
			begin
				out=1; 
			end 
		
		if(in==16'h0004) 
			begin  
				out=2; 
			end 
		
		if(in==16'h0008) 
			begin 
				out=3; 
			end 
		
		if(in==16'h0010) 
			begin 
				out=4; 
			end
		
		if(in==17'h0020) 
			begin 
				out=5; 
			end
		
		if(in==16'h0040) 
			begin 
				out=6; 
			end 
		
		if(in==16'h0080) 
			begin 
				out=7; 
			end
 
		if(in==16'h0100) 
		begin 
			out=8; 
		end
	
	end

endmodule










































