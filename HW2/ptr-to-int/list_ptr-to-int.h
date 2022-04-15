#include"mm.h"

struct node
{
    int* data;
    struct node *next;
    struct node *prev;
};

typedef struct node Node;

void *add(Node *ptr, int NoP , int *data);
//NoP next:1, prev:0

int del(Node *ptr);
