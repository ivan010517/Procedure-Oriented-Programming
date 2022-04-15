#include"mm.h"

void *mymalloc(size_t size)
{
    return malloc(size);
}

void myfree(void *ptr)
{
    free(ptr);
}

void *mycalloc(size_t nmemb, size_t size)
{
    return mycalloc(nmemb, size);
}

