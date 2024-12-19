.text
addi a0, zero, 12
PROC: blt a0,zero,FIM
lui t0,28691
srl a0,t0,a0
j FIM2
FIM: sub a0,zero,a0
FIM2: ret