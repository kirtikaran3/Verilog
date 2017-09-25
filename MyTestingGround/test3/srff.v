`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:21:57 04/01/2016 
// Design Name: 
// Module Name:    srff 
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
module srff(q,qbar,s,r,clk );

output q,qbar; 
input s,r,clk; 
reg q,qbar;
always @(posedge clk) 

			begin  

				case({s,r}) 
				
				2'b00: 
				
					begin 
					q=s; 
					qbar=r; 
					end
				
				2'b01:	
				  
				  begin  
				 
					q=0; 
					qbar=1;
				 
				 end 
				 
				 
				2'b10:	
				  
				  begin  
				 
					q=1; 
					qbar=0;
				 
				 end 
				 
				2'b11:	
				  
				  begin  
				 
					q=1'bx; 
					qbar=1'bx;
				 
				 end
				
				endcase
				
			end 

endmodule
















