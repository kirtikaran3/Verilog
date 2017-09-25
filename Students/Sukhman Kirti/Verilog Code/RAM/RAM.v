`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:21:06 04/22/2016 
// Design Name: 
// Module Name:    RAM 
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
module RAM(cs,rd,wr,clk,addr,data,dout);
input cs,clk,rd,wr;
input [9:0] addr;
inout [7:0] data;
output [7:0] dout;

reg [7:0] dout;
reg [7:0] mem [1023:0];
always @ (posedge clk)
begin

 if (  cs==0&& rd ==1 && wr ==0)
  dout <= mem [addr];
 else if ( cs==1 && rd == 0 && wr == 1)
  mem [addr]<= data;
 else
  dout <= 8'bzzzzzzzz;

end
endmodule
