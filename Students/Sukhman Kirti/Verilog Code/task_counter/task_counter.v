`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:10:12 04/15/2016 
// Design Name: 
// Module Name:    task_counter 
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
module task_counter(i,count );
input i;
output [3:0] count;
reg [3:0] count;
initial
begin
count=4'b0000;
end
always 
task_counter (i,count);
task task_counter ;
input i;
output [3:0] count;
reg [3:0] count;
begin
always @(i)
begin
if(i)
count=count+1;
end
end
endtask
endmodule

