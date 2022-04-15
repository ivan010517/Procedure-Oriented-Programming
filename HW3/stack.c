#include"stack.h"
#include<stdio.h>

void push_char(Node **ptr, char data)
{
    if(!(*ptr))
    {
        *ptr = (Node*)add(char,  NULL, 1, data);
        return;
    }

    add(char, *ptr, 1, data);
    //printf("%c\n", *(char*)((*ptr)->data));
    *ptr = (*ptr) -> next;
}

void push_short(Node **ptr, short data)
{
    if(!(*ptr))
    {
        *ptr = (Node*)add(short,  NULL, 1, data);
        return;
    }

    add(short, *ptr, 1, data);

    *ptr = (*ptr) -> next;
}

void push_int(Node **ptr, int data)
{
    if(!(*ptr))
    {
        *ptr = (Node*)add(int,  NULL, 1, data);
        return;
    }

    add(int, *ptr, 1, data);

    *ptr = (*ptr) -> next;
}


void push_long(Node **ptr, long data)
{
    if(!(*ptr))
    {
        *ptr = (Node*)add(long,  NULL, 1, data);
        return;
    }

    add(long, *ptr, 1, data);

    *ptr = (*ptr) -> next;
}

void push_float(Node **ptr, float data)
{
    if(!(*ptr))
    {
        *ptr = (Node*)add(float,  NULL, 1, data);
        return;
    }

    add(float, *ptr, 1, data);

    *ptr = (*ptr) -> next;
}

void push_double(Node **ptr, double data)
{
    if(!(*ptr))
    {
        *ptr = (Node*)add(double,  NULL, 1, data);
        return;
    }

    add(double, *ptr, 1, data);

    *ptr = (*ptr) -> next;
}

char pop_char(Node **ptr)
{
    if((*ptr)==NULL)
        return -1;
    char data = *(char*)((*ptr)->data);
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

short pop_short(Node **ptr)
{
    if((*ptr)==NULL)
        return -1;
    short data = *(short*)((*ptr)->data);
    if((*ptr)->prev == NULL)
    {
        del((*ptr));
        *ptr = NULL;
        return data;
    }
    *ptr = (*ptr)->prev;
    del((*ptr)->next);
    //printf("%c\n", data);
    return data;
}

int pop_int(Node **ptr)
{
    if((*ptr)==NULL)
        return -1;
    int data = *(int*)((*ptr)->data);
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

long pop_long(Node **ptr)
{
    if((*ptr)==NULL)
        return -1;
    long data = *(long*)((*ptr)->data);
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

float pop_float(Node **ptr)
{
    if((*ptr)==NULL)
        return -1;
    float data = *(float*)((*ptr)->data);
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

double pop_double(Node **ptr)
{
    if((*ptr)==NULL)
        return -1;
    double data = *(double*)((*ptr)->data);
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

int top(Node **ptr)
{
    if(!(*ptr))
        return -1;
    return (*ptr)->type;
}
