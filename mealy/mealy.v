`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:37:37 04/19/2016 
// Design Name: 
// Module Name:    mealy 
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
module mealy( in,clk,out );

input in;
input clk; 
output  out; 

reg out ; 
reg [3:0] nst,pst; 

parameter s0=3'd0,s1=3'd1,s2=3'd2,s3=3'd3;

	always @(posedge clk or in) 

		begin 

			case(pst) 
				
				s0: 
				
				begin  
					out=in?1'b0:1'b0; 
					nst=in?s1:s0;
				end 
				
				s1: 
				
				begin  
					out=in?1'b0:1'b0; 
					nst=in?s1:s2;
				end
			
				s2: 
				
				begin  
					out=in?1'b0:1'b0; 
					nst=in?s3:s0;
				end
				
				s3: 
				
				begin  
					out=in?1'b0:1'b1; 
					nst=in?s0:s1;
				end 
				
				default:  
				begin 
					out=1'b0;
					nst=s0; 
				end
			endcase

		end 


endmodule 

module testmealy; 

reg in,clk; 
wire out; 

mealy mealytest(in,clk,out);  

initial 
begin  
	$monitor($time,"in=%b,clk=%b,out=%b",in,clk,out); 
	
	clk=1'b0; 
//	out=1'b0; 
	in=1'b0;

end

initial 

	begin 
		forever 
		#2 clk=~clk;
		#50 $stop;
	end 
	
	initial  

	begin 
	
		#2 in=1'b1; 
		#2 in=1'b0; 
		#2 in=1'b1; 
		#2 in=1'b0; 
		#2 in=1'b0; 
		#2 in=1'b1; 
		#2 in=1'b0; 
		#2 in=1'b1; 
		#2 in=1'b0;
		#50 $stop;
	end



endmodule 























