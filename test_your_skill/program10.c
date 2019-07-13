#include<stdio.h>

void main() {
    union a {
        int i;
	char ch[2];
    };

    union a z = 512;
    printf("%d %d", ch[0], ch[1]);
}
