#include<stdio.h>

void main() {
	char *str[] = {"Frogs", "do", "not", "die"};
	printf("%ld %ld\n", sizeof(str), sizeof(str[0]));
	printf("%s\n", str[0]);
}