`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:55:52 01/10/2017 
// Design Name: 
// Module Name:    dff 
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
module dff(
 d,q,clk,rst   );

input d,clk,rst; 
output q; 
reg q; 

always @(posedge clk) 

	begin 

		if(rst == 1'b0) 
			begin 
			
				q=0;
			
			end 
		else  

			q=d;

	end


endmodule













