#include"mm.h"

struct node
{
    short data;
    struct node *next;
    struct node *prev;
};

typedef struct node Node;

void *add(Node *ptr, int NoP , short data);
//NoP next:1, prev:0

int del(Node *ptr);
