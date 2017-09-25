`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:45:41 04/01/2016 
// Design Name: 
// Module Name:    swap 
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
module swap(a,b,c,d );
input d;
output a,b, c; 
reg a,b,c;
always @(d) 

	
	begin  
	
		a<=1'b1;   
		#5000 b<=1'b0; 
		#4000 c<=1'b1;
	
	end 


endmodule



