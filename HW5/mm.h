#ifdef DEBUG
#define mymalloc(n)\
    (printf("malloc\tin file \"%s\",\tfunc \"%s\",\tline:%d\n", __FILE__, __func__, __LINE__), my_malloc(n))
#define myfree(n) \
    (printf("free\tin file \"%s\",\tfunc \"%s\",\tline:%d\n", __FILE__, __func__, __LINE__), my_free(n))
#else
#define mymalloc(n)\
    my_malloc(n)
#define myfree(n) \
    my_free(n)
#endif



#ifndef __MY_MM_H_INCLUDED__
#define __MY_MM_H_INCLUDED__

#include <stddef.h>
#ifndef __STDIO_H
#include<stdio.h>
#endif

void *my_malloc(size_t);
void my_free(void *);
void *myrealloc(void *ptr, size_t );
void *mycalloc(size_t nmemb, size_t );

#endif
