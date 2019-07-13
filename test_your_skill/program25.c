#include<stdio.h>

//#define SQR(x) (x * x)
#define SQR(x) ((x) * (x))

void main() {
	int a, b = 3;
	a = SQR(b + 2);
	printf("%d\n", a);
}