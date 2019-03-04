	PRESERVE8 ; Indicate the code here preserve  
; 8 byte stack alignment         
                     THUMB     ; Indicate THUMB code is used       
                 AREA    |.text|, CODE, READONLY
			   
              EXPORT __main
 
__main 	
	LDR r0,=0x20000000 ; Source address
	LDR r1,=0x20000040 ; Destination address
	LDR r2,=10; number of bytes to copy
copy_loop
	SUBS r2, r2, #1 ; decrement offset and loop counter
	LDRB r4,[r0, r2] ; read 1 byte
	STRB r4,[r1, r2] ; write 1 byte
	BNE copy_loop ; check for sub instruction,if result is not equal to 0,then loop until all data copied
stop B stop
	          END

