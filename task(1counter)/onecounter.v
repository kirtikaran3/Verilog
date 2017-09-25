`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:11:35 02/28/2017 
// Design Name: 
// Module Name:    onecounter 
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

	task onecounter; 
			
				input [3:0] x; 
				output [3:0] y; 
				integer i;
				begin 
				
				
						y=0; 
						
						for(i=0;i<=3;i=i+1) 
						
						begin 
						
							if(x[i]) 
							
							y=y+1;
						
						end
						
					
				end
			
			
			endtask
