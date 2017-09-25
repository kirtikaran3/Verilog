`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:33:20 05/04/2016 
// Design Name: 
// Module Name:    uart_tx 
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

module USART_TX(din,load,shift,reset,clk,ready,tx_data);

input [7:0] din;        //8 bit data to be transmitted
input load;            // load the transmit register
input shift;           // shift register is supposed to shift
input reset;            //reset the transmitter section
input clk;             // local transmit clock
input ready;           //when ready to receive data being transmitted
output tx_data;         //output data
reg tx_data; 
reg [7:0] hold;         //holding register for data
reg wr_tx_data;         // transmit bit

always @ (posedge clk && ready)
begin
 if ( reset == 1)
  hold <=8'b00000000;
 else 
    if ( load == 1 && shift == 0)
    hold <= din;
    else
     begin
       tx_data = hold[7];
       hold[7] = hold[6];
	    hold[6] = hold[5];
	    hold[5] = hold[4];
	    hold[4] = hold[3];
	    hold[3] = hold[2];
	    hold[2] = hold[1];
       hold[1] = hold[0];
     end
end

always @ (posedge clk && ready)
begin
  if ( ready == 1)
  begin
   repeat (8)
     wr_tx_data = tx_data;
  end
end  
endmodule

module USART_TXtestbench;
reg [7:0] din;        
reg load;           
reg shift;           
reg reset;           
reg clk;   
reg ready;           
wire tx_data;          

          
USART_TX n1(clk,reset,load,shift,din,ready,tx_data);
initial
begin
$monitor($time,"clk=%b,reset=%b,load=%b,shift=%b,din=%b,ready=%b,tx_data=%b",clk,reset,load,shift,din,ready,tx_data) ;   
$display($time,"clk=%b,reset=%b,load=%b,shift=%b,din=%b,ready=%b,tx_data=%b",clk,reset,load,shift,din,ready,tx_data) ;   
end
 
initial
begin
 forever
   begin
	#5 clk = ~clk;
   end
end

initial
begin
reset=1'b0;
load=1'b1; shift=1'b0; din=8'b11001101;
#5 load=1'b0; shift=1'b1;
ready=1'b1;
end
endmodule


