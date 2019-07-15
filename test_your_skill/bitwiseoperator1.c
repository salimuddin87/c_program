#include<stdio.h>

void main() {
	unsigned char i = 0x80, j;
	j = i<<1;
	printf("%d \t %d\n", i<<1, j);
}