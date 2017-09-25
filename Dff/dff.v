`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:07:29 12/22/2016 
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
module dff(  d,q,clk,rst   );

	input d,clk,rst; 
	output q; 
	reg q; 
	
always @(posedge clk)	

	begin 
	
		if(rst == 1'b0) 
	
		begin  
		
				q=0;
		
		end 
	
				else  
		
					begin 
		
							q=d;
			
					end
	
	end


endmodule

 
 
 
 
 


