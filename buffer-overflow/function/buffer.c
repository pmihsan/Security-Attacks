#include<stdio.h>
#include<stdlib.h>

void neverExecute(){
	printf("Never get Executed\n");
	exit(0);
}

void getInput(){
	char buffer[8];
	gets(buffer);
	puts(buffer);
}

void main(){
	getInput();
}
