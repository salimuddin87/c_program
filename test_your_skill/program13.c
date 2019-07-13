#include<stdio.h>

void main() {
    int i = 1;
    while() { // there must be an expression
        printf("%d\t", i++);
	if(i > 10)
	    break;
    }
}
