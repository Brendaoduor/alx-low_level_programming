section .text
	global _start
_start:
	mov edx, len
	mov ecx, msg
	mov ebx, 1
	mov eax, 4 ;system call
	int 0x80
	mov eax, 1 ;system exit
	int 0x80
section .data
	msg db "Hello, Holberton", 10
	len equ $ -msg