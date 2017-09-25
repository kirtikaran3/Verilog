`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:46:47 04/19/2016 
// Design Name: 
// Module Name:    moore 
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
module moore(clk,out);

input clk;  

output [3:0] out;  

reg [3:0] out; 

reg [3:0] pst;

parameter s0=4'b0000,s1=4'b0001,s2=4'b0010,s3=4'b0100,s4=4'b1000;

	
	always @(posedge clk) 
				
				begin 

						case(pst) 
						s0:
							begin 
								
								pst<=s1; 
								out<=4'b0001;
							
							end
				
						s1:
							begin 
								
								pst<=s2; 
								out<=4'b0010;
							
							end	
				
						s2:
							begin 
								
								pst<=s3; 
								out<=4'b0100;
							
							end 
							
						s3:
							begin 
								
								pst<=s4; 
								out<=4'b1000;
							
							end 
							
						default: 
							begin
						
								pst<=s0; 
								out<=4'b0000;
						
							end
				
						endcase
				end

endmodule




























