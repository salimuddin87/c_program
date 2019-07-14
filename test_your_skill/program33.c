#include<stdio.h>
#include<string.h>

void main() {
	struct emp {
		char *n;
		int age;
	};

	struct emp e1 = {"salim", 32};
	struct emp e2 = e1;
	printf("%s \t %s\n", e1.n, e2.n);
	//strupr(e2.n);
	e2.n = "kabeer";
	printf("%s \t %s\n", e1.n, e2.n);
}