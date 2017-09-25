`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:24:05 03/19/2016 
// Design Name: 
// Module Name:    ques2 
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
module ques2(a,b,c,d,y );
input a,b,c,d;
output y;
wire t1,t2,t3,t4;
not name1(t1,a);
and name2(t2,t1,d);
and name3(t3,b,d);
and name4(t4,c,d);
or name5(y,t2,t3,t4);

endmodule
