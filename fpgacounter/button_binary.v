`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:43:38 11/15/2016 
// Design Name: 
// Module Name:    button_binary 
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
module button_binary(
    input clock,
    input reset,
    input button,
    output led,
    output led2,
    output led3,
    output led4,
    output led5,
    output led6,
    output led7,
    output led8
    );
 
reg [7:0]count;
 
always @ (posedge button or posedge reset)
 begin

  if (reset)
   count <= 0; 
	
	else  
	count <= count+1;
 
 end
  
assign led = count[0];
assign led2 = count[1];
assign led3 = count[2];
assign led4 = count[3];
assign led5 = count[4];
assign led6 = count[5];
assign led7 = count[6];
assign led8 = count[7];
 
 
endmodule

