#include<stdio.h>

void main() {
    int i = 3;
    i = i++; // when a single expression causes the same 
    // object to be modified then behaviour is undefined.
    printf("%d\n", i);
}
