// Verilog Test Fixture Template

  `timescale 1 ns / 1 ps
module dd; 

	integer a,b,c; 
	
	always @(a)  
	begin 
	
wait(5) c=a; 		
		b=a; 
		
		
	end	
		initial  
			
				begin  
				
					a=1; 
					b=0; 
				fork	
					#(b+2) a=5;
					#1 a=0; 
					#2 a=1; 
					//#3 a=0; 
					#4 a=1; 
					#5 a=0;
				join	
				#3 a=1; 
				#6 a=0;
				end
		initial  
			
			begin  
			
				$monitor($time,"c=%d,a=%d,b=%d",a,b,c); 
				#50 $finish;
			end 

endmodule