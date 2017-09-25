`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:22:14 03/19/2016 
// Design Name: 
// Module Name:    demux_gatelevel 
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
module demux_gatelevel(in,a,b,o0,o1,o2,o3);
input in,a,b;
output o0,o1,o2,o3;
wire t1,t2;
not name1(t1,a);
not name2(t2,b);
and name3(o0,in,t1,t2);
and name4(o1,in,t1,b);
and name5(o2,in,a,t2);
and name6(o3,in,a,b);

endmodule
