#include <stdint.h>
#include <sys/mman.h>

int main() {
  unsigned char buf[] = "\xbb\x14\x00\x00\x00\xb8\x01\x00\x00\x00\xcd\x80";

  mprotect((void *)((uintptr_t)buf & ~4095),
                   ((uintptr_t)buf &  4095) + sizeof(buf),
            PROT_READ|PROT_WRITE|PROT_EXEC);
  
  (*(void (*)()) buf)();
  
  return 0;
}
