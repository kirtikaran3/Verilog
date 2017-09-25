`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:23:19 03/19/2016 
// Design Name: 
// Module Name:    mux_8 
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
module mux_8(in0,in1,in2,in3,in4,in5,in6,in7,s0,s1,s2,y);
input in0,in1,in2,in3,in4,in5,in6,in7;
input s0,s1,s2;
output y;
wire [10:0] t;
not name1(t0,s2);
not name2(t1,s1);
not name3(t2,s0);
and name4(t3,in0,t0,t1,t2);
and name5(t4,in1,t0,t1,s0);
and name6(t5,in2,t0,s1,t2);
and nam27(t6,in3,t0,s1,s0);
and name7(t7,in4,s2,t1,t2);
and name8(t8,in5,s2,t1,s0);
and name9(t9,in6,s2,s1,t2);
and name_1(t10,in7,s2,s1,s0);
or gate(y,t3,t4,t5,t6,t7,t8,t9,t10);

endmodule
