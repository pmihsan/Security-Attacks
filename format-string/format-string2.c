#include<stdio.h>

char data[] = "my secret key 1234";

int main(int argc, char **argv){
	printf("Hidden data is at %p\n",&data);
	char buffer[8];
	gets(buffer);
	printf(buffer);
	printf("\n");
}
