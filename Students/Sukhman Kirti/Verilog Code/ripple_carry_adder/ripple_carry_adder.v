`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:09:47 03/29/2016 
// Design Name: 
// Module Name:    ripple_carry_adder 
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
module full_adder( a,b,c,sum,carry);
input a,b,c;
output sum,carry;
wire m;
assign m =a^b;
assign sum =m^c;
assign carry= a&b|b&c|a&c;
endmodule

module ripple_carry_adder(x,y,cin,s,cout);
input [3:0] x,y;
input cin;
output [3:0] s;
output cout;
wire [3:1] z;
full_adder r1(x[0],y[0],cin,s[0],z[1]);
full_adder r2(x[1],y[1],z[1],s[1],z[2]);
full_adder r3(x[2],y[2],z[2],s[2],z[3]);
full_adder r4(x[3],y[3],z[3],s[3],cout);

endmodule
