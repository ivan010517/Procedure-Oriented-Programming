#include"stack.h"
#include<stdio.h>

define_stack(double)

int main()
{
    int fs;
    double value;
    Node(double) *stack1 = NULL;
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
            scanf("%lf", &value);
            push(double, &stack1, value);
        }
        else if(fs==2)
        {
            printf("pop value: %lf\n", pop(double, &stack1));
        }

        printf("function select:\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.quit\n");
        scanf(" %d", &fs);
    }
    printf("bye\n");
}
