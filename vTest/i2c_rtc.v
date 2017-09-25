`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:16:08 04/24/2017 
// Design Name: 
// Module Name:    i2c_rtc 
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
module i2c (inout sda,
	    output scl,
	    output [27:0] out_data,
		 output reg [6:0]cathode,
		 output reg [4:0] anode,
		 output reg [15:0] outreg,
	    input clk, 
	    output [2:0] ack_out,
	    output [1:0] acl_count1,
	    input reset);

   parameter clock_div = 500; // i2c clock 50mhz / 500 = 100kz 
  
   parameter Rxidle =0;
   parameter Rxstart  =1;
   parameter RxPointeraddr =2 ;
   parameter Rxstart1   =3 ;
   parameter Rxdata    =4 ;
   parameter Rxstop    =5;
//===============================================

   reg chk ;//= 0;
   reg [2:0] ack;
   reg [1:0] ack_count =  0;
   reg [27:0] LED ;
	reg I2Cclk = 1;
   
   assign out_data = LED;
  wire [15:0]time_out ;
  
  reg [7:0]count1 =0;
  reg clk_div =0;
  reg [1:0] ab =0;
always @ (posedge clk)
        if (count1 <50)
				count1 = count1 +1;
		  else
				begin		  
				count1 = 0;
				clk_div = !clk_div;
				end 
	//always @(posedge clk_div)
	always @(posedge I2Cclk)
	   if (ab <3)
			ab = ab +1;
			else 
			ab = 0;
			
   always @( ab, reset,time_out)
		if (reset == 1)
			anode = 4'b1111;
		else
		
		case (ab)
		0:
   
 // always @(time_out [3:0])
    begin 
	 anode = 4'b1110;
      case (time_out[3:0])
			 0: cathode<=7'b0000001;
			 1: cathode<=7'b1001111;
			 2: cathode<=7'b0010010;
			 3: cathode<=7'b0000110;
			 4: cathode<=7'b1001100;
			 5: cathode<=7'b0100100; 
			 6: cathode<=7'b0100000;
			 7: cathode<=7'b0001111;
			 8: cathode<=7'b0000000;
			 9: cathode<=7'b0000000;
			10: cathode<=7'b0000100;
		   11: cathode<=7'b0001000;
			12: cathode<=7'b1100000;
			13: cathode<=7'b0110001;
			14: cathode<=7'b1110000;
			15: cathode<=7'b0111000;
     endcase
	  end 
 // always @(time_out [7:4])
   1: begin
		anode = 4'b1101;
      case (time_out[7:4])
			 0: cathode<=7'b0000001;
			 1: cathode<=7'b1001111;
			 2: cathode<=7'b0010010;
			 3: cathode<=7'b0000110;
			 4: cathode<=7'b1001100;
			 5: cathode<=7'b0100100; 
			 6: cathode<=7'b0100000;
			 7: cathode<=7'b0001111;
			 8: cathode<=7'b0000000;
			 9: cathode<=7'b0000000;
			10: cathode<=7'b0000100;
		   11: cathode<=7'b0001000;
			12: cathode<=7'b1100000;
			13: cathode<=7'b0110001;
			14: cathode<=7'b1110000;
			15: cathode<=7'b0111000;
    endcase
    end 
  //always @(time_out [11:8])
    2:begin
		anode = 4'b1011;
      case (time_out[11:8])
			 0: cathode<=7'b0000001;
			 1: cathode<=7'b1001111;
			 2: cathode<=7'b0010010;
			 3: cathode<=7'b0000110;
			 4: cathode<=7'b1001100;
			 5: cathode<=7'b0100100; 
			 6: cathode<=7'b0100000;
			 7: cathode<=7'b0001111;
			 8: cathode<=7'b0000000;
			 9: cathode<=7'b0000000;
			10: cathode<=7'b0000100;
		   11: cathode<=7'b0001000;
			12: cathode<=7'b1100000;
			13: cathode<=7'b0110001;
			14: cathode<=7'b1110000;
			15: cathode<=7'b0111000;
	endcase 
     end 
    
 // always @(time_out [15:8])
   3: begin
		anode = 4'b0111;
      case (time_out[15:8])
			 0: cathode<=7'b0000001;
			 1: cathode<=7'b1001111;
			 2: cathode<=7'b0010010;
			 3: cathode<=7'b0000110;
			 4: cathode<=7'b1001100;
			 5: cathode<=7'b0100100; 
			 6: cathode<=7'b0100000;
			 7: cathode<=7'b0001111;
			 8: cathode<=7'b0000000;
			 9: cathode<=7'b0000000;
			10: cathode<=7'b0000100;
		   11: cathode<=7'b0001000;
			12: cathode<=7'b1100000;
			13: cathode<=7'b0110001;
			14: cathode<=7'b1110000;
			15: cathode<=7'b0111000;
   endcase 
   end 
	endcase
 //========================a==============

	//reg I2Cclk = 1; // 
 	reg [8:0] clkclk = clock_div;
	reg sda_int = 1;
//	reg [15:0] outreg =0;
	reg [3:0]I2C_counter=0;
	reg [3:0] bitaddrs7 =4'b0001; 
	reg [3:0] Rxcount =0;
	reg [3:0] slaveaddrs =0;
//========================================
	reg [2:0] state = Rxidle;
	
	assign scl = chk ? 1'b1 :I2Cclk;
	assign time_out = outreg ;
	//assign time_out = 16'h4567 ;
	assign sda = sda_int ;
	assign ack_out = ack;
	assign ack_count1 = ack_count;
//=========================================

	
	always @(posedge clk )  
	  begin 
		clkclk = clkclk -1;
		if (clkclk == 0)
		begin 
		I2Cclk = ~I2Cclk;
		clkclk = clock_div;
	  end 
	  end
//========================================

 	always @(posedge I2Cclk )
	 if (reset)
	   begin 
		chk   			= 1;
		outreg  			= 0;
		I2C_counter   	= 0;
		Rxcount     	= 0;
		bitaddrs7    	= 4'b0001;
		slaveaddrs  	= 0;
		ack_count   	= 0;
		ack 	    		= 0;
		sda_int     	= 1;
	//	clkclk	    	= clock_div;
	  end

	// always @(posedge I2Cclk) 
	else
	  begin 
		///============ State Machine =============
	
		case (state)
		 
		  Rxidle : begin 
				sda_int = 1'b1;
				chk     = 1'b1;
				state = Rxstart;
			   end 
		  Rxstart : begin
				
			    case (bitaddrs7) 
				1 : begin 
					sda_int   = 1'b1;
					bitaddrs7 = bitaddrs7 +1;
				    end  
				2 : begin 
					sda_int   = 1'b1;
					bitaddrs7 = bitaddrs7 +1;
				    end  
				3 : begin 
					sda_int   = 1'b0;
					bitaddrs7 = bitaddrs7 +1;
				    end  
				4 : begin 
					sda_int   = 1'b1;
					bitaddrs7 = bitaddrs7 +1;
				    end  
				5 : begin 
					sda_int   = 1'b0;
					bitaddrs7 = bitaddrs7 +1;
				    end  
				6 : begin 
					sda_int   = 1'b0;
					bitaddrs7 = bitaddrs7 +1;
				    end  
				7 : begin 
					sda_int   = 1'b0;
					bitaddrs7 = bitaddrs7 +1;
				    end  
				8 : begin 
					sda_int   = 1'b1;
					bitaddrs7 = bitaddrs7 +1;
				    end  
				9 : begin 
					if (sda == 1)begin 
						ack[0] =1;
						state = RxPointeraddr;
						end 
				   end 
			endcase
			end
		RxPointeraddr  : begin
				  case (I2C_counter)
			   	  
				    0 : begin
				        sda_int = 1'b0;
					I2C_counter   = I2C_counter +1;
					end 
				    1 : begin
				        sda_int = 1'b0;
					I2C_counter   = I2C_counter +1;
					end 
				    2 : begin
				        sda_int = 1'b0;
					I2C_counter   = I2C_counter +1;
					end 
				    3 : begin
				        sda_int = 1'b0;
					I2C_counter   = I2C_counter +1;
					end 
				    4 : begin
				        sda_int = 1'b0;
					I2C_counter   = I2C_counter +1;
					end 
				    5 : begin
				        sda_int = 1'b0;
					I2C_counter   = I2C_counter +1;
					end 
				    6 : begin
				        sda_int = 1'b0;
					I2C_counter   = I2C_counter +1;
					end 
				    7 : begin
				        sda_int = 1'b0;
					ack_count = 2'b01;
					I2C_counter   = I2C_counter +1;
					end 
				    8 : begin
					 if (sda == 1'b0)begin
					  ack[1] = 1'b0;
					  state  = Rxstart1;
					end 
					end
				endcase
			   end 
		   ////////// Satrt slave address byte ========
	
	 	Rxstart1: begin
				case (slaveaddrs)
				
				0: begin 
					sda_int =1'b0;
					slaveaddrs = slaveaddrs +1;
				   end 
				1: begin 
					sda_int =1'b0;
					slaveaddrs = slaveaddrs +1;
				   end 
				2: begin 
					sda_int =1'b0;
					slaveaddrs = slaveaddrs +1;
				   end 
				3: begin 
					sda_int =1'b1;
					slaveaddrs = slaveaddrs +1;
				   end 
				4: begin 
					sda_int =1'b0;
					slaveaddrs = slaveaddrs +1;
				   end 
				5: begin 
					sda_int =1'b0;
					slaveaddrs = slaveaddrs +1;
				   end 
				6: begin 
					sda_int =1'b0;
					slaveaddrs = slaveaddrs +1;
				   end 
				7: begin 
					sda_int =1'b0;
					slaveaddrs = slaveaddrs +1;
				   end 
				8: begin 
					sda_int= 1'b1;
					slaveaddrs = slaveaddrs +1;
				   end 
				9 : begin 
					if (sda == 1'b0)
						ack[2] = 1;
						state = Rxdata;
					end 
				endcase
			end 
//////////////////////////////////////////////////////////////////



		Rxdata   : begin
				case (Rxcount)
				 0: begin 
					outreg [15] =sda;
					Rxcount = Rxcount +1;
				    end 
				 1: begin 
					outreg [14] =sda;
					Rxcount = Rxcount +1;
				    end 
				 2: begin 
					outreg [13] =sda;
					Rxcount = Rxcount +1;
				    end 
				 3: begin 
					outreg [12] =sda;
					Rxcount = Rxcount +1;
				    end 
				 4: begin 
					outreg [11] =sda;
					Rxcount = Rxcount +1;
				    end 
				 5: begin 
					outreg [10] =sda;
					Rxcount = Rxcount +1;
				    end 
				 6: begin 
					outreg [9 ] =sda;
					Rxcount = Rxcount +1;
				    end 
				 7: begin 
					outreg [8 ] =sda;
					Rxcount = Rxcount +1;
				    end 
				 8: begin 
					outreg [ 7] =sda;
					Rxcount = Rxcount +1;
				    end 
				 9: begin 
					outreg [ 6] =sda;
					Rxcount = Rxcount +1;
				    end 
				 10:begin 
					outreg [ 5] =sda;
					Rxcount = Rxcount +1;
				    end 
				11: begin 
					outreg [ 4] =sda;
					Rxcount = Rxcount +1;
				    end 
				12: begin 
					outreg [ 3] =sda;
					Rxcount = Rxcount +1;
				    end 
				13: begin 
					outreg [ 2] =sda;
					Rxcount = Rxcount +1;
				    end 
				14: begin 
					outreg [ 1] =sda;
					Rxcount = Rxcount +1;
				    end 
				15: begin 
					sda_int = 1'b0;
					state   = Rxstop;
				    end 
				endcase
			end 
		Rxstop :
			begin
				chk = 1;
				sda_int = 1'b1;
				state = Rxidle;
			end 
		endcase
	   end 
	endmodule
