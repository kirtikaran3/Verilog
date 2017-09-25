`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:34:39 04/01/2016 
// Design Name: 
// Module Name:    sr_using_case 
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
module sr_using_case( s,r,clk,q  );
input s,r,clk;
wire [1:0] temp;

output q;
reg q;
assign temp={s,r};
always @ (posedge clk)
begin
//temp={s,r};
case (temp)

00:
q = q;
01:
q = 0;
10:
q = 1;
11:
q = 1'bz;

endcase
end
endmodule
