`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:00:26 04/13/2016 
// Design Name: 
// Module Name:    fulladder 
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
module fulladder(  a,b,c,out    );

input  a,b,c; 
output [1:0] out; 
reg [1:0] out; 

always @(a or b) 

		begin 

			out=fa(a,b,c);

		end 
		
			function [1:0] fa; 
			
				input a,b,c; 
				reg [1:0] ha1,ha2,ha3;
				
				begin 
				
					ha1=ha(a,b);
					ha2=ha(ha1[0],c); 
					ha3=ha(ha2[1],ha1[1]);
					ha3[0]=ha2[0];
					fa=ha3;
					
				end
			
			
			endfunction 
			
					function [1:0] ha; 
			
						input a,b; 
			
							ha={a&b,a|b};

					endfunction

endmodule























