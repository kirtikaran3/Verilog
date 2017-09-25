`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:57:49 01/28/2017
// Design Name:   andGate
// Module Name:   C:/Users/Kirti/Documents/verilog/andDump/tb.v
// Project Name:  andDump
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: andGate
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
	wire out;

	// Instantiate the Unit Under Test (UUT)
	andGate uut (
		.a(a), 
		.b(b), 
		.out(out)
	); 
	
	

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
   $dumpfile("tbdump.v");  
$dumpvars(0,tb);	
	$dumpon;
	  
	
	#5 {a,b} = 2'b00; 
	#5 {a,b} = 2'b01; 
	#5 {a,b} = 2'b10; 
	#5 {a,b} = 2'b11;
$dumpoff;

	end
      
endmodule

