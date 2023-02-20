global _start

section .text

	_start:

		xor rax, rax
		push rax

		mov rdx, rsp
		mov rbx, 0x64692f6e69622f2f
		push rbx	
	
		mov rdi, rsp
		push rax
		push rdi

		mov rsi, rsp
		add rax, 59
		syscall
