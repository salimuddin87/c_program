#include<stdio.h>

#define DEBUG(var, fmt) printf("DEBUG: " #var "=" #fmt"\n", var);

void main() {
	int x = 4;
	float a = 3.14;
	char ch = 'A';

	DEBUG(x, %d);
	DEBUG(a, %f);
	DEBUG(ch, %c);
}