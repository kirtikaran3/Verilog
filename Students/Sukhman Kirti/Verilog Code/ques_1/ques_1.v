`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:02:31 03/19/2016 
// Design Name: 
// Module Name:    ques_1 
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
module ques_1( a,b,c,d,y);
input a,b,c,d;
output y;
wire [8:0] out;
not name1(out0,a);
not name2(out1,b);
not name3(out2,c);
not name4(out3,d);
and name51(out4,out0,out2,out1);
and name52(out5,out0,out2,out3);
and name53(out6,out0,c,d);
and name54(out7,out1,c,d);
and name55(out8,a,out2,d);
or name11(y,out4,out5,out6,out7,out8);

endmodule
