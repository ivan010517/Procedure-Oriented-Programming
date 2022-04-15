#include"stack_ptr-to-long.h"
#include<stdio.h>

int main()
{
    int fs;
    TYPE* ptr;
    Node *stack1 = NULL;
    printf("function select:\n");
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.quit\n");
    scanf(" %d", &fs);
    while(fs != 3)
    {
        if(fs==1)
        {
            ptr = malloc(sizeof(TYPE));
            printf("push value: ");
            scanf("%ld", ptr);
            push(&stack1, ptr);
        }
        else if(fs==2)
        {
            ptr = pop(&stack1);
            if(ptr)
                printf("pop value: %ld\n", *ptr);
            else
                printf("stack empty\n");
            free(ptr);
        }

        printf("function select:\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.quit\n");
        scanf(" %d", &fs);
    }
    printf("bye\n");
}
