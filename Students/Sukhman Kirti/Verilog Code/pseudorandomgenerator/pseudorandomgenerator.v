`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:59:55 04/02/2016 
// Design Name: 
// Module Name:    pseudorandomgenerator 
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
/////////////////////////////////////////////////////////////////////////


module pseudorandomgenerator(clock,q);

input clock;
output [3:0] q;
reg [3:0] q;
initial
begin 
q=1000;
end
always @(posedge clock)
begin
q[3]<=q[2];
q[2]<=q[1];
q[1]<=q[0];
q[0]<=q[3]^q[2];
end

endmodule
