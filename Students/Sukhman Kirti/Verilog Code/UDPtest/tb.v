`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:47:04 01/28/2017
// Design Name:   andUDP
// Module Name:   C:/Users/Kirti/Documents/verilog/Students/Sukhman Kirti/Verilog Code/UDPtest/tb.v
// Project Name:  UDPtest
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: andUDP
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
	wire o;

	// Instantiate the Unit Under Test (UUT)
	andUDP uut (
		.a(a), 
		.b(b), 
		.o(o)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
	$monitor("a : "%b,"b : "%b,"o : "%b,); 
	
	#5 {a,b}=2'b00; 
	#5 {a,b}=2'b01; 
	#5 {a,b}=2'b10; 
	#5 {a,b}=2'b11;
	end
      
endmodule

