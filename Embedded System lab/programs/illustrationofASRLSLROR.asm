	PRESERVE8 ; Indicate the code here preserve  
; 8 byte stack alignment  
 THUMB     ; Indicate THUMB code is used       
                 AREA    |.text|, CODE, READONLY
			   
              EXPORT __main
			 		 
; Start of CODE area 
__main
	
	LDR r2,=0x00000080;
	ASRS r0,r2,#04;00000001000
	LDR r2,=0x80000000;
	ASRS r0,r2,#04;0xF8000000
   LDR r2,=0xFFFFFFF8
   ASRS r0,r2,#05;0xFFFFFFFF
   
	LDR r2,=0x00000080;
	LSLS r0,r2,#04;0x00000800
	LDR r2,=0x80000000;0x00000000
	LSLS r0,r2,#04;0x
   LDR r2,=0xFFFFFFF8
   LSLS r0,r2,#05;0xFFFFFF00
   
   LDR r2,=0x00000080;
   LDR r1,=0x04
   RORS r0,r0,r1;0x0FFFFFF0
   LDR r2,=0x80000000;
   LDR r1,=0x04
   RORS r0,r0,r1;0x00FFFFFF
   
	
	
	              
stop B stop
   END
  