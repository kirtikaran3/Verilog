`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:58:40 01/10/2017
// Design Name:   dff
// Module Name:   C:/Users/Kirti/Documents/verilog/testdff/dfftb.v
// Project Name:  testdff
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dff
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dfftb;

	// Inputs
	reg d;
	reg clk;
	reg rst;

	// Outputs
	wire q;

	// Instantiate the Unit Under Test (UUT)
	dff uut (
		.d(d), 
		.q(q), 
		.clk(clk), 
		.rst(rst)
	); 
	
	always  
	#5 clk = ~clk;

	initial begin
		// Initialize Inputs
		d = 0;
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here 
		
		$monitor($time,"input is %b",d,"Output is %b",q);
		
		#5 rst = 1; 
		#5 d=0; 
		#5 d=1; 
		#5 d=0;

	end
      
endmodule

