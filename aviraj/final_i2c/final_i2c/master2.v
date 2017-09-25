`timescale 1ns / 1ps


module master11 (
      input clk,
      input reset,
		input RW,
      output reg i2c_sda,
      output  i2c_scl);

  
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
   reg [6:0] addr ;
   reg [7:0] count ;
	reg [7:0] data;
   reg i2c_scl_enable;
	reg [6:0] save_add;
	reg [7:0] save_data;
	reg [7:0] slave_data_read;
	
	reg [6:0] sev_seg_add;
	reg [7:0] sev_seg_data;
	
	
	
   assign i2c_scl = (i2c_scl_enable == 0) ? 1:~clk;

   always @(posedge clk ) begin 
	   if (reset ==1)
		   i2c_scl_enable <= 0;
	   else 
		begin 
		if ((state == STATE_IDLE)|| (state == STATE_START)||(state == STATE_STOP))
			i2c_scl_enable <= 0;
		else 
			//i2c_scl_enable = ~i2c_scl_enable;
			i2c_scl_enable <= 1;
	end 
end 


  always @(posedge clk )begin 
      if (reset == 1) begin 
	  
     i2c_sda = 1;
	
	  addr    = 7'h55;
	  count   = 8'd0;
	  data    = 8'h8f;
	  state  = STATE_IDLE;
end 
    else begin 
	    case (state)

    STATE_IDLE : begin 
	         i2c_sda = 1;
			//	 i2c_scl_enable <= 0;
				state  = STATE_START;
         	 end 
    STATE_START: begin 
	        i2c_sda = 0;
				count  = 6;
				state= STATE_ADDR;
	        end
    STATE_ADDR : begin 
	        i2c_sda = addr[count];
			  save_add[count] = i2c_sda;
			  sev_seg_add[count] = i2c_sda;
		if (count == 0)
			state= STATE_RW;
		//	state = STATE_ACK ;
		else 
		   count = count -1;
	        end 
	 

	 STATE_RW  : begin 
					  if (RW == 0)
					    begin 
                 i2c_sda = 1;
					  	
                 state   = STATE_ACK;
					  		end		  
					  else if (RW == 1) begin 
					   i2c_sda = 1 ;
						count   =7 ;
						state = STATE_READ;
					end 
	        end 
    STATE_ACK : if (count == 0)
						if (RW == 0)
						begin 
						i2c_sda = 0;
						count   = 7;
						state = STATE_WRITE;
						end
					 else if( RW == 1) begin
							i2c_sda = 0;
							count   = 7;
						  state = STATE_READ;
						  end 
					else 
					    state = STATE_IDLE;
						
    STATE_WRITE : begin 
                 i2c_sda = data[count];
					  save_data[count] = i2c_sda;
					  sev_seg_data[count] = i2c_sda;
							if (count ==0)
								state= STATE_WACK2;
							else 
								count = count -1;
						end
	 STATE_READ  : begin
							slave_data_read [count] = i2c_sda;
							if (count == 0)
								state = STATE_WACK2;
							else 
							 count = count -1 ;
	               end 
    STATE_WACK2 : begin 
						   i2c_sda = 0;
                    state= STATE_STOP;
	          end 
    STATE_STOP  : begin 
						i2c_sda =1;
		            end 
	 default     : state = STATE_IDLE;
    
    endcase
	// state = state ;
	 end 
 end 
	 endmodule 