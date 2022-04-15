#include"list_short.h"

void *add(Node *ptr, int NoP, short data)
{
    struct node *new_node = (Node*)mymalloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;

    if(!ptr)
        return new_node;

    if(NoP)//add to next
    {
        new_node->next = ptr->next;
        if(ptr->next!=NULL)
            ptr->next->prev = new_node;
        ptr->next = new_node;
        new_node->prev = ptr;
    }
    else//add to prev
    {
        new_node->prev = ptr->prev;
        if(ptr->prev!=NULL)
            ptr->prev->next = new_node;
        ptr->prev = new_node;
        new_node->next = ptr;
    }
    return NULL;
}

int del(Node *ptr)
{
    if(!ptr)
        return 1;

    if(ptr->prev != NULL)
        ptr->prev->next = ptr->next;
    if(ptr->next != NULL)
        ptr->next->prev = ptr->prev;
    free(ptr);

    return 0;
}
