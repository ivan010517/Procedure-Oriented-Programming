#include"stack_short.h"

void push(Node **ptr, short data)
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

short pop(Node **ptr)
{
    if((*ptr)==NULL)
        return -1;
    short data = (*ptr)->data;
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

short top(Node **ptr)
{
    return (*ptr)->data;
}
