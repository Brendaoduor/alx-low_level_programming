section .text
extern printf
	global main, _start
main:
_start:
	mov edi, fmt
	mov edx, len
	mov ecx, msg
	mov ebx, 1
	mov eax, 0 ;system call
	call printf
	int 0x80
	mov eax, 1 ;system exit
	int 0x80 ;linux kernel service
section .data
	msg db "Hello, Holberton", 10
	len equ $ -msg
	fmt db "%s", 10, 0
