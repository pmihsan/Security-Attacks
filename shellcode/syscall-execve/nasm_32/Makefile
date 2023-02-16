asm:
	nasm -f elf32 ExecveShellCode.nasm -o ExecveShellCode.o
	ld -m elf_i386 -o ExecveShellCode ExecveShellCode.o

dump:
	objdump -d ExecveShellCode
