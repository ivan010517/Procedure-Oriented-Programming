#include"queue_ptr-to-float.h"

void push(Node **head, Node **tail, TYPE* data)
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

TYPE* pop(Node **head, Node **tail)
{
    if((*tail) == NULL)
        return 0;

    if((*tail) == (*head))
    {
        TYPE* data = (*tail)->data;
        del((*tail));
        (*tail) = (*head) = NULL;
        return data;
    }

    TYPE* data = (*tail)->data;
    Node *ptr = *tail;
    (*tail) = (*tail)->next;
    del(ptr);
    return data;



}
