#include <stdio.h>
#include <string.h>

char code[] = "\x31\xc0\x89\xc3\xb0\x01\xcd\x80";

int main()
{
    printf("Shellcode length: %d\n", strlen(code));
    int (*ret)() = (int(*)())code;
    ret();
    return 0;
}
