#include <stdio.h>

void main (int argc, char *argv[]) {

	char *s = "secret\n";
	// total strlen(s) = 7 chars + \0 -> so 8 + the program adds 8 byte of memory 
	// so to overwrite or get the pointer you have to add some more(8 chars) to
	// get the location of string s 
	printf(argv[1]);
	// ./format "%p%p%p%p%p%p%p%p%s"
}
