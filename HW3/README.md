
# Homework Assignment #3
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
