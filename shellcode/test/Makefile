compile: exit exec

exec:
	gcc -ggdb -mpreferred-stack-boundary=3 -fno-stack-protector -z execstack -o ExecShellCode ExecShellCode.c

exit:
	gcc -ggdb -mpreferred-stack-boundary=3 -fno-stack-protector -z execstack -o ExitShellCode ExitShellCode.c
