`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:22:13 01/28/2017
// Design Name:   half_adder
// Module Name:   C:/Users/Kirti/Documents/verilog/dumpf/tb_half_adder.v
// Project Name:  dumpf
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: half_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_half_adder;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire s;
	wire c;
	initial begin
$dumpfile("half_adder.vcd");

$dumpvars(0, tb_half_adder);
end
	// Instantiate the Unit Under Test (UUT)
	half_adder uut (
		.s(s), 
		.c(c), 
		.a(a), 
		.b(b)
	);


initial begin
#10 a = 1'b0; b = 1'b0;
#10 a = 1'b0; b = 1'b1;
#10 a = 1'b1; b = 1'b0;
#10 a = 1'b1; b = 1'b1;
end
endmodule
      


