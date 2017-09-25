`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:06:35 10/23/2016 
// Design Name: 
// Module Name:    multi 
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
module multi(d,q,clk,rst   );

	input d,rst,clk; 
	output q; 
	reg q;
	
	
	always @(posedge clk) 
	begin 
	
		if(~rst) 
			q = 0; 
			
		else  
			q = d;
	
	end


endmodule
