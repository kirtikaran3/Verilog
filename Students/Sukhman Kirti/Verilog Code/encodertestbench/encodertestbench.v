`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:20:17 04/09/2016 
// Design Name: 
// Module Name:    encodertestbench 
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
module encodertestbench(
    );
module encoder(in3,in2,in1,in0,enable,out1,out0);
input  in3,in2,in1,in0;
input enable;
output out1,out0;
reg out1,out0;
always @ (enable)
begin
case (in)
0001:
begin
out[0]<=0;
out[1]<=0;
end
0010:
begin
out[0]<=0;
out[1]<=1;
end
0100:
begin
out[0]<=1;
out[1]<=0;
end
1000:
begin
out[0]<=1;
out[1]<=1;
end
endcase
end
endmodule

endmodule
