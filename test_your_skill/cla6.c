#include<stdio.h>

void main(int argc, char *argv[], char *env[]) {
	for(int i=0; i<argc; i++)
		printf("%s\n", env[i]);
}