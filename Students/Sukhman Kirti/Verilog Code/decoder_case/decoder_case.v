`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:59:13 04/02/2016 
// Design Name: 
// Module Name:    decoder_case 
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
module decoder_case(a,enable,i);
input [1:0] a;
input enable;
output [3:0] i;
reg [3:0] i;
always @ (enable)
begin
case (a)
00:
begin
i[0]<=1;
i[1]<=0;
i[2]<=0;
i[3]<=0;
end
01:
begin
i[0]<=0;
i[1]<=1;
i[2]<=0;
i[3]<=0;
end
10:
begin
i[0]<=0;
i[1]<=0;
i[2]<=1;
i[3]<=0;
end
11:
begin
i[0]<=0;
i[1]<=0;
i[2]<=0;
i[3]<=1;
end
endcase
end
endmodule
