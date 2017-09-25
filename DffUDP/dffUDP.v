`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:07:01 03/08/2017 
// Design Name: 
// Module Name:    DffUDP 
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
module DffUDP(
 in,out,clk,rst   );

input in,clk,rst; 
output out; 

dff_reset_udp dUdp(out,in,clk,rst);

endmodule
primitive dff_reset_udp (q, d, clk, rst);
	   output q; reg q;
	   input clk, rst, d;
	   initial q = 0;     // powers up in reset state

	   table
	      // d  clk  rst  :   q     :  q+
    	      ?   ?     0    :    ?     :  0;
    	      0   r     1    :    ?     :  0;
    	      1   r     1    :    ?     :  1;
    	      ?   n    1    :    ?     :  -;
    	      *   ?    1    :    ?     :  -;
    	      ?   ?    p    :    ?     :  -;
          endtable

endprimitive