`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:50:01 04/13/2017
// Design Name:   master_control
// Module Name:   E:/final_i2c/arb_0_i2c/maser2_test.v
// Project Name:  arb_0_i2c
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: master_control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module maser2_test;

	// Inputs
	reg clk;
	reg reset;
	reg arb_control;
	reg RW;

	// Outputs
	wire i2c_sda;
	wire i2c_scl;
	wire m1_i2c_sda;
	wire m1_i2c_scl;
	wire [6:0] LED_ADDR;
	wire [7:0] SEVEN_DATA;
	wire [1:0] anode;
	wire [6:0] cathode;

	// Instantiate the Unit Under Test (UUT)
	master_control uut (
		.clk(clk), 
		.reset(reset), 
		.arb_control(arb_control), 
		.RW(RW), 
		.i2c_sda(i2c_sda), 
		.i2c_scl(i2c_scl), 
		.m1_i2c_sda(m1_i2c_sda), 
		.m1_i2c_scl(m1_i2c_scl), 
		.LED_ADDR(LED_ADDR), 
		.SEVEN_DATA(SEVEN_DATA), 
		.anode(anode), 
		.cathode(cathode)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		arb_control = 1;
		RW = 0;

		// Wait 100 ns for global reset to finish
		#10;
        reset = 0;
		// Add stimulus here

	end
	always #1 clk = !clk ;
      
endmodule

