#include<stdio.h>

void main() {
    int a = 10, b;
    a>=5?b=100:(b=200); // parenthesis is needed in 2nd stmt
    printf("%d\n", b);
}
