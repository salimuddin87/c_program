#include<stdio.h>

void main() {
    int i = 1;
    switch(i) {
        case 1:
	    printf("This is case 1\n");
	    break;
	case 1*2+3: // variable is not allowed in case
	    printf("This is expression\n");
	    break;
    }
}
