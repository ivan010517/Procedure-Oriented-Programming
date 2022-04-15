#include"stack_char.h"

void push(Node **ptr, char data)
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

char pop(Node **ptr)
{
    if((*ptr)==NULL)
        return '\0';
    char data = (*ptr)->data;
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

char top(Node **ptr)
{
    return (*ptr)->data;
}
