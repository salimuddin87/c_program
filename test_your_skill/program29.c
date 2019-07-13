#include<stdio.h>

//#define PRINT(int) printf("int=%d ", int); // int=2 int=3 int=4
#define PRINT(int) printf(#int"=%d ", int); // x=2 y=3 z=4
/*
#int in macro expansion will be expanded into a quoted string with the 
parameter replaced by the actual argument. So, it will become
printf("x" "=%d", x);
*/

void main() {
	int x=2, y=3, z=4;
	PRINT(x);
	PRINT(y);
	PRINT(z);
}