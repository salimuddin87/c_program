#include<stdio.h>

void main() {
	// Primary data types size
	printf("void size = %ld\n", sizeof(void));
	printf("char size = %ld\n", sizeof(char));
	printf("int size = %ld\n", sizeof(int));
	printf("float size = %ld\n", sizeof(float));
	
	// add some flavours
	printf("double = %ld\n", sizeof(double));
	printf("long double = %ld\n", sizeof(long double));

	printf("short int = %ld\n", sizeof(short int));
	printf("long int = %ld\n", sizeof(long int));
	
}