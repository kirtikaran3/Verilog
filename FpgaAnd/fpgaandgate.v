`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:44:58 11/15/2016 
// Design Name: 
// Module Name:    fpgaandgate 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module fpgaandgate(
    input in0,
    input in1,
    output out0
    );

assign out0 = in0 & in1;

endmodule
