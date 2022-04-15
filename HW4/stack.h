#include"list.h"

#define push(type, a, b)\
    push_##type(a, b)

#define pop(a)\
    (top(a)==type_char)?\
    pop_char(a):(\
    (top(a)==type_short)?\
    pop_short(a):(\
    (top(a)==type_int)?\
    pop_int(a):(\
    (top(a)==type_long)?\
    pop_long(a):(\
    (top(a)==type_float)?\
    pop_float(a):(\
    pop_double(a))))))

void push_char(Node **ptr, char data);
void push_short(Node **ptr, short data);
void push_int(Node **ptr, int data);
void push_long(Node **ptr, long data);
void push_float(Node **ptr, float data);
void push_double(Node **ptr, double data);

char pop_char(Node **ptr);
short pop_short(Node **ptr);
int pop_int(Node **ptr);
long pop_long(Node **ptr);
float pop_float(Node **ptr);
double pop_double(Node **ptr);

int top(Node **ptr);
