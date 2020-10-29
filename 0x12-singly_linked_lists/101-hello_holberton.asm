section .data
msg db "Hello Holberton", 10
msglen eq $ - msg

section .text
global _start
_start:

	mov rax, 1			;use the write syscall
  mov rdi, 1
	mov rsi, msg
	mov rdx, msglen
	syscall

	mov rax, 60
	mov rdi, 0
	syscall

