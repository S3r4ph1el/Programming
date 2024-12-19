.text
	li a0, 0xFFFFEF9D
PROC:	blt a0, zero, FIM
	lui t0, 28723
	sra a0, t0, a0
	j FIM2
FIM:	sub a0, zero, a0
FIM2:	ret
	
