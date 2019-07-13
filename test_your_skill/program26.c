#include<stdio.h>

#define CUBE(x) (x * x * x)

void main() {
	int a, b=3;
	a = CUBE(b++);
	printf("%d \t %d\n", a, b);
}