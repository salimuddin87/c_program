#include<stdio.h>

void main() {
	char a[] = "salim kabeer";
	char *b = "salim kabeer";

	printf("%ld %ld\n", sizeof(a), sizeof(b));
	printf("%ld %ld\n", sizeof(*a), sizeof(*b));
}