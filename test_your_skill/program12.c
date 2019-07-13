#include<stdio.h>

void main() {
    int i = 1;
    for( ; ; ) {
        printf("%d \t", i++);
	if(i > 10)
	    break;
    }
}
