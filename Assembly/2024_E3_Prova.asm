.data

brokespace: .string "\n"
backspace: .string " "
string1: .string " possui "
string2: .string " divisores!"
string3: .string " é primo!"

.text
	li a7, 5
	ecall
	mv t3, a0		# t3 = número inicial
	mv t0, zero		# mult = t0 
	addi t1, zero, 2	# count = t1
FOR:	bge t1, t3, EXIT	# se count >= n, sai do loop
	rem t2, t3, t1
	beqz t2, PRINT
ICRE:	addi t1, t1, 1		# count++;
	j FOR
PRINT:  mv a0, t1
	li a7, 1
	ecall
	la a0, backspace
	li a7, 4
	ecall
	addi t0, t0, 1
	j ICRE
EXIT:	beqz t0, PRINT1
	la a0, brokespace
	li a7, 4
	ecall
	mv a0, t3
	li a7, 1
	ecall
	la a0, string1
	li a7, 4
	ecall
	mv a0, t0
	li a7, 1
	ecall
	la a0, string2
	li a7, 4
	ecall
	j FIM
PRINT1:	la a0, brokespace
	li a7, 4
	ecall
	mv a0, t3
	li a7, 1
	ecall
	la a0, string3
	li a7, 4
	ecall
FIM:	li a7, 10
	ecall
	