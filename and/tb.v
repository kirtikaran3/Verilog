`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:57:32 01/28/2017
// Design Name:   test
// Module Name:   C:/Users/Kirti/Documents/verilog/and/tb.v
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

module tb;

	// Inputs
	reg a;
	reg b;
	

	// Outputs
	wire f;

	// Instantiate the Unit Under Test (UUT)
	test uut (
		.a(a), 
		.b(b), 
		.f(f)
	);
	
		initial begin
			$dumpfile("andtest.vcd");

			$dumpvars(0, tb);
	
	end

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
	

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	#5 {a,b} = 2'b00;

	#5 {a,b} = 2'b01;

	#5 {a,b} = 2'b10;

	#5 {a,b} = 2'b11;


	end 
	
	 
	

      
endmodule

