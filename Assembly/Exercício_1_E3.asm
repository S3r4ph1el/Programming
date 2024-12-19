.text
	li a7, 5
	ecall
	mv s0, a0	# variável n
	li a7, 5
	ecall
	mv s1, a0	# variável m
	
WHILE:	beq s1, zero, DONE
	add t0, zero, s1
	rem s1, s0, s1
	add s0, zero, t0
	j WHILE

DONE:	mv a0, s0
	li a7, 1
	ecall
	li a7, 10
	ecall