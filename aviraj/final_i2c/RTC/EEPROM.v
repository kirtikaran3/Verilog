 module RTC (
 		input clk,reset,
	 	inout sda,
		output reg scl,
	        output reg l1	
 		);
 
	parameter start = 0,
		  state1 =1,
		  state2 =2,
		  state3 =3,
		  stop   =4,
		  finish =5;

	  reg [2:0] state ,ps;

	  reg [7:0] control = 8'h0b; /// command data 
	  reg [7:0] add     = 8'h00; // address
	  reg [7:0] datas   = 8'h00;
	  reg [7:0] datam   = 8'h9a;
	  reg [7:0] datah   = 8'hc4;
	  reg [7:0] datada  = 8'h80;
	  reg [7:0] datadate= 8'h8c;
	  reg [7:0] datamon = 8'h48;
	  reg [7:0] dataye  = 8'h10;
	  reg       ack = 1;
	  integer i = 0;
	  integer j = 0;
	  


 		always @ (reset , clk) 
		begin 
			if (reset == 1)
			    //
		    //	if (ckl == 1)
			 if (ps == start)
		 	    if (i < 250)
			    begin
				    sda = 1;
			    	    scl = 1 ;
				 end 
		            else if (i >250 && i <= 500)
			    begin
				    i = i+1 ;
			            sda = 1 ;
				    scl = 1;
			    end 
			    else if (i > 500 && i < 750)
			    begin 
			    	i =i +1 ;
				sda = 0;
				scl = 0;
		   	    end 
			    else if (i == 750)
			    begin 
			    	i = 0;
				sda = 0;
				scl = 0;
				ps = state1;
			  end 
		  	else 
			begin
			       sda = 1;
		       	 scl = 1;	       
			end 
		       else 
			     //////////////////////////
		     //
		    if (ps == state1 )
			    if (i <= 250)begin
				    i = i +1 ;
				    scl = 0;
				    if (j< 8)
					    sda = control (j);
				    else if (j == 8)
				    begin
					    sda = 'bz;
				    	    ack = sda;
				    end 
		  else if (i < 250 && i <= 500)
		  begin 
		  	i = i +1 ;
			scl =1;
				    if (j< 8)
					    sda = control (j);
				    else if (j == 8)
				    begin
					    sda = 'bz;
				    	    ack = sda;
				    end 
		else if (i > 500 && i < 750)
		begin

			 i = i +1 ;
				    scl = 0;
				    if (j< 8)
					    sda = control (j);
				    else if (j == 8)
				    begin
					    sda = 'bz;
				    	    ack = sda;
				    end 

		end 
		else if (i  == 750)begin
			scl = 0;
			i   = 0;
			if (j <8)
				 j = j+1 ;
			 else 
				 j = 0;
		 end 
			if (ps == state2 )
			    if (i <= 250)begin
				    i = i +1 ;
				    scl = 0;
				    if (j< 8)
					    sda = add (j);
				    else if (j == 8)
				    begin
					    sda = 'bz;
				    	    ack = sda;
				    end 
		  else if (i < 250 && i <= 500)
		  begin 
		  	i = i +1 ;
			scl =1;
				    if (j< 8)
					    sda = add     (j);
				    else if (j == 8)
				    begin
					    sda = 'bz;
				    	    ack = sda;
				    end 
		else if (i > 500 && i < 750)
			begin
			 i = i +1 ;
				    scl = 0;
				    if (j< 8)
					    sda = add (j);
				    else if (j == 8)
				    begin
					    sda = 'bz;
				    	    ack = sda;
				    end 
			end 

		else if (i  == 750)begin
			scl = 0;
			i   = 0;
			if (j <8)
				 j = j+1 ;
			 else 
				 j = 0;
		// end 

		case (add)
		   'h00: add = 'h80;
		   'h80: add = 'h40;
		   'h40: add = 'hc0;
		   'hc0: add = 'h20;
		   'h20: add = 'ha0;
		   'ha0: add = 'h60;
		   'h60: add = 'h70;
		 endcase
		ps = state3; 
	end 

       if (ps == state3 )
	       if (i < 250)
	       begin 
	          i = i +1 ;
		       scl = 0;
		  if (j < 8)
			  case (add)
		           'h80 : sda = datas (j); 
		           'h40 : sda = datam(j); 
		           'hc0 : sda = datah(j); 
		           'h20 : sda = datada(j); 
		           'ha0 : sda = datadate(j); 
		           'h60 : sda = datamon(j); 
		           'h70 : sda = dataye(j); 
		   endcase
		 else if (j == 8 )
		 begin 
		 	sda = 'bz;
			ack  = sda;
		 end 
	 	end 
	 else if (i > 250 && i <= 500)
		 if (i < 250)
	       begin 
	          i = i +1 ;
		  scl = 1;
		  if (j < 8)
			  case (add)
		           'h80 : sda = datas (j); 
		           'h40 : sda = datam(j); 
		           'hc0 : sda = datah(j); 
		           'h20 : sda = datada(j); 
		           'ha0 : sda = datadate(j); 
		           'h60 : sda = datamon(j); 
		           'h70 : sda = dataye(j); 
		   endcase
		 else if (j == 8 )
		 begin 
		 	sda = 'bz;
			ack  = sda;
		 end 
	 	end 
	else if (i > 500 && i < 750)
		 if (i < 250)
	       begin 
	          i = i +1 ;
		  scl = 1;
		  if (j < 8)
			  case (add)
		           'h80 : sda = datas (j); 
		           'h40 : sda = datam(j); 
		           'hc0 : sda = datah(j); 
		           'h20 : sda = datada(j); 
		           'ha0 : sda = datadate(j); 
		           'h60 : sda = datamon(j); 
		           'h70 : sda = dataye(j); 
		   endcase
		 else if (j == 8 )
		 begin 
		 	sda = 'bz;
			ack  = sda;
		 end 
	 	end 
		else if (i  == 750)begin
			scl = 0;
			i   = 0;
			if (j <8)
				 j = j+1 ;
			 else 
				 j = 0;
		 end 

		 ps = stop ;
	 end
////////////////////////////////////////////
//
		if (ps == stop )
			if (i <= 250) begin
				i = i+1 ;
				sda = 0;
				scl = 1;
			end 
			else if (i >250 && i <= 500)
			begin
				i = i +1 ;
				sda = 1;
				scl = 1;
			end 
			else if (i >500 && i <= 750)
			begin
				i = i +1 ;
				sda = 1;
				scl = 1;
			end 
			else if (i == 750)
			begin
				i = 0;
			sda = 1 ;
			scl =1 ;
			 case (add)
		           'h70 : ps = finish ; 
		           'h80 : ps = start; 
		           'h40 : ps = start; 
		           'hc0 : ps = start; 
		           'h20 : ps = start; 
		           'ha0 : ps = start; 
		           'h60 : ps = start; 
		   endcase 
	   end 
	end
	   endmodule 


