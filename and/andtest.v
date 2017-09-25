`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:06:39 12/08/2016
// Design Name:   test
// Module Name:   C:/Users/Kirti/Documents/verilog/and/andtest.v
// Project Name:  and
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module andtest;

reg a,b;
wire out;

test n1(a,b,out);

initial
begin
$monitor($time,"a=%b,b=%b,out=%b",a,b,out);
$display($time,"a=%b,b=%b,out=%b",a,b,out);
end

initial
begin
#5 a=1'b0;b=1'b0;
#5 a=1'b0;b=1'b1;
#5 a=1'b1;b=1'b0;
#5 a=1'b1;b=1'b1;
end

endmodule

      


