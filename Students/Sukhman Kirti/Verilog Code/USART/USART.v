`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:57:07 04/30/2016 
// Design Name: 
// Module Name:    USART 
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

//Transmitter section
module USART_TX(clk,ready,reset,load,din,shift,tx_data);
input clk;             // local transmit clock
input ready;           //when data to be transmitted is ready 
input reset;            //reset the transmitter section
input load;            // load the transmit register
input [7:0] din;        //8 bit data to be transmitted
input shift;           // shift register is supposed to shift
output tx_data;         //output data
reg tx_data; 
reg [7:0] hold;         //holding register for data

always @ (posedge clk | ready)
begin
 if ( reset == 1)
 begin
  hold <=8'b00000000;
  end
 else 
 begin
    if (load)
	 begin
    hold <= din;
    if (shift)
     begin
       tx_data <= hold[7];
       hold[7] <= hold[6];
	    hold[6] <= hold[5];
	    hold[5] <= hold[4];
	    hold[4] <= hold[3];
	    hold[3] <= hold[2];
	    hold[2] <= hold[1];
       hold[1] <= hold[0];
     end
	  end
	end
end
endmodule
//Transmitter Testbench
module USART_TXtestbench;
reg [7:0] din;        
reg load;           
reg shift;           
reg reset;           
reg clk;   
reg ready;           
wire tx_data;          

          
USART_TX n1(clk,ready,reset,load,din,shift,tx_data);
initial
begin
$monitor($time,"clk=%b,ready=%b,reset=%b,load=%b,shift=%b,din=%b,tx_data=%b",clk,ready,reset,load,shift,din,tx_data) ;   
$display($time,"clk=%b,ready=%b,reset=%b,load=%b,shift=%b,din=%b,tx_data=%b",clk,ready,reset,load,shift,din,tx_data) ;   
end
 
initial
begin
 forever
   begin
    clk=1'b1;ready=1'b1;
    #5 clk=1'b0;ready=1'b0;    
	 #5 clk=1'b1;ready=1'b1;     
	 clk=1'b0;ready=1'b0;
   end
end

initial
begin
reset=1'b0;
load=1'b1; din=8'b11001101;
#10 shift=1'b1;
end

initial
begin
#90 $finish;
end
endmodule

//Receiver section
module USART_RX(clk,ready,reset,rx_data,dout);
input clk;             // local receiver clock
input ready;           //when ready to receive data being transmitted
input reset;            //reset the receiver section
input rx_data;        // received data
output [7:0] dout;       //output data 
reg [7:0] hold_rx;           //holding register for data

always @ (posedge clk | ready)
begin
  if ( reset == 1)
  hold_rx <=8'b00000000;
  else
    begin
       hold_rx[7] <= rx_data;
       hold_rx[6] <= hold_rx[7];
	    hold_rx[5] <= hold_rx[6];
	    hold_rx[4] <= hold_rx[5];
	    hold_rx[3] <= hold_rx[4];
	    hold_rx[2] <= hold_rx[3];
	    hold_rx[1] <= hold_rx[2];
       hold_rx[0] <= hold_rx[1];
     end
   end
assign dout = hold_rx;
endmodule
//Receiver Testbench
module USART_RXtestbench;
reg rx_data;        
reg reset;            
reg clk;             
reg ready;          
wire [7:0] dout;       

                  
USART_RX n1(clk,ready,reset,rx_data,dout);
initial
begin
$monitor($time,"clk=%b,ready=%b,reset=%b,rx_data=%b,dout=%b",clk,ready,reset,rx_data,dout) ;   
$display($time,"clk=%b,ready=%b,reset=%b,rx_data=%b,dout=%b",clk,ready,reset,rx_data,dout) ;    
end
 
initial
begin
 forever
   begin
    clk=1'b1;ready=1'b1;
    #5 clk=1'b0;ready=1'b0;
	 #5 clk=1'b1;ready=1'b1;
	 clk=1'b0;ready=1'b0;
   end
end

initial
begin
reset=1'b0; rx_data=1'b1;
#10 rx_data=1'b0;
#10 rx_data=1'b1;
#10 rx_data=1'b1;
#10 rx_data=1'b0;
#10 rx_data=1'b0;
#10 rx_data=1'b1;
#10 rx_data=1'b0;
end

initial
begin
#80 $finish;
end
endmodule
	