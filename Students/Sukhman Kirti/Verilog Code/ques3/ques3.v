`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:29:31 03/19/2016 
// Design Name: 
// Module Name:    ques3 
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
module ques3(a,b,c,d,y);
input a,b,c,d;
output y;
wire t1,t2,t3,t4,t5,t6,t7 ;
not name1(t1,a);
not name2(t2,b);
not name3(t3,c);
and name4(t4,t1,b,c);
and name5(t5,t2,d);
and name6(t6,t3,d);
and name7(t7,t1,t2,t3);
or name_1(y,t4,t5,t6,t7);

endmodule
