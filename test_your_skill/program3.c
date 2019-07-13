#include<stdio.h>

void main() {
    extern int a; // declaration
    printf("%d \n", a);
}

int a = 20; //definition
