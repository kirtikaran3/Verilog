`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:19:26 04/21/2016 
// Design Name: 
// Module Name:    decoder_task 
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
module decoder_task(a,enable,i);
input [1:0] a;
input enable;
output [3:0] i;
reg [3:0] i;
always @ (enable)
begin
taskdecoder (a,i);
end
task taskdecoder;
input [1:0]  a ;
output [3:0] i;
reg [3:0] i;
begin
if(a==00)
i=0001;
else if (a==01)
i=0010;
else if (a==10)
i=0100;
else
i=1000;
end
endtask
endmodule
