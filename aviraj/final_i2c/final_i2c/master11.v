`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:22:57 04/09/2017
// Design Name:   master11
// Module Name:   E:/final_i2c/final_i2c/master11.v
// Project Name:  final_i2c
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: master11
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module master11_tb;

	// Inputs
	reg clk;
	reg reset;
	reg RW;

	// Outputs
	wire i2c_sda;
	wire i2c_scl;

	// Instantiate the Unit Under Test (UUT)
	master11 uut (
		.clk(clk), 
		.reset(reset), 
		.RW(RW), 
		.i2c_sda(i2c_sda), 
		.i2c_scl(i2c_scl)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		RW = 0;

		// Wait 100 ns for global reset to finish
		#10;
        reset = 0;
		// Add stimulus here

	end
	always #1 clk =!clk ;
      
endmodule

