`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:36:50 04/14/2016 
// Design Name: 
// Module Name:    fork_joinstatement 
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
module fork_joinstatement(x,y,z);
output x,y,z;
reg x,y,z;
initial
fork
#3 x=1;
#1 y=2;
#2 z=3;
join

endmodule
