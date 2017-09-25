`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:57:28 04/09/2016 
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
module piso(
 din ,clk ,reset ,load ,dout );

output dout ;
reg dout ;

input [3:0] din ;
wire [3:0] din ;
input clk ;
wire clk ;
input reset ;
wire reset ;
input load ;
wire load ;

reg [3:0]temp;

always @ (posedge (clk)) begin
 if (reset)
  temp <= 1;
 else if (load)
  temp <= din;
 else begin
  dout <= temp[3];
  temp <= {temp[2:0],1'b0};
 end
end

endmodule



