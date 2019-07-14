#include<stdio.h>

// ./a.out 1 2 3

int main(int argc, char *argv[]) {
	int i, j=0;
	for(i=0; i<argc; i++) {
		// while converting atoi to file, it returns zero.
		// and remaining numbers will be added to zero.
		j = j + atoi(argv[i]);
	}

	printf("%d\n", j);
}