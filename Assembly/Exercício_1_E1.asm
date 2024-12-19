.data
MULT:	.string "Dobro:"
DIV:	.string "Metade:"
QUEB: 	.string "\n"

.text
	li a7, 5
	ecall
	mv t1, a0
	slli t0, t1, 1
	srai t2, t1, 1
	la a0, MULT
	li a7, 4
	ecall
	add a0, zero, t0
	li a7, 1
	ecall
	la a0, QUEB
	li a7, 4
	ecall
	la a0, DIV
	li a7, 4
	ecall
	add a0, zero, t2
	li a7, 1
	ecall
	li a7, 10
	ecall