#include<stdio.h>

#include"header.h"


int main() {
    int num1, num2;
    int choice;

    printf("Enter two integer numbers \n");
    scanf("%d %d", &num1, &num2);
    
    while(1) {
        printf("press any to exit program \n");
        printf("press 1 for addition \n");
        printf("press 2 for subtraction \n");
        printf("press 3 for multiply \n");
        printf("press 4 for division \n");
        printf("press 5 for static example\n");
        printf("press 6 for extern example\n");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Addition of two integer = %d\n", add_integer(num1, num2));
                break;
            case 2:
                printf("Subtract of two integer = %d\n", sub_integer(num1, num2));
                break;
            case 3:
                printf("Multipy of two integer = %d\n", mul_integer(num1, num2));
                break;
            case 4:
                printf("Division of two integer = %d\n", div_integer(num1, num2));
                break;
            case 5:
                printf("static variable example\n");
                for(int i=0; i<5; i++) {
                    static_example();
                }
                break;
            case 6:
                printf("Area of circle = %lf\n", area_of_circle(num1 * 1.0));
                break;
            default:
                printf("pressed choice %d to exit program\n", choice);
                return 0;
        }
        
    }
    return 0;
}
