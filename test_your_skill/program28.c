#include<stdio.h>

#define MAX(a, b) (a>b ? a : b)

void main() {
	int x = MAX(3+2, 2+7);
	printf("%d\n", x);
}