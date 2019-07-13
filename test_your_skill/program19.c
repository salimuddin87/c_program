#include<stdio.h>

void main() {
    int i = 4;
    int j = i++ * i++; // undefined behaviour
    int k = i++ && i++; // perfectly fine
    printf("%d \t %d\n", j, k);
}
