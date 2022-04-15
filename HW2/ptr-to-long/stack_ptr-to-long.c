#include"stack_ptr-to-long.h"

void push(Node **ptr, TYPE* data)
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

TYPE* pop(Node **ptr)
{
    if((*ptr)==NULL)
        return 0;
    TYPE* data = (*ptr)->data;
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

TYPE* top(Node **ptr)
{
    return (*ptr)->data;
}
