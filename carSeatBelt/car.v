`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:27:52 11/15/2016 
// Design Name: 
// Module Name:    car 
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
module car(
 seatbelt,clk,key,led   );

input seatbelt; 
input key; 
input clk;

output led; 
reg led; 

always @(posedge clk) 

begin 

	if(key==1 && seatbelt==0) 
	
			led = 1; 
	else  
			led = 0;

end

endmodule





