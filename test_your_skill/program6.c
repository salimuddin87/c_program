#include<stdio.h>

void fun (struct emp ee);

struct emp {
    char name[20];
    int age;
};

void main() {
    struct emp e = {"salim", "32"};
    fun(e);
}

void fun (struct emp ee) {
    printf("%s %d\n", ee.name, ee.age);
}
