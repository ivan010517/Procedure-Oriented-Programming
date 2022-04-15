#include"stack_ptr-to-int.h"
#include<stdio.h>

int main()
{
    int fs;
    int *ptr;
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
            ptr = malloc(sizeof(int));
            printf("push value: ");
            scanf("%d", ptr);
            push(&stack1, ptr);
        }
        else if(fs==2)
        {
            ptr = pop(&stack1);
            if(ptr)
                printf("pop value: %d\n", *ptr);
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
