#include"mm.h"
#define type_char 1
#define type_short 2
#define type_int 3
#define type_long 4
#define type_float 5
#define type_double 6

#define add(type, a, b, c)\
    add_##type(a, b, c)

struct node
{
    void *data;
    int type;
    struct node *next;
    struct node *prev;
};

typedef struct node Node;

void *add_char(Node *ptr, int NoP, char data);
void *add_short(Node *ptr, int NoP, short data);
void *add_int(Node *ptr, int NoP, int data);
void *add_long(Node *ptr, int NoP, long data);
void *add_float(Node *ptr, int NoP, float data);
void *add_double(Node *ptr, int NoP, double data);

int del(Node *ptr);

