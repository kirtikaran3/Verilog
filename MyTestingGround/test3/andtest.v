`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:27:02 04/07/2016 
// Design Name: 
// Module Name:    andtest 
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
module andtest(
a,b,out    );
input a,b; 
output out; 

assign out=a&b;

endmodule 

module test; 

reg a,b; 
wire out; 

andtest testing(a,b,out);
initial  
begin 

//$display($time,"a=%b,b=%b,out=%b",a,b,out); 
$monitor($time,"a=%b,b=%b,out=%b",a,b,out);
end 

initial 
begin 

#5 a=1'b1;b=1'b1; 
#5 a=1'b0;b=1'b1; 
#5 a=1'b1;b=1'b0; 
#5 a=1'b0;b=1'b0;

end 

endmodule







