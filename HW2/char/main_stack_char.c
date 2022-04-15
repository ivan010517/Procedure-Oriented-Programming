#include"stack_char.h"
#include<stdio.h>

int main()
{
    int fs;
    char value;
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
            scanf("%c", &value);
            scanf("%c", &value);
            push(&stack1, value);
        }
        else if(fs==2)
        {
            printf("pop value: %c\n", pop(&stack1));
        }

        printf("function select:\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.quit\n");
        scanf("%d", &fs);
    }
    printf("bye\n");
}
