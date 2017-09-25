`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:18:15 04/03/2016 
// Design Name: 
// Module Name:    RippleCunter 
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
module RippleCunter(t,clk,rst  );

input t,rst; 
output [3:0] clk;

tff tff1(clk[0],t,rst); 
tff tff2(clk[1],clk[1],rst); 
tff tff3(clk[2],clk[1],rst); 
tff tff4(clk[3],clk[2],rst);

endmodule 

module tff(t,clk,rst);  

input clk,rst; 
output t;  
wire d; 

dff dff1(d,t,clk,rst); 
not not1(d,t);


endmodule 

module  dff(d,q,clk,rst); 

input d,clk,rst; 
output q; 
reg q;

always @(posedge clk ) 

			begin 
		
				if(rst==1'b1) 
				
					begin  
					
						q=0; 
		//				qbar=0;
					
					end 
				
				else  
				
						begin  
				
							q=d; 
			//				qbar=~d;

						end
			end 

endmodule




















