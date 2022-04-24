# Procedure-Oriented Programming

* ## Homework Assignment #1
The purpose of this homework assignment is to get you acquainted with the GNU make and the modular design
of a program in a procedure-oriented programming language, C.  
The requirement for this assignment is simple and is given as follows:
  * First, you are required to write the following four modules:
    1. a “list” module that implements a doubly linked list,
    2. a “stack” module that builds on the list module,
    3. a “queue” module that builds on the list module, and
    4. a “mm” module that acts as the memory manager by wrapping up the functions malloc, calloc,
    realloc, and free as defined in the standard library. One way to wrap up these functions is to
    add a prefix to the name of these functions so that malloc is named mymalloc, calloc is named
    mycalloc, and so on.  
    Taking into account the interface and implementation, you are supposed to have at least the following eight
    files: list.h, list.c, stack.h, stack.c, queue.h, queue.c, mm.h, and mm.c. Moreover, it
    is up to you to define the interface of each module, and to hide as much as possible the implementation of
    each module.
    
  * Then, you are required to write drivers to test the stack and queue modules that you design and implement.
  You may name them main stack.c and main queue.c and assume that the input is a list of integers
  each of which is on a line by itself, and so is the output.
  
  * Finally, you are required to write a Makefile—which contains at least three targets: all, dep, and clean—to
  manage the project.  

As far as this homework assignment is concerned, you may assume that all you need is a stack of type integer
or a queue of type integer. However, you are encouraged to prepare for the changes that may require that several
stacks or queues of different types be needed at the same time.

* ## Homework Assignment #2

The purpose of this homework assignment is again to get you acquainted with the GNU make and the modular
design of a large program in a procedure-oriented programming language, C.

The requirement of this assignment is as follows:

 * First, you are required to implement a whole bunch of modules each of which consists of two files: one for
 the interface (i.e., the so-called .h file) and one for the implementation (i.e., the so-called .c file). The
 details are as follows:
  1. First, you are required to implement a doubly linked list of char, short, int, long, float, and
  double and a doubly linked list of pointer to these types.
  2. Next, you are required to build a “stack” module on each doubly linked list that you implement in
  step 1.
  3. Then, you are required to build a “queue” module on each doubly linked list that you implement in
  step 1.
  4. Finally, you are required to use2
  the “mm” module, which you implemented for the first homework
  assignment, for memory management. Repeated, the “mm” module acts as the memory manager
  by wrapping up the functions malloc, calloc, realloc, and free as defined in the standard
  library. One way to wrap up these functions is to add a prefix to the name of these functions so that
  malloc is named mymalloc, calloc is named mycalloc, and so on. Also, if you have not
  done so yet in the first homework assignment, this time you may want to use mymalloc instead of
  malloc, mycalloc instead of calloc, and so forth.  
 
 Taking into account the interface and implementation, you are supposed to have at least the following files:  
    – list <type>.h,  
    – list <type>.c,  
    – stack <type>.h,  
    – stack <type>.c,  
    – queue <type>.h,  
    – queue <type>.c,  
    – list <ptr to type>.h,  
    – list <ptr to type>.c,  
    – stack <ptr to type>.h,  
    – stack <ptr to type>.c,  
    – queue <ptr to type>.h,  
    – queue <ptr to type>.c,  
    – mm.h, and  
    – mm.c,  

 where <type> denotes char, short, int, long, float, and double; <ptr to type> denotes
 pointer to char, short, int, long, float, and double. Moreover, it is up to you to define the
 interface of each module and to hide as much as possible the implementation of each module.
* Then, you are required to write drivers to test all the modules that you design and implement in the previous step. You may name them
  * – main stack <type>.c,
  * – main queue <type>.c,
  * – main stack <ptr to type>.c, and
  * – main queue <ptr to type>.c,  

and assume that the input is a list of <type> each of which is on a line by itself, and so is the output.
* Finally, you are required to write a Makefile—which contains at least three targets: all, dep, and clean—to
manage the project.  

Of course, you are encouraged to reuse all the modules and drivers that you wrote for the previous homework
assigmments. You are also encouraged to prepare for the changes that may require you to implement all the stack
and queue modules again but in a different way

* ## Homework Assignment #3
The purpose of this homework assignment is still to get you acquainted with the modular design of a large program
in a procedure-oriented programming language, C  

The requirement of this assignment is simple. You are required to rewrite the second homework assignment.
However, rather than a separate module (a .h and .c file pair) for each type of list, stack, and queue, this
assignment requires that you use “macro” to define a list template, a stack template, and a queue template that can
be used to instantiate list, stack, and queue of types char, short, int, long, float, and double and list,
stack, and queue of types pointer to char, short, int, long, float, and double. To be more precise, the
requirement is as follows:
 * First, you are required to implement all the templates. The details are as follows:
  1. First, you are required to implement a doubly linked list template for types char, short, int,
  long, float, and double and a doubly linked list template for pointer to these types.
  2. Next, you are required to build a “stack” template module on each doubly linked list template that you
  implement in step 1.
  3. Then, you are required to build a “queue” template module on each doubly linked list template that
  you implement in step 1.
  4. Finally, you are required to use2 the “mm” module, which you implemented for the first homework
  assignment, for memory management. Repeated, the “mm” module acts as the memory manager
  by wrapping up the functions malloc, calloc, realloc, and free as defined in the standard
  library. One way to wrap up these functions is to add a prefix to the name of these functions so that
  malloc is named mymalloc, calloc is named mycalloc, and so on. Also, if you have not
  done so yet in the first homework assignment, this time you may want to use mymalloc instead of
  malloc, mycalloc instead of calloc, and so forth.
  Taking into account the interface and implementation, you are supposed to have at most the following files:  
     – list.h,  
     – list.c,  
     – stack.h,  
     – stack.c,  
     – queue.h,  
     – queue.c,  
     – list_ptr.h,  
     – list_ptr.c,  
     – stack_ptr.h,  
     – stack_ptr.c,  
     – queue_ptr.h,  
     – queue_ptr.c,  
     – mm.h, and  
     – mm.c,  
    Moreover, it is up to you to define the interface of each module and to hide as much as possible the implementation
    of each module.
 * Then, you are required to write drivers to test all the modules that you design and implement in the previous step. You may name them
    * main_stack.c, and
    * main_queue.c,  

    and assume that the input is a list of type/value pairs, each separated by a space and on a line by itself,
    and so is the output. Specifically, the types 0–5 denote, respectively, char, short, int, long, float,
    and double; the types 6–11 denote, respectively, pointer to char, short, int, long, float, and
    double.  
 * Finally, you are required to write a Makefile—which contains at least three targets: all, dep, and clean—to
   manage the project.
 
* ## Homework Assignment #4
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
 
* ## Homework Assignment #5
The purpose of this homework assignment is still to get you acquainted with the modular design of a large program
in a procedure-oriented programming language, C.
 
This assignment requires that you build on the memory manager you wrote for the homework assignment 4 a
debugging facility that would be able to trace all the memory allocated and freed. You may want to include in
the debugging facility at least the name of the file, the name of the function, and the line number from which the
malloc function and its relatives are invoked so that they can be easily pinpointed if a problem actually occurs.
You are free to choose the data structures to keep track of all the information that you need. Also, please make
sure that at the end of your problem, all the memory allocated is actually freed.
