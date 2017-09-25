`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:58:22 03/19/2016 
// Design Name: 
// Module Name:    mux_using_dataflow 
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
module mux_using_dataflow( s2,s1,s0,a,b,c,d,e,f,g,h,y);
input s2,s1,s0,a,b,c,d,e,f,g,h;
output y;
wire [10:0] t;
assign t0=~s2;
assign t1=~s1;
assign t2=~s0;
assign t3=a&t0&t1&t2;
assign t4=b&t0&t1&s0;
assign t5=c&t0&s1&t2;
assign t6=d&t0&s1&s0;
assign t7=e&s2&t1&t2;
assign t8=f&s2&t1&s0;
assign t9=g&s2&s1&t2;
assign t10=h&s2&s1&s0;
assign y=t3|t4|t5|t6|t7|t8|t9|t10;

endmodule
