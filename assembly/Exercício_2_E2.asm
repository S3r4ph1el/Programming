.text
	li a7, 5
	ecall
	
	mv t0, zero
	addi t1, t1, 10
WHILE:	beq a0, zero, DONE
	mul t4, t0, t1
	rem t3, a0, t1
	add t0, t4, t3
	div a0, a0, t1
	j WHILE
DONE:	mv a0, t0
	li a7, 1
	ecall
	li a7, 10
	ecall
	