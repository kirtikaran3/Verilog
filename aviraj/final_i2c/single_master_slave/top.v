`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:29:20 04/17/2017 
// Design Name: 
// Module Name:    top 
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
module top( clk,reset,RW,i2c_sda,i2c_scl
    );

			input clk,reset,RW;
			inout i2c_sda, i2c_scl ;

master11 M1 (
    .clk(clk), 
    .reset(reset), 
    .RW(RW), 
    .i2c_sda(i2c_sda), 
    .i2c_scl(i2c_scl)
    );


slave11 S1 (
    .clk(clk), 
    .reset(reset), 
    .RW(RW), 
    .i2c_sda(i2c_sda), 
    .i2c_scl(i2c_scl)
    );
endmodule
