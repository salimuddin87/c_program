#include<stdio.h>

int fun(); // without this prototype, it will give error.

void main() {
    int (*p)() = fun;
    (*p)();
}

int fun() {
    printf("function ptr called me!");
    return 0;
}
