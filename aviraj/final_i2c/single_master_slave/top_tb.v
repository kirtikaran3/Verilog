`timescale 1ns / 1ps



module top_tb;

	// Inputs
	reg clk;
	reg reset;
	reg RW;

	// Bidirs
	wire i2c_sda;
	wire i2c_scl;

	// Instantiate the Unit Under Test (UUT)
	top uut (
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
      always #1 clk = !clk ;
endmodule

