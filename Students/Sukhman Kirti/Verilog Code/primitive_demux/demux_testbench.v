`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:21:01 04/28/2016 
// Design Name: 
// Module Name:    demux_testbench 
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
`include "primitive_demux.v"
`include "primitive_not.v"
module demux_testbench(in,s0,s1,o0,o1,o2,o3);
input in,s0,s1;
output o0,o1,o2,o3;
wire t1,t2;
primitive_not name1(t1,s0);
primitive_not name2(t2,s1);

primitive_demux n1(o0,in,t1,t2);

primitive_demux n2(o1,in,t1,s1);

primitive_demux n3(o2,in,s0,t2);

primitive_demux n4(o3,in,s0,s1);

endmodule
/*primitive_demux n1(y0,s0,s1,in);
primitive_demux n2(y1,s0,s1,in);
primitive_demux n3(y2,s0,s1,in);
primitive_demux n4(y3,s0,s1,in);
initial
begin
$monitor($time,"y0=%b,y1=%b,y2=%b,y3=%b,in=%b,s0=%b,s1=%b",y0,y1,y2,y3,in,s0,s1);
end
initial
begin
 s0=1'b0; s1=1'b0; in=1'b1;
 s0=1'b0; s1=1'b1;
 s0=1'b1; s1=1'b0;
 s0=1'b1; s1=1'b1;

end
endmodule

*/