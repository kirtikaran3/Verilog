`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// ou
// Create Date:    12:40:25 03/31/2016 
// Design Name: 
// Module Name:    test 
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
module test(x,y,a,b,c );

 
output x,y,a,b,c; 

reg x,y,a,b,c; 

always   

			begin  
				x <= #1000 1'b0;  
				y <= #500  1'b1; 
				c <= 1'b1; 
				
				a=1'b0;
			end  		
  
endmodule


















