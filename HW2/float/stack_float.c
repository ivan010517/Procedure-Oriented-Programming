#include"stack_float.h"

void push(Node **ptr, float data)
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

float pop(Node **ptr)
{
    if((*ptr)==NULL)
        return -1;
    float data = (*ptr)->data;
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

float top(Node **ptr)
{
    return (*ptr)->data;
}
