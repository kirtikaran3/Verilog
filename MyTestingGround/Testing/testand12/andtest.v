`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:44:18 01/10/2017
// Design Name:   test
// Module Name:   C:/Users/Kirti/Documents/verilog/testand12/andtest.v
// Project Name:  testand12
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

	// Inputs
	reg [2:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	test uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here 
		
		$monitor($time,"inputs are %b",in,"Output is %b",out);
		
		#5  in = 3'b000; 
		#5  in = 3'b001; 
		#5  in = 3'b111;

	end
      
endmodule

