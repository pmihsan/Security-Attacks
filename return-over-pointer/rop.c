#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void rop(char *s){
	char buffer[128];
	strcpy(buffer, s);
}

int main(int argc, char **argv){
	if(argc == 1){
		printf("No Arguments found\n");
		exit(0);
	}
	rop(argv[1]);
	printf("Arguments: %s\nEXIT\n",argv[1]);
}
