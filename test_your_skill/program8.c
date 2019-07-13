#include<stdio.h>

void main(){
    struct emp {
        char *name;
	int age;
	float salary;
    };
    struct emp e = {"salim"}; // auto structure is partially initialiazed 
    // so, remain variable will be zero.
    printf("%d %f\n", e.age, e.salary);
}
