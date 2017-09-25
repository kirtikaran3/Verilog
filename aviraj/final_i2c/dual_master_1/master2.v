`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:57:07 04/09/2017 
// Design Name: 
// Module Name:    master2 
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
module master2 (
      input clk,
      input reset,
		input RW,
		input [6:0]addr_in2,
		input [7:0]data_in2,
      output reg i2c_sda2,
      output  i2c_scl2);

  
  localparam STATE_IDLE  = 0;
  localparam STATE_START = 1;
  localparam STATE_ADDR  = 2;
  localparam STATE_RW    = 3;
  localparam STATE_ACK  = 4;
  localparam STATE_DATA  = 5;
  localparam STATE_STOP  = 6;
  localparam STATE_WACK2 = 7;
  localparam STATE_WRITE = 8;
  localparam STATE_READ  = 9;
  
   reg [7:0] state ,next  ;
   reg [6:0] addr2 ;
   reg [7:0] count2 ;
	reg [7:0] data2;
   reg i2c_scl2_enable;
	reg [6:0] save_add;
	reg [7:0] save_data;
	reg [7:0] slave_data_read;
	
	reg [6:0] sev_seg_add2;
	reg [7:0] sev_seg_data2;
	
	
	
   assign i2c_scl2 = (i2c_scl2_enable == 0) ? 1:~clk;

   always @(posedge clk ) begin 
	   if (reset ==1)
		   i2c_scl2_enable <= 0;
	   else 
		begin 
		if ((state == STATE_IDLE)|| (state == STATE_START)||(state == STATE_STOP))
			i2c_scl2_enable <= 0;
		else 
			//i2c_scl2_enable = ~i2c_scl2_enable;
			i2c_scl2_enable <= 1;
	end 
end 


  always @(posedge clk )begin 
      if (reset == 1) begin 
	  
     i2c_sda2 = 1;
	
	  addr2    = addr_in2;
	  count2   = 8'd0;
	  data2    = data_in2;
	  state  = STATE_IDLE;
end 
    else begin 
	    case (state)

    STATE_IDLE : begin 
	         i2c_sda2 = 1;
			//	 i2c_scl2_enable <= 0;
				state  = STATE_START;
         	 end 
    STATE_START: begin 
	        i2c_sda2 = 0;
				count2  = 6;
				state= STATE_ADDR;
	        end
    STATE_ADDR : begin 
	        i2c_sda2 = addr2[count2];
			  save_add[count2] = i2c_sda2;
			  sev_seg_add2[count2] = i2c_sda2;
		if (count2 == 0)
			state= STATE_RW;
		//	state = STATE_ACK ;
		else 
		   count2 = count2 -1;
	        end 
	 

	 STATE_RW  : begin 
					  if (RW == 0)
					    begin 
                 i2c_sda2 = 1;
					  	
                 state   = STATE_ACK;
					  		end		  
					  else if (RW == 1) begin 
					   i2c_sda2 = 1 ;
						count2   =7 ;
						state = STATE_READ;
					end 
	        end 
    STATE_ACK : if (count2 == 0)
						if (RW == 0)
						begin 
						i2c_sda2 = 0;
						count2   = 7;
						state = STATE_WRITE;
						end
					 else if( RW == 1) begin
							i2c_sda2 = 0;
							count2   = 7;
						  state = STATE_READ;
						  end 
					else 
					    state = STATE_IDLE;
						
    STATE_WRITE : begin 
                 i2c_sda2 = data2[count2];
					  save_data[count2] = i2c_sda2;
					  sev_seg_data2[count2] = i2c_sda2;
							if (count2 ==0)
								state= STATE_WACK2;
							else 
								count2 = count2 -1;
						end
	 STATE_READ  : begin
							slave_data_read [count2] = i2c_sda2;
							if (count2 == 0)
								state = STATE_WACK2;
							else 
							 count2 = count2 -1 ;
	               end 
    STATE_WACK2 : begin 
						   i2c_sda2 = 0;
                    state= STATE_STOP;
	          end 
    STATE_STOP  : begin 
						i2c_sda2 =1;
		            end 
	 default     : state = STATE_IDLE;
    
    endcase
	// state = state ;
	 end 
 end 
	 endmodule 