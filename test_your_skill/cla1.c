#include<stdio.h>

void main(int argc, char **argv) {
	argc = argc-(argc-1);
	printf("%d \t %d\n", argc, **argv);
	printf("%s\n", argv[argc-1]);
}