#include<stdio.h>

//#define SWAP(a, b, c) (c t; t=a, a=b, b=t;) // compiler error
#define SWAP(a, b, c) c t; t=a, a=b, b=t; // it cannot swap pointers.

void main() {
	int x = 10, y =20;
	SWAP(x, y, int);
	printf("%d\t%d\n", x, y);
}