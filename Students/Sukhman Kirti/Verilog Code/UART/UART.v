`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:34:20 04/30/2016 
// Design Name: 
// Module Name:    UART 
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
module UART_tx(din,load,shift,reset,clk,tx_data,ready);
input [7:0] din;        //8 bit data to be transmitted
input load;            // load the transmit register
input shift;           // shift register is supposed to shift
input reset;            //reset the registers
input clk;             // local transmit clock
output tx_data;         //output data
output ready;           //when ready to receive data being transmitted
reg [7:0] hold;


always @ (posedge clk)
begin
if ( load == 1 && shift == 0)
hold <= din;
else
   begin
    tx_data <= hold[0];
    hold[6] <= hold[7];
	 hold[5] <= hold[6];
	 hold[4] <= hold[5];
	 hold[3] <= hold[4];
	 hold[2] <= hold[3];
	 hold[1] <= hold[2];
    hold[0] <= hold[1];
   end
end


endmodule
