#include"list.h"

#define define_stack(type)\
    define_list(type)\
    void push_##type(Node_##type **ptr, type data);\
    \
    type pop_##type(Node_##type **ptr);\
    \
    type top_##type(Node_##type **ptr);\
    \
    void push_##type(Node_##type **ptr, type data)\
    {\
        if(!(*ptr))\
        {\
            *ptr = (Node_##type*)add_##type(NULL, 1, data);\
            return;\
        }\
    \
        add_##type(*ptr, 1, data);\
    \
        *ptr = (*ptr) -> next;\
    \
        return;\
    }\
    \
    type pop_##type(Node_##type **ptr)\
    {\
        if((*ptr)==NULL)\
            return -1;\
        type data = (*ptr)->data;\
        if((*ptr)->prev == NULL)\
        {\
            del_##type((*ptr));\
            *ptr = NULL;\
            return data;\
        }\
        *ptr = (*ptr)->prev;\
        del_##type((*ptr)->next);\
        return data;\
    }\
    \
    type top_##type(Node_##type **ptr)\
    {\
        return (*ptr)->data;\
    }

#define push(type, a, b)\
    push_##type(a, b)

#define pop(type, a)\
    pop_##type(a)

#define Node(type)\
    Node_##type
