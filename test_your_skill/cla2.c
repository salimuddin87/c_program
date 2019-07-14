#include<stdio.h>

void main(int argc, char *argv[]){
	int i;
	//i = argv[1] + argv[2] + argv[3];
	i = *argv[1] + *argv[2] + *argv[3];
	printf("%d\n", i);
}