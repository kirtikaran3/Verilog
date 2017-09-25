`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:19:24 01/21/2017
// Design Name:   shift
// Module Name:   C:/Users/Kirti/Documents/verilog/generateShiftReg/test.v
// Project Name:  generateShiftReg
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: shift
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

// Testbench
module test;

  reg clk;
  reg reset;
  reg data_in;
  wire data_out;
  
  shift #(.DEPTH(4)) shift(clk, reset, data_in, data_out);
  
  always #10 clk = ~clk;
  
  initial begin
    clk = 0;
    reset = 1;
    #1 reset =0;
    data_in = 0;
    repeat (5)
      #20 $display("data_in:%b, data_out:%b",
        data_in, data_out);
    data_in = 1;
    repeat (10)
      #20 $display("data_in:%b, data_out:%b",
        data_in, data_out);
    data_in = 0;
    repeat (10)
      #20 $display("data_in:%b, data_out:%b",
        data_in, data_out);
    $finish();
  end
  
endmodule