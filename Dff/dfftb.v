`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:10:51 12/22/2016
// Design Name:   dff
// Module Name:   C:/Users/Kirti/Documents/verilog/dff/dfftb.v
// Project Name:  dff
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
		
		#5 {d,rst} = 2'b01; 
		#5 {d,rst} = 2'b11;
		
		

	end
      
endmodule

