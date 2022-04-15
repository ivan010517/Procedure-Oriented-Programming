#include"mm.h"

struct node
{
    char data;
    struct node *next;
    struct node *prev;
};

typedef struct node Node;

void *add(Node *ptr, int NoP , char data);
//NoP next:1, prev:0

int del(Node *ptr);
