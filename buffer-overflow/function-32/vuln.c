#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define pass "password"

checkpw(){
	char pw[100];
	printf("Enter your password: ");
	gets(pw);
	if(strcmp(pw, pass) == 0) granted();
	else printf("Access Denied\n");
	return 0;
}

granted(){
	printf("Access Granted\n");
	return 0;
}

int main(int argc, char *argv[]){
	setuid(1000);
	if(argc > 1){
		printf("Don't use args\n");
		exit(1);
	}
	checkpw();
	return 0;
}
