 PRESERVE8 ; Indicate the code here preserve  
; 8 byte stack alignment  
 THUMB     ; Indicate THUMB code is used       
                 AREA    |.text|, CODE, READONLY
			   
              EXPORT __main
			 		 
; Start of CODE area 
__main
   LDR r0,=0x20000000
   MOVS r0,#0xF1
   LDR r1,=0x20000010
    MOVS r1,#0xC1
   ANDS r0,r1,r0;AND Operation
    LDR r0,=0x20000000
   MOVS r0,#0xF1
   LDR r1,=0x20000010
    MOVS r1,#0xC2
	ORRS r0,r1,r0;OR Operation
	LDR r0,=0x20000000
   MOVS r0,#0xF1
   MVNS  r1,r0
	
	              
stop B stop
   END
  