`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:43:22 02/06/2016 
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
module dff(d,q,clk,qbar
    ); 
	 
input d,clk; 
output q,qbar; 

reg q,qbar; 

always @(negedge clk) 

begin  

			q=d;  
		  
			qbar=~d;

		
end

endmodule
