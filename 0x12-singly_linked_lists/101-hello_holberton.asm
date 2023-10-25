	section .data
	hello db "Hello, Holberton",0 ; Null-terminated string for printf
	format db "%s",0	      ; Format specifier for printf

	section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, format	; Load format string
	mov rsi, hello	; Load the address of hello string
	call printf	; Call printf
	add rsp, 8	; Cleanup the stack

	mov rax, 60		; syscall: exit
	xor rdi, rdi	; status: 0
	syscall
