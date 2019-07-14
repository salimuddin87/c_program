#include<stdio.h>
#include<string.h>
#include<malloc.h>

struct emp {
	int len;
	char name[1];
};

void main() {
	char newname[] = "salim";
	struct emp *p = (struct emp *) malloc (sizeof(struct emp) - 1 + 
		strlen(newname) + 1);

	p->len = strlen(newname);
	strcpy(p->name, newname);
	printf("%d \t %s\n", p->len, p->name);
	printf("%lu\n", sizeof(struct emp));

	free(p);
}