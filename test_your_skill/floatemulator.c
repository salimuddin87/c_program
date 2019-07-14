#include<stdio.h>

void LinkFloat(void) {
	float a=0, *b=&a; // cause emulator to be linked
	a=*b; // suppress warning - var not used
}

void main() {
	struct emp {
		long int ssn;
		char name[20];
		float salary;
	};

	struct emp e[3];
	struct emp e2 = {12345, "salim", 7.6};
	for(int i=0; i<3; i++) {
		scanf("%ld %s %f", &e[i].ssn, e[i].name, &e[i].salary);
	}
	printf("size of struct is : %ld\n", sizeof(e2));
}