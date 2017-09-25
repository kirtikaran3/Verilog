`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:47:22 01/29/2017
// Design Name:   dfio
// Module Name:   C:/Users/Kirti/Documents/verilog/testFIO/tb.v
// Project Name:  testFIO
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dfio
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg clk;
	reg enable;
	reg [31:0] din;

	// Outputs
	wire [31:0] dout;

	// Instantiate the Unit Under Test (UUT)
	dfio uut (
		.clk(clk), 
		.enable(enable), 
		.din(din), 
		.dout(dout)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		enable = 0;
		din = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

