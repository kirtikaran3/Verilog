`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:36:46 04/10/2016 
// Design Name: 
// Module Name:    piso 
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
module piso( din,out,clk,load,shift );

input [3:0] din; 
input clk,load,shift; 

output out; 
reg out; 


reg [3:0] temp; 
always @(posedge clk) 

	begin  
 
			if(load==1'b1) 
			
			begin 
			
				temp=din;
					
			end  
			
						if(shift==1'b1) 
						
						begin 
						 
							out=din[3]; 
							
							din[3]=din[2]; 
							out=din[3]; 
							
							din[2]=din[1]; 
							din[3]=din[2]; 
							out=din[3]; 
							
							din[1]=din[0];
							din[2]=din[1]; 
							din[3]=din[2]; 
							out=din[3]; 
							
						 
						end
			

	end


endmodule 
































