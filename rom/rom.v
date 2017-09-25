`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:13:21 04/23/2016 
// Design Name: 
// Module Name:    rom 
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
module rom( addr,data,rd,cs    );

input [2:0] addr; 
input rd,cs; 
output [7:0] data; 
reg [7:0] data; 


always	@(cs && rd) 

		begin 
	
			case(addr) 
				
				0: 
					data=22; 
				1: 
					data=2; 
				2: 
					data=12; 
				3: 
					data=4; 
				4: 
					data=14; 
				5: 
					data=13; 
				6: 
					data=11;
				7: 
					data=44; 
					
			endcase
		
		end

endmodule























