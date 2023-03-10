rop:
	gcc -ggdb -z execstack -fno-stack-protector -mpreferred-stack-boundary=3 -o rop rop.c

rop32:
	gcc -ggdb -m32 -z execstack -fno-stack-protector -mpreferred-stack-boundary=3 -o rop_32 rop.c

vuln:
	gcc -ggdb -z execstack -fno-stack-protector -mpreferred-stack-boundary=3 -o vuln vuln.c

vuln32:
	gcc -ggdb -m32 -z execstack -fno-stack-protector -mpreferred-stack-boundary=3 -o vuln_32 vuln.c
