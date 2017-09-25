module i2c_test ( 
		
		clock_50,
//		led,
		key,
//		sw,
		scl,
		sda,
		count,
		anode,
		cathode,
		sd_counter);

	input clock_50;
//	output [7:0] led;
	input [1:0] key;
//	input [3:0] sw;
	output scl;
	inout sda;
	output [5:0] sd_counter ;
	output [9:0] count;
	output reg [3:0] anode;
	output reg [6:0] cathode;

	wire reset_n;
	reg go;
	reg [8:0] sd_counter ;
	reg sdi;
	reg sclk;
	reg [9:0] count;
	reg [17:0] sda_save;
	

	assign reset_n = key[0];

	always @(posedge clock_50) 
			count <= count +1;

	always @(posedge count[9] or negedge reset_n)
	begin 
		if (!reset_n)
		    go <= 0;
	        else 
		   if (!key[1])
			   go <= 1;
	   end 

	   always @(posedge count [9] or negedge reset_n)
		   begin
			   if (!reset_n)
				   sd_counter <= 0;
			   else 
			   begin 
			   if (!go)
				   sd_counter<= 0;
			   else 
				   if (sd_counter < 49)
					   sd_counter <= sd_counter +1;
			   end
		   end

           always @(posedge count [9] or negedge reset_n)
	   begin 
	   	if (!reset_n)
		begin 
			sclk <= 1;
			sdi <=1;
		end 
		else 
		   case (sd_counter)

		     6'd0 : begin 
		     		sdi <=1;
				sclk <= 1;
			    end
		     6'd1 : sdi <=0;
		     
		     6'd2 : sclk<=0;
/////////////////////  Adderess 
		     6'd3 :sdi <= 1;
		     6'd4 :sdi <= 1;
		     6'd5 :sdi <= 0;
		     6'd6 :sdi <= 1;
		     6'd7 :sdi <= 0;
		     6'd8 :sdi <= 0;
		     6'd9 :sdi <= 0;
		     6'd10:sdi <= 0;
		     6'd11:sdi <= 1'bz;
		   
///////////////////////////////////////////
/////////////sub address////////////////////
		     6'd12:sdi <= 0;
		     6'd13:sdi <= 0;
		     6'd14:sdi <= 0;
		     6'd15:sdi <= 0;
		     6'd16:sdi <= 0;
		     6'd17:sdi <= 0;
		     6'd18:sdi <= 0;
		     6'd19:sdi <= 0;
		     6'd20:sdi <= 1'bz;
////////////////////////////////////////////
//////////     read mode  address   //////////////////
		     6'd21:sdi <= 1;
		     6'd22:sdi <= 1;
		     6'd23:sdi <= 0;
		     6'd24:sdi <= 1;
		     6'd25:sdi <= 0;
		     6'd26:sdi <= 0;
		     6'd27:sdi <= 0;
		     6'd28:sdi <= 1;
		     6'd29:sdi <= 1'bz;
/////////////////////////////////////
/////////    first byte receive ////////

			  6'd30 : sda_save[17] <= sda;
			  6'd31 : sda_save[16] <= sda;
			  6'd32 : sda_save[15] <= sda;
			  6'd33 : sda_save[14] <= sda;
			  6'd34 : sda_save[13] <= sda;
			  6'd35 : sda_save[12] <= sda;
			  6'd36 : sda_save[11] <= sda;
			  6'd37 : sda_save[10] <= sda;
			  6'd38 : sda_save[9]  <= sda;    ///// ack
//////////////////////////////////////////////////////			  
///////////  second btyte 			  
			  6'd39 : sda_save[8]  <= sda;
			  6'd40 : sda_save[7]  <= sda;
			  6'd41 : sda_save[6]  <= sda;
			  6'd42 : sda_save[5]  <= sda;
			  6'd43 : sda_save[4]  <= sda;
			  6'd44 : sda_save[3]  <= sda;
			  6'd45 : sda_save[2]  <= sda;
			  6'd46 : sda_save[1]  <= sda;
			  6'd47 : sda_save[0]  <= sda; ////// ack
////////////////////////////////////////////
////////////   stop ///////////////
				
			  6'd48  : begin sdi <= 1; sclk <= 1; end 
			  6'd49	: sdi <= 0;
			  
			endcase
			end 
			
			
	assign scl = ((sd_counter >= 4 ) & (sd_counter <= 47)) ? ~count[9] : sclk;
	assign sda  = sdi ;
	//endmodule 
	
  reg [1:0]ab;

		always @( posedge count [9] or negedge reset_n )
		  if (!reset_n)
				ab <= 0;
		  else 
				ab <= ab +1;
  
		always @( posedge count [9] or negedge reset_n )
		  if (!reset_n)
			  anode <= 4'b1111;
		  else
		 // if (arb_control == 0)
			begin
			case (ab)
			 0: begin 
			    anode <= 4'b1110;
				case(sda_save[17:14])
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
			 default : cathode <= 7'b1111111;
	         endcase 
			end 
			1:  begin 
				anode <= 4'b1101;
					case(sda_save[13:10])
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
			 default : cathode <= 7'b1111111;
	         endcase 
			end 
			2: begin 
				anode <= 4'b1011;
					case(sda_save[8:5])
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
			 default : cathode <= 7'b1111111;
	         endcase 
			end 
			3: begin 
				anode <= 4'b0111;
					case(sda_save[4:1])
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
			 default : cathode <= 7'b1111111;
	         endcase 
			end 
			endcase
			end 
		

endmodule 