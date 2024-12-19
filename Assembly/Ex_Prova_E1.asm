.text

MAIN:
	li a7, 5			        # Serviço Read Int
	ecall				        # chamada do sistema, valor lido em a0
  	jal SOMA                    		# chama o procedimento SOMA
	li a7, 1			        # serviço de print int
	ecall				        # chamada do sistema
	li a7, 10			        # Serviço de Exit
	ecall				        # chamada do sistema
	
# coloque aqui o seu procedimento
SOMA:
    	slli a0, a0, 1
    	addi t0, t0, 1
LOOP:	bge t0, a0, RETURN
	add t1, t1, t0				# soma += i;
	addi t0, t0, 2
	j LOOP
RETURN:	mv a0, t1
	ret