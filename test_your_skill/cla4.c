#include<stdio.h>
#include<string.h>

// ./a.out --> gives segmentation fault (core dumped)
// ./a.out 1 2 --> prints hello world.

void main(int argc, char *argv[]) {
	strcpy(argv[0], "hello");
	strcpy(argv[1], "world");
	printf("%s \t %s\n", argv[0], argv[1]);
}