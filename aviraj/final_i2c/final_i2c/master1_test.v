`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:38:48 04/09/2017
// Design Name:   master1
// Module Name:   E:/final_i2c/final_i2c/master1_test.v
// Project Name:  final_i2c
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: master1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module master1_test;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire i2c_sda;
	wire i2c_scl;

	// Instantiate the Unit Under Test (UUT)
	master1 uut (
		.clk(clk), 
		.reset(reset), 
		.i2c_sda(i2c_sda), 
		.i2c_scl(i2c_scl)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset =1 ;

		// Wait 100 ns for global reset to finish
		#10;
		reset = 0;
        
		// Add stimulus here

	end
      always #1 clk = !clk;
endmodule

