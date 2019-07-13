#include<stdio.h>

void main() {
    int i = 4;
    switch(i) {
        default:
	    printf("This is default\n");
	case 1:
	    printf("This is case 1\n");
	    break;
	case 2:
	    printf("This is case 2\n");
	    break;
	case 3:
	    printf("This is case 3\n");
	    break;
	//case 4:
 	//    printf("This is case 4\n");
    }
}
