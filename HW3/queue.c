#include"queue.h"

void push_char(Node **head, Node **tail, char data)
{
    if((*head) == NULL)
    {
        (*head) = (Node*)add(char, NULL, 1, data);
        (*tail) = (*head);
        return;
    }

    add(char, (*head), 1, data);
    (*head) = (*head)->next;
    return;

}

void push_short(Node **head, Node **tail, short data)
{
    if((*head) == NULL)
    {
        (*head) = (Node*)add(short, NULL, 1, data);
        (*tail) = (*head);
        return;
    }

    add(short, (*head), 1, data);
    (*head) = (*head)->next;
    return;

}

void push_int(Node **head, Node **tail, int data)
{
    if((*head) == NULL)
    {
        (*head) = (Node*)add(int, NULL, 1, data);
        (*tail) = (*head);
        return;
    }

    add(int, (*head), 1, data);
    (*head) = (*head)->next;
    return;

}

void push_long(Node **head, Node **tail, long data)
{
    if((*head) == NULL)
    {
        (*head) = (Node*)add(long, NULL, 1, data);
        (*tail) = (*head);
        return;
    }

    add(long, (*head), 1, data);
    (*head) = (*head)->next;
    return;

}

void push_float(Node **head, Node **tail, float data)
{
    if((*head) == NULL)
    {
        (*head) = (Node*)add(float, NULL, 1, data);
        (*tail) = (*head);
        return;
    }

    add(float, (*head), 1, data);
    (*head) = (*head)->next;
    return;

}

void push_double(Node **head, Node **tail, double data)
{
    if((*head) == NULL)
    {
        (*head) = (Node*)add(double, NULL, 1, data);
        (*tail) = (*head);
        return;
    }

    add(double, (*head), 1, data);
    (*head) = (*head)->next;
    return;

}

char pop_char(Node **head, Node **tail)
{
    if((*tail) == NULL)
        return -1;

    if((*tail) == (*head))
    {
        char data = *(char*)(*tail)->data;
        del((*tail));
        (*tail) = (*head) = NULL;
        return data;
    }

    char data = *(char*)(*tail)->data;
    Node *ptr = *tail;
    (*tail) = (*tail)->next;
    del(ptr);
    return data;

}

short pop_short(Node **head, Node **tail)
{
    if((*tail) == NULL)
        return -1;

    if((*tail) == (*head))
    {
        short data = *(short*)(*tail)->data;
        del((*tail));
        (*tail) = (*head) = NULL;
        return data;
    }

    short data = *(short*)(*tail)->data;
    Node *ptr = *tail;
    (*tail) = (*tail)->next;
    del(ptr);
    return data;

}

int pop_int(Node **head, Node **tail)
{
    if((*tail) == NULL)
        return -1;

    if((*tail) == (*head))
    {
        int data = *(int*)(*tail)->data;
        del((*tail));
        (*tail) = (*head) = NULL;
        return data;
    }

    int data = *(int*)(*tail)->data;
    Node *ptr = *tail;
    (*tail) = (*tail)->next;
    del(ptr);
    return data;

}

long pop_long(Node **head, Node **tail)
{
    if((*tail) == NULL)
        return -1;

    if((*tail) == (*head))
    {
        long data = *(long*)(*tail)->data;
        del((*tail));
        (*tail) = (*head) = NULL;
        return data;
    }

    long data = *(long*)(*tail)->data;
    Node *ptr = *tail;
    (*tail) = (*tail)->next;
    del(ptr);
    return data;

}

float pop_float(Node **head, Node **tail)
{
    if((*tail) == NULL)
        return -1;

    if((*tail) == (*head))
    {
        float data = *(float*)(*tail)->data;
        del((*tail));
        (*tail) = (*head) = NULL;
        return data;
    }

    float data = *(float*)(*tail)->data;
    Node *ptr = *tail;
    (*tail) = (*tail)->next;
    del(ptr);
    return data;

}

double pop_double(Node **head, Node **tail)
{
    if((*tail) == NULL)
        return -1;

    if((*tail) == (*head))
    {
        double data = *(double*)(*tail)->data;
        del((*tail));
        (*tail) = (*head) = NULL;
        return data;
    }

    double data = *(double*)(*tail)->data;
    Node *ptr = *tail;
    (*tail) = (*tail)->next;
    del(ptr);
    return data;

}

int top(Node **head, Node **tail)
{
    if(!(*head))
        return -1;
    return (*tail)->type;
}
