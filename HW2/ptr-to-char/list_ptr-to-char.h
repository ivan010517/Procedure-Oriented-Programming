#include"mm.h"
#define TYPE char

struct node
{
    TYPE* data;
    struct node *next;
    struct node *prev;
};

typedef struct node Node;

void *add(Node *ptr, int NoP , TYPE* data);
//NoP next:1, prev:0

int del(Node *ptr);
