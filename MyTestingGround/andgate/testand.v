`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:05:51 04/22/2016 
// Design Name: 
// Module Name:    testand 
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
`include "andudp.v"
module testand(    );

reg b,a;
wire out;

andudp udp (out,a,b);

initial begin
  $monitor(" a = %b b = %b  out = %b",a,b,out);
 
  a = 0;b=0;
  #1 b = 1;
  #1 b = 0;
  #1 a = 1;
  #1 b = 1'bx;
  #1 a = 0;
  #1 b = 1;
  #1 a = 1'b1;
  #1 b = 1'b0;
  #1 $finish;
end  

endmodule
 
 

