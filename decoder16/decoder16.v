`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:05:43 02/12/2016 
// Design Name: 
// Module Name:    decoder16 
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
module decoder16(in,out,enable); 

	input [3:0] in; 
	output [15:0] out; 
	input enable; 
	
		reg [15:0] out; 
		
			always @(enable) 
			begin 
				out=0; 
				
					case(in)
					
						4'h0: 
							out=16'h0001; 
							
						4'h1:
							out=16'h0002; 
							
						4'h2: 
							out=16'h0004; 
						
						4'h3: 
							out=16'h0008;
						
						4'h4:
							out=16'h0010;
					
						4'h5: 
							out=16'h0020; 
						
						4'h6: 
							out=16'h0040; 
						
						4'h7: 
							out=16'h0080; 
						
						4'h8: 
							out=16'h0100; 
						
						4'h9: 
							out=16'h0200; 
						
						4'hA: 
							out=16'h0400; 
						
						4'hB: 
							out=16'h0800; 
							
						4'hC: 
							out=16'h2000; 
						
						4'hD: 
							out=16'h4000; 
						
						4'hE: 
							out=16'h8000; 
						
						default: 
							out=16'h0000;
						
					endcase
			
			end


endmodule








































