`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:45:58 01/29/2017 
// Design Name: 
// Module Name:    fio 
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
module dfio(
  input wire clk,enable,
  input wire [31:0] din,
  output reg [31:0] dout
);

always @ (posedge clk)
  begin
    dout  <= din + 1;
    
  end

endmodule
