#include"list.h"

#define push(type, a, b, c)\
    push_##type(a, b, c)

void push_char(Node **head, Node **tail, char data);
void push_short(Node **head, Node **tail, short data);
void push_int(Node **head, Node **tail, int data);
void push_long(Node **head, Node **tail, long data);
void push_float(Node **head, Node **tail, float data);
void push_double(Node **head, Node **tail, double data);

char pop_char(Node **head, Node **tail);
short pop_short(Node **head, Node **tail);
int pop_int(Node **head, Node **tail);
long pop_long(Node **head, Node **tail);
float pop_float(Node **head, Node **tail);
double pop_double(Node **head, Node **tail);

int top(Node **head, Node **tail);
