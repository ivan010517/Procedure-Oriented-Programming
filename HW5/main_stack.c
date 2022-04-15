#include"stack.h"
#include<string.h>
#ifndef __STDIO_H
#include<stdio.h>
#endif

int main()
{
    int fs;
    char char_val;
    short short_val;
    int int_val;
    long long_val;
    float float_val;
    double double_val;
    char type[10];
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
            printf("push data type and value: ");
            scanf(" %s", type);
            if(type[0]=='c')
            {
                scanf("%c", &char_val);
                scanf("%c", &char_val);
                push(char, &stack1, char_val);
            }
            else if(type[0]=='s')
            {
                scanf("%hd", &short_val);
                push(short, &stack1, short_val);
            }
            else if(type[0]=='i')
            {
                scanf(" %d", &int_val);
                push(int, &stack1, int_val);
            }
            else if(type[0]=='l')
            {
                scanf("%ld", &long_val);
                push(long, &stack1, long_val);
            }
            else if(type[0]=='f')
            {
                scanf("%f", &float_val);
                push(float, &stack1, float_val);
            }
            else if(type[0]=='d')
            {
                scanf("%lf", &double_val);
                push(double, &stack1, double_val);
            }
            else
                printf("type error!\n");
        }
        else if(fs==2)
        {
            int temp = top(&stack1);
            //printf("%d\n", temp);
            if(temp==-1)
                printf("empty\n");
            else if(top(&stack1)==type_char)
                printf("pop value: %c\n", pop_char(&stack1));
            else if(top(&stack1)==type_short)
                printf("pop value: %hd\n", pop_short(&stack1));
            else if(top(&stack1)==type_int)
                printf("pop value: %d\n", pop_int(&stack1));
            else if(top(&stack1)==type_long)
                printf("pop value: %ld\n", pop_long(&stack1));
            else if(top(&stack1)==type_float)
                printf("pop value: %f\n", pop_float(&stack1));
            else if(top(&stack1)==type_double)
                printf("pop value: %lf\n", pop_double(&stack1));
        }

        printf("function select:\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.quit\n");
        scanf(" %d", &fs);
    }
    printf("bye\n");
}
