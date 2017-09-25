`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:21:37 03/25/2016 
// Design Name: 
// Module Name:    test1 
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

module test1(a,b,c,y  );

input a,c,b; 
output y; 
wire x;
 assign #(10:12:13) x=a&b; 
 assign #(22:44:66) y=c&x; 

endmodule


module test2(a,b,c,y); 

input a,b,c; 
output y; 

wire x; 

and #(10:12:13) or1(x,a,b); 
and #(100:120:130) or2(x,a,b);

endmodule 
















