#include"queue.h"

void push(Node **head, Node **tail, int data)
{
    if((*head) == NULL)
    {
        (*head) = (Node*)add(NULL, 1, data);
        (*tail) = (*head);
        return;
    }

    add((*head), 1, data);
    (*head) = (*head)->next;
    return;

}

int pop(Node **head, Node **tail)
{
    if((*tail) == NULL)
        return -1;

    if((*tail) == (*head))
    {
        int data = (*tail)->data;
        del((*tail));
        (*tail) = (*head) = NULL;
        return data;
    }

    int data = (*tail)->data;
    Node *ptr = *tail;
    (*tail) = (*tail)->next;
    del(ptr);
    return data;



}
