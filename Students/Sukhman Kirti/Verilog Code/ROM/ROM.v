`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:21:31 04/23/2016 
// Design Name: 
// Module Name:    ROM 
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
module ROM(cs,rd,clk,addr,dout);
input cs,clk,rd;
input [9:0] addr;
//inout [7:0] data;
//reg [7:0] data;
output [7:0] dout;
reg [7:0] dout;
reg [7:0] mem [1023:0];
always @ (posedge clk)
begin
case (addr)
10'b0000000000:
mem[addr]<=8'b11100000;

10'b0000000001:
mem[addr]<=8'b11110000;

10'b0000000010:
mem[addr]<=8'b11100100;

10'b0000000111:
mem[addr]<=8'b11110000;
endcase
end
always @ (posedge clk)
begin
 if ( cs==1 && rd == 1 )
  dout <=mem[addr];
 else
  dout <= 8'bzzzzzzzz;
end
endmodule

