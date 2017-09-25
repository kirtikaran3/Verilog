`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:23:32 11/05/2016
// Design Name:   mux
// Module Name:   C:/Users/Kirti Karan/Documents/verilog/mux_wtb/mux_tb.v
// Project Name:  mux_wtb
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux_tb;

	// Inputs
	reg [3:0] in;
	reg [1:0] select;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	mux uut (
		.in(in), 
		.select(select), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;
		select = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here 
		in = 4'b1111;
		#10 {select[0],select[1]} = 2'b00; 
		$display("The values are: in= %b",in); 
		$display("The values are: out= %b",out); 
		$display("The values are: select= %b",select);
		
		#10 {select[0],select[1]} = 2'b01;  
		$display("The values are: in= %b",in); 
		$display("The values are: out= %b",out); 
		$display("The values are: select= %b",select);
		
		#10 {select[0],select[1]} = 2'b10;   
		$display("The values are: in= %b",in); 
		$display("The values are: out= %b",out); 
		$display("The values are: select= %b",select);
		
		#10 {select[0],select[1]} = 2'b11;  
		$display("The values are: in= %b",in); 
		$display("The values are: out= %b",out); 
		$display("The values are: select= %b",select);
		
		
	end
      
endmodule

