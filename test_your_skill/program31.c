#include<stdio.h>
#include<string.h>

struct emp {
	char name[20];
	int age;
};

void modify(struct emp *);

void main() {
	struct emp e = {"salim", 32};
	modify(&e);
	printf("%s %ld\n", e.name, e.age);
}

void modify(struct emp *p) {
	strupr(p->name);
	p->age = p->age + 2;
}