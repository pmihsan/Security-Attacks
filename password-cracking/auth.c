#include<stdio.h>
#include<string.h>

char *usr = "pmihsan";
char *pass = "password";

int checkpw(char *up){
	if(strcmp(up, pass) == 0) return 1;
	return 0;
}

int validate(char *un, char *up){
	if(strcmp(un, usr) == 0) return checkpw(up);
	return 0;
}

void main(){
	char un[10], up[10];
	printf("Enter username: ");
	scanf("%s", un);
	printf("Enter pass: ");
	scanf("%s", up);

	if(validate(un, up)){
		printf("Authenticated\n");
	}
	else{
		printf("Authentication Failed!\n");
	}
}
