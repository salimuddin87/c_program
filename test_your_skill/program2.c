#include<stdio.h>

int main() {
    extern int i;
    i = 20;
    printf("%ld\n", sizeof(i));
    return 0;
}
