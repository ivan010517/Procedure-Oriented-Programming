#include"stack_double.h"

void push(Node **ptr, double data)
{
    if(!(*ptr))
    {
        *ptr = (Node*)add(NULL, 1, data);
        return;
    }

    add(*ptr, 1, data);

    *ptr = (*ptr) -> next;

    return;
}

double pop(Node **ptr)
{
    if((*ptr)==NULL)
        return -1;
    double data = (*ptr)->data;
    if((*ptr)->prev == NULL)
    {
        del((*ptr));
        *ptr = NULL;
        return data;
    }
    *ptr = (*ptr)->prev;
    del((*ptr)->next);
    return data;
}

double top(Node **ptr)
{
    return (*ptr)->data;
}
