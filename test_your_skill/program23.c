#include<stdio.h>

void main() {
    int a = 10;
    void f();
    a = f();
    printf("%d\n", a);
}

void f() {
    printf("Hi");
}
