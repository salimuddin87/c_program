#include<stdio.h>

void main() {
	int a = 10, *j;
	void *k;
	j = k = &a;
	j++;
	k++;
	printf("%u %u\n", j, k); // works fine
	//printf("%u %u\n", *j, *k); // error: invalid use of void expr.
}