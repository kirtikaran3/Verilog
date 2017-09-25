`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:54:28 03/31/2016 
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
module test(j,k,q,qbar,clock);

input j,k,clock; 
output q,qbar; 

reg q,qbar;  

initial 
	
	begin 
		q=1'b0; 
		qbar=1'b0;
 
	end 

always @(posedge clock)

			begin  
				
					case({j,k}) 
					 {1'b0,1'b0}: 
						begin
							q=j; 
							qbar=k; 
						end
					{1'b1,1'b0}: 
						begin 
							q=1; 
							qbar=0; 
						end
					{1'b0,1'b1}: 
						begin 
							q=0; 
							qbar=1; 
						end
					{1'b1,1'b1}: 
						begin 
							q=~q; 
							qbar=~qbar; 
						end
					
							
					endcase
			end 

endmodule  














