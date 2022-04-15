#include"list.h"

#define define_queue(type)\
    define_list(type)\
    void push_##type(Node_##type **head, Node_##type **tail, type data);\
\
    type pop_##type(Node_##type **head, Node_##type **tail);\
\
    void push_##type(Node_##type **head, Node_##type **tail, type data)\
    {\
        if((*head) == NULL)\
        {\
            (*head) = (Node_##type*)add_##type(NULL, 1, data);\
            (*tail) = (*head);\
            return;\
        }\
\
        add_##type((*head), 1, data);\
        (*head) = (*head)->next;\
\
    }\
\
    type pop_##type(Node_##type **head, Node_##type **tail)\
    {\
        if((*tail) == NULL)\
            return -1;\
\
        if((*tail) == (*head))\
        {\
            type data = (*tail)->data;\
            del_##type((*tail));\
            (*tail) = (*head) = NULL;\
            return data;\
        }\
\
        type data = (*tail)->data;\
        Node_##type *ptr = *tail;\
        (*tail) = (*tail)->next;\
        del_##type(ptr);\
        return data;\
\
    }

#define push(type, a, b, c)\
    push_##type(a, b, c)

#define pop(type, a, b)\
    pop_##type(a, b)

#define Node(type)\
    Node_##type
