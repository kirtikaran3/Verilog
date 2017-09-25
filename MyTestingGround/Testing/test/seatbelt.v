`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:09:33 11/15/2016 
// Design Name: 
// Module Name:    seatbelt 
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
module seatbelt( belt,key,clk,led    );

input belt,key,clk; 
output led; 

reg led; 

always @(posedge clk) 

	begin  
	
		if(belt==0 && key==1) 
		
			led = 1; 
		
		else  
			
			led = 0;
	
	end


endmodule




