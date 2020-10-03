#include"header.h"


int div_integer(int a, int b) {
    if(b != 0)
        return a / b;
    else
        printf("Divide by zero exception!");
}
