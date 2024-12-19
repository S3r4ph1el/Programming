.data

.word 0xdeadbeef 	# armazena a partir da memória 0x10010000
.word 0xf0caf0fa	# memória 0x10010000 + 4

.text
	jal ra, JUMP
	sw s0, 4(t0)
	addi a7,zero,10
	ecall
JUMP:	lui t0,0x10010
	lw s0,0(t0)
	mul s0,s0,s0
	andi s0,s0,1023
	blt t0,s0, JUMP
	jalr zero, ra, 0