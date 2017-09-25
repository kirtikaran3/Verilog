`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:12:26 04/21/2016 
// Design Name: 
// Module Name:    encoder_task 
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
module encoder_task(in,enable,out);
input [3:0] in;
input enable;
output [1:0] out;
reg [1:0] out;
always @ (enable)
begin
taskencoder (in,out);
end
task taskencoder;
input [3:0]  in ;
output [1:0] out;
reg [1:0] out;
begin
if(in==0001)
out=00;
else if (in==0010)
out=01;
else if (in==0100)
out=10;
else
out=11;
end
endtask
endmodule

