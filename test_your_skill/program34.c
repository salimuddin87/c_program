#include<stdio.h>

void main() {
	struct a {
		char category : 5;
		char scheme : 4;
	};

	printf("size = %d", sizeof(struct a));
}