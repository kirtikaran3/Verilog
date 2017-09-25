`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:17:43 12/22/2016
// Design Name:   xyz
// Module Name:   C:/Users/Kirti/Documents/verilog/xyz/xyztest.v
// Project Name:  xyz
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: xyz
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module xyztest;

	// Inputs
	reg in0;
	reg in1;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	xyz uut (
		.in0(in0), 
		.in1(in1), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in0 = 0;
		in1 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here 
		
		{in0,in1} = 2'b00; 
	#5 {in0,in1} = 2'b01; 
	#5 {in0,in1} = 2'b10; 
	#5 {in0,in1} = 2'b11; 
	
	$monitor($time,"output is %b",out,"inputs are :%b  %b ",in0,in1);

	end
      
endmodule

