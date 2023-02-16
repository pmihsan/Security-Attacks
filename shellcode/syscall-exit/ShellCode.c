#include<stdio.h>
#include<stdint.h>
#include<sys/mman.h>

char shellcode[] = "\xbb\x14\x00\x00\x00\xb8\x01\x00\x00\x00\xcd\x80";

void main(){
	/*
	int *ret;
	ret = (int *)&ret + 4;
	(*ret) = (int)shellcode;
	*/
	mprotect((void *)((uintptr_t)shellcode & ~4095),
                        ((uintptr_t)shellcode & 4095) + sizeof(shellcode),
                        PROT_READ | PROT_WRITE | PROT_EXEC);

       ( *(void (*)()) shellcode)() ;

	printf("NO SHELL EXIT");
}
