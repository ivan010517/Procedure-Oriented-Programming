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

* Then, you are required to write drivers to test all the modules that you design and implement in the previous
step. You may name them  
  – main stack <type>.c,  
  – main queue <type>.c,  
  – main stack <ptr to type>.c, and  
  – main queue <ptr to type>.c  
  
  and assume that the input is a list of <type> each of which is on a line by itself, and so is the output.

* Finally, you are required to write a Makefile—which contains at least three targets: all, dep, and clean—to
manage the project.
* ## Homework Assignment #3
 
* ## Homework Assignment #4

* ## Homework Assignment #5
