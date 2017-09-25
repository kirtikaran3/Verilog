`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:38:30 11/15/2016 
// Design Name: 
// Module Name:    binary 
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
module binary( rst,clk,led   );

input rst,clk; 
output [3:0] led; 

reg [3:0] count; 

	always @(posedge clk or posedge rst) 
		
		begin 
		
			if(rst) 
			
				count <= 0; 
				
			else if(clk)  
					count <= count + 1;
		
		end
 



assign led[3] = count[0]; 
assign led[2] = count[1];
assign led[1] = count[2]; 
assign led[0] = count[3];

endmodule











