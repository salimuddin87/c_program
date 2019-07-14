#include<stdio.h>

void main() {
	int arr[] = {12, 14, 3, 12, 56};
	printf("%u %u %u\n", arr, arr+1, &arr+1);
}