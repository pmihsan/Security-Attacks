#include<stdio.h>
#include<string.h>

void main(){
	char buff[5];
	int f = 0;
	gets(buff);

	if(strcmp(buff, "szszs") == 0) {
		f = 1;
		printf("VALID\n");
	}else{
		printf("INVALID\n");
	}
	
	if(f){
		printf("Buffer Overflow %d\n",f);
	}
	else{
		printf("No Buffer Overflow %d\n",f);
	}
	
}
