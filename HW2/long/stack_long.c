#include"stack_long.h"

void push(Node **ptr, long data)
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

long pop(Node **ptr)
{
    if((*ptr)==NULL)
        return -1;
    long data = (*ptr)->data;
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

long top(Node **ptr)
{
    return (*ptr)->data;
}
