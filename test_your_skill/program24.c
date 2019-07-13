#include<stdio.h>

int f(int a) {
	//a>20 ? return (10) : return (20); // error: expected expression before ‘return’
	return (a>20 ? 10 : 20);
}

void main() {
	int b;
	b = f(20);
	printf("%d\n", b);
}