#include<stdio.h>

// cla5 one two three

void main(int argc, char *argv[]) {
	printf("%s \n", *++argv);
	printf("%c\n", ++**++argv);
}