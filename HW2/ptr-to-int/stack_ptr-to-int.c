#include"stack_ptr-to-int.h"

void push(Node **ptr, int *data)
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

int* pop(Node **ptr)
{
    if((*ptr)==NULL)
        return 0;
    int *data = (*ptr)->data;
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

int* top(Node **ptr)
{
    return (*ptr)->data;
}
