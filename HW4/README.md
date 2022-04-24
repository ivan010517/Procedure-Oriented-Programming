# Homework Assignment #4
 The purpose of this homework assignment is still to get you acquainted with the modular design of a large program
 in a procedure-oriented programming language, C
 
 This assignment requires that you write your own memory manager. In other words, instead of wrappers as shown
 below
 ```
 1 #include <stdlib.h>
 2 #include "mm.h"
 3
 4 void *mymalloc(size_t size)
 5 {
 6 return malloc(size);
 7 }
 8
 9 void myfree(void *ptr)
 10 {
 11 free(ptr);
 12 }
 13
 14 void *myrealloc(void *ptr, size_t size)
 15 {
 16 return realloc(ptr, size);
 17 }
 18
 19 void *mycalloc(size_t nmemb, size_t size)
 20 {
 21 return calloc(nmemb, size);
 22 }
 ```
 you are writing your own memory management functions, as follows:
 ```
 1 #include "mm.h"
 2
 3 void *mymalloc(size_t size)
 4 {
 5 // your own code
 6 }
 7
 8 void myfree(void *ptr)
 9 {
 10 // your own code
 11 }
 12
 13 void *myrealloc(void *ptr, size_t size)
 14 {
 15 // your own code
 16 }
 17
 18 void *mycalloc(size_t nmemb, size_t size)
 19 {
 20 // your own code
 21 }
 ```
