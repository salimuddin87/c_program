#include<stdio.h>

#include"header.h"


int main() {
    int num1, num2;

    printf("Enter two integer numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Addition of two integer = %d\n", add_integer(num1, num2));
    printf("Subtract of two integer = %d\n", sub_integer(num1, num2));
    printf("Multipy of two integer = %d\n", mul_integer(num1, num2));
    printf("Division of two integer = %d\n", div_integer(num1, num2));

    return 0;
}
