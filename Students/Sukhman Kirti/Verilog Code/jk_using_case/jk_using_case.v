`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:13:36 04/01/2016 
// Design Name: 
// Module Name:    jk_using_case 
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
module jk_using_case(j,k,clk,q,qbar);
input j,k,clk;
wire [1:0] temp;
output q,qbar;
reg q,qbar;
assign temp ={j,k};
always @ (posedge clk)
begin
case (temp)
00:
begin
q=q;
qbar=qbar;
end
01:
begin
q=0;
qbar=1;
end
10:
begin
q=1;
qbar=0;
end
11:
begin
q=q;
qbar= q;
end
endcase
end
endmodule
