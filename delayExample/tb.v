`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:20:35 02/03/2017
// Design Name:   delayEx
// Module Name:   C:/Users/Kirti/Documents/verilog/delayExample/tb.v
// Project Name:  delayExample
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: delayEx
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
	reg [3:0] in;
	reg clk;

	// Outputs
	wire [3:0] out1;
	wire [3:0] out2;

	// Instantiate the Unit Under Test (UUT)
	delayEx uut (
		.in(in), 
		.out1(out1), 
		.out2(out2), 
		.clk(clk)
	);

always  
#5 clk = ~clk;

	initial begin
		// Initialize Inputs
		
		$monitor($time,"   input %d",in,"  Output1 %d",out1,"  Output2 %d",out2);
		in = 5;
		clk = 0;

		// Wait 100 ns for global reset to finish
	
		#5 in = 9;
        
		// Add stimulus here

	end
      
endmodule

