module i2c (inout sda,
	    output scl,
	    output [27:0] out_data,
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

   reg chk = 0;
   reg [2:0] ack;
   reg [1:0] ack_count =  0;
   reg [27:0] LED ;
   
   assign out_data = LED;
  wire time_out ;


  always @(time_out [3:0])
    begin 
      case (time_out[3:0])
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
     endcase
  always @(time_out [7:4])
    begin 
      case (time_out[7:4])
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
    endcase
    end 
  always @(time_out [11:8])
    begin 
      case (time_out[11:8])
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
     endcase 
     end 
    
  always @(time_out [15:8])
    begin 
      case (time_out[15:8])
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
	4'h0 : LED[6:0] <= 7'b
   endcase 
   end 
 //========================a==============

	reg I2Cclk = 1; // 
 	reg [8:0] clkclk = clock_div;
	reg sda_int = 1;
	reg [15:0] outreg =0;
	reg [3:0]I2C_count=0;
	reg [3:0] bitaddr7 =4'b0001; 
	reg [3:0] Rxcount =0;
	reg [3:0] Slaveaddr =0;
//========================================
	reg [2:0] state = Rxidle;
	
	assign scl = chk ? 1'b1 :I2Cclk;
	assign time_out = out_reg ;
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
//========================================

 	always @(posedge I2Cclk )
	 if (reset)
	   begin 
		chk <= 1;
		outreg  <= 0;
		I2C_count   <= 0;
		Rxcount     <= 0;
		bitaddr7    <= 4'b0001;
		slaveaddrs  <= 0;
		ack_count   <= 0;
		ack 	    <= 0;
		sda_int     <= 1;
		clkclk	    <= clock_div;
	  end

	 always @(posedge I2Cclk) 
	  begin 
		///============ State Machine =============
	
		case (state)
		 
		  Rxidle : begin 
				sda_int = 1'b0;
				chk     = 1'b0;
				state = Rxstart;
			   end 
		  Rxstart : begin
				
			    case (bitaddr7) 
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
					sda_int   = 1'b1;
					bitaddrs7 = bitaddrs7 +1;
				    end  
				6 : begin 
					sda_int   = 1'b1;
					bitaddrs7 = bitaddrs7 +1;
				    end  
				7 : begin 
					sda_int   = 1'b0;
					bitaddrs7 = bitaddrs7 +1;
				    end  
				8 : begin 
					sda_int   = 1'b0;
					bitaddrs7 = bitaddrs7 +1;
				    end  
				9 : begin 
					if (sda == 1)
						acl[0] =1;
						state = Rxpointer;
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
					 if (sda == 1'b0)
					  ack[1] = 1'b0;
					  state  = Rxstart1;
					end 
				endcase
			   end 
		   ////////// Satrt slave address byte ========
	
	 	Rxstart1: begin
				case (slaveaddrs)
				
				0: begin 
					sda_int 1'b0;
					slaveaddrs = slaveadders +1;
				   end 
				1: begin 
					sda_int 1'b1;
					slaveaddrs = slaveadders +1;
				   end 
				2: begin 
					sda_int 1'b1;
					slaveaddrs = slaveadders +1;
				   end 
				3: begin 
					sda_int 1'b0;
					slaveaddrs = slaveadders +1;
				   end 
				4: begin 
					sda_int 1'b1;
					slaveaddrs = slaveadders +1;
				   end 
				5: begin 
					sda_int 1'b0;
					slaveaddrs = slaveadders +1;
				   end 
				6: begin 
					sda_int 1'b0;
					slaveaddrs = slaveadders +1;
				   end 
				7: begin 
					sda_int 1'b0;
					slaveaddrs = slaveadders +1;
				   end 
				8: begin 
					sda_int 1'b1;
					slaveaddrs = slaveadders +1;
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
					Rxcount = Rxount +1;
				    end 
				 1: begin 
					outreg [14] =sda;
					Rxcount = Rxount +1;
				    end 
				 2: begin 
					outreg [13] =sda;
					Rxcount = Rxount +1;
				    end 
				 3: begin 
					outreg [12] =sda;
					Rxcount = Rxount +1;
				    end 
				 4: begin 
					outreg [11] =sda;
					Rxcount = Rxount +1;
				    end 
				 5: begin 
					outreg [10] =sda;
					Rxcount = Rxount +1;
				    end 
				 6: begin 
					outreg [9 ] =sda;
					Rxcount = Rxount +1;
				    end 
				 7: begin 
					outreg [8 ] =sda;
					Rxcount = Rxount +1;
				    end 
				 8: begin 
					outreg [ 7] =sda;
					Rxcount = Rxount +1;
				    end 
				 9: begin 
					outreg [ 6] =sda;
					Rxcount = Rxount +1;
				    end 
				 10:begin 
					outreg [ 5] =sda;
					Rxcount = Rxount +1;
				    end 
				11: begin 
					outreg [ 4] =sda;
					Rxcount = Rxount +1;
				    end 
				12: begin 
					outreg [ 3] =sda;
					Rxcount = Rxount +1;
				    end 
				13: begin 
					outreg [ 2] =sda;
					Rxcount = Rxount +1;
				    end 
				14: begin 
					outreg [ 1] =sda;
					Rxcount = Rxount +1;
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
				state Rxidle;
			end 
		endcase
	   end 
	endmodule
