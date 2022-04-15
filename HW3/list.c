#include"list.h"
//char
void *add_char(Node *ptr, int NoP, char data)
{
    Node *new_node = (Node*)mymalloc(sizeof(Node));
    new_node->type = type_char;
    new_node->data = mymalloc(sizeof(char));
    *(char*)(new_node->data) = data;
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

//int
void *add_int(Node *ptr, int NoP, int data)
{
    Node *new_node = (Node*)mymalloc(sizeof(Node));
    new_node->type = type_int;
    new_node->data = mymalloc(sizeof(int));
    *(int*)(new_node->data) = data;
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

//short
void *add_short(Node *ptr, int NoP, short data)
{
    Node *new_node = (Node*)mymalloc(sizeof(Node));
    new_node->type = type_short;
    new_node->data = mymalloc(sizeof(short));
    *(short*)(new_node->data) = data;
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

//long
void *add_long(Node *ptr, int NoP, long data)
{
    Node *new_node = (Node*)mymalloc(sizeof(Node));
    new_node->type = type_long;
    new_node->data = mymalloc(sizeof(long));
    *(long*)(new_node->data) = data;
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

//float
void *add_float(Node *ptr, int NoP, float data)
{
    Node *new_node = (Node*)mymalloc(sizeof(Node));
    new_node->type = type_float;
    new_node->data = mymalloc(sizeof(float));
    *(float*)(new_node->data) = data;
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


void *add_double(Node *ptr, int NoP, double data)
{
    Node *new_node = (Node*)mymalloc(sizeof(Node));
    new_node->type = type_double;
    new_node->data = mymalloc(sizeof(double));
    *(double*)(new_node->data) = data;
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

    free(ptr->data);
    if(ptr->prev != NULL)
        ptr->prev->next = ptr->next;
    if(ptr->next != NULL)
        ptr->next->prev = ptr->prev;
    free(ptr);

    return 0;
}
