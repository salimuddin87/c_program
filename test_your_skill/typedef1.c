typedef struct node {
	int data;
	struct node *link;
}*NODEPTR;

		OR

struct node {
	int data;
	struct node *link;
};
typedef struct node *NODEPTR;

		OR

typedef struct node *NODEPTR;
stuct node {
	int data;
	NODEPTR next;
};