#include"stack_float.h"
#include<stdio.h>

int main()
{
    int fs;
    float value;
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
            printf("push value: ");
            scanf("%f", &value);
            push(&stack1, value);
        }
        else if(fs==2)
        {
            printf("pop value: %f\n", pop(&stack1));
        }

        printf("function select:\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.quit\n");
        scanf(" %d", &fs);
    }
    printf("bye\n");
}
