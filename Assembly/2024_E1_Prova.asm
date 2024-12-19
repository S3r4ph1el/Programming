.text
	li a7, 5
	ecall
	mv s0, a0
	li a7, 5
	ecall
	mv s1, a0
	
	addi t2, zero, 3
	mv t3, zero		# VARIÁVEL SOMA
FOR:	bgt s0, s1, DONE
	rem t4, s0, t2
	beqz t4, SOMA		# if(s0 % 3 == 0)
	addi s0, s0, 1
	j FOR
SOMA:	add t3, t3, s0
	addi s0, s0, 3
	j FOR
DONE: 	mv a0, t3
	li a7, 1
	ecall
	li a7, 10
