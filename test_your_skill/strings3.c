#include<stdio.h>

void main() {
	char ch = 'A';
	printf("%ld %ld\n", sizeof(ch), sizeof('A'));
	printf("%ld %ld %ld\n", sizeof('3'), sizeof("3"), sizeof(3));
}