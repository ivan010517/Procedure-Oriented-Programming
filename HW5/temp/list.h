#include"mm.h"

#define define_list(type)\
    \
    struct node_##type\
    {\
        type data;\
        struct node_##type *next;\
        struct node_##type *prev;\
    };\
    \
    typedef struct node_##type Node_##type;\
    \
    void *add_##type(Node_##type *ptr, int NoP, type data);\
    \
    int del_##type(Node_##type *ptr);\
    \
    void *add_##type(Node_##type *ptr, int NoP, type data)\
    {\
        Node_##type *new_node = (Node_##type*)mymalloc(sizeof(Node_##type));\
        new_node->data = data;\
        new_node->next = NULL;\
        new_node->prev = NULL;\
\
        if(!ptr)\
            return new_node;\
\
        if(NoP)\
        {\
            new_node->next = ptr->next;\
            if(ptr->next!=NULL)\
                ptr->next->prev = new_node;\
            ptr->next = new_node;\
            new_node->prev = ptr;\
        }\
        else\
        {\
            new_node->prev = ptr->prev;\
            if(ptr->prev!=NULL)\
                ptr->prev->next = new_node;\
            ptr->prev = new_node;\
            new_node->next = ptr;\
        }\
        return NULL;\
    }\
\
    int del_##type(Node_##type *ptr)\
    {\
        if(!ptr)\
            return 1;\
\
        if(ptr->prev != NULL)\
            ptr->prev->next = ptr->next;\
        if(ptr->next != NULL)\
            ptr->next->prev = ptr->prev;\
        free(ptr);\
\
        return 0;\
    }
