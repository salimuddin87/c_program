#include<stdio.h>

// ./a.out friday tuesday sunday

void main(int argc, char *argv[]) {
	printf("argc = %d\n", argc);
	while(--argc > 0) {
		printf("%s\t", *++argv);
	}

	// 2nd question
	//printf("%c\n", (*++argv)[0]);

	// 3rd question
	//printf("%c\n", **++argv);

	// 4th question
	//printf("%c\n", *++argv[1]);
}