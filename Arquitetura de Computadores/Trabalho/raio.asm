.data
	PI: .float 3.14159
	ZERO: .float 0.0

	msg1_input: .asciiz "Digite o valor do raio do circulo, e ENTER\n"
	msg2_confirminput: .asciiz "Raio digitado e' "
	msg3_output1: .asciiz "Area do circulo com raio "
	msg4_output2: .asciiz " e' "
	msg5_pulalinha: .asciiz "\n"

.text
	l.s $f1, PI
	l.s $f11, ZERO

	li $v0, 4
	la $a0, msg1_input
	syscall

	li $v0, 6
	syscall
	movf.s $f2, $f0

	li $v0, 4
	la $a0, msg2_confirminput
	syscall

	li $v0, 2
	add.s $f12, $f2, $f11
	syscall

	li $v0, 4
	la $a0, msg5_pulalinha
	syscall

	li $v0, 4
	la $a0, msg3_output1
	syscall

	li $v0, 2
	add.s $f12, $f2, $f11
	syscall

	li $v0, 4
	la $a0, msg4_output2
	syscall

	jal AreaCirc

	li $v0, 2
	add.s $f12, $f3, $f11
	syscall

	li $v0, 4
	la $a0, msg5_pulalinha
	syscall

	li $v0, 10
	syscall

AreaCirc:
	mul.s $f3, $f2, $f2
	mul.s $f3, $f3, $f1
	jr $ra
