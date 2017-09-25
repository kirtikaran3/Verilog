`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:05:11 03/19/2016 
// Design Name: 
// Module Name:    mux_4 
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
module mux_4(in0,in1,in2,in3,s1,s0,y);
input in0,in1,in2,in3;
input s0,s1;
output y;
wire t1,t2,t3,t4,t5,t6;
not name1(t1,s1);
not name2(t2,s0);
and name3(t3,in0,t1,t2);
and name4(t4,in1,t1,s0);
and name5(t5,in2,s1,t2);
and name6(t6,in3,s1,s2);
or gate(y,t3,t4,t5,t6);

endmodule
