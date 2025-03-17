.data
string: .space 10  

.text
    	la a0, string   
    	li a1, 10       
    	li a7, 8        
    	ecall
    
    	la t0, string   
    	li t1, 0        
    	li t3, 48
    	li t4, 0
    	
FIND:   lb t2, 0(t0)    
    	blt t2, t3, FOUND
    	beq t2, t3, ZERO   
RETURN: addi t1, t1, 1  
    	addi t0, t0, 1  
    	j FIND  

FOUND:  beq t4, t1, ELSE
	addi t1, t1, -1
    	addi t2, zero, -1

LOOP:	beq t1, t2, DONE  
    	la t0, string     
    	add t0, t0, t1    
    	lb a0, 0(t0)     
    	mv a1, a0         
    	li a7, 11
    	ecall
    	addi t1, t1, -1   
    	j LOOP

ELSE: 	mv a0, zero
	li a7, 1
	ecall

DONE:	li a7, 10         
    	ecall             

ZERO:	addi t4, t4, 1
    	j RETURN
