#include"queue.h"
#include<stdio.h>
#include<string.h>

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
    Node *head = NULL, *tail;
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
                push(char, &head, &tail, char_val);
            }
            else if(type[0]=='s')
            {
                scanf("%hd", &short_val);
                push(short, &head, &tail, short_val);
            }
            else if(type[0]=='i')
            {
                scanf(" %d", &int_val);
                push(int, &head, &tail, int_val);
            }
            else if(type[0]=='l')
            {
                scanf("%ld", &long_val);
                push(long, &head, &tail, long_val);
            }
            else if(type[0]=='f')
            {
                scanf("%f", &float_val);
                push(float, &head, &tail, float_val);
            }
            else if(type[0]=='d')
            {
                scanf("%lf", &double_val);
                push(double, &head, &tail, double_val);
            }
            else
                printf("type error!\n");
        }
        else if(fs==2)
        {
            int temp = top(&head, &tail);
            //printf("%d\n", temp);
            if(temp==-1)
                printf("empty\n");
            if(top(&head, &tail)==type_char)
                printf("pop value: %c\n", pop_char(&head, &tail));
            if(top(&head, &tail)==type_short)
                printf("pop value: %hd\n", pop_short(&head, &tail));
            if(top(&head, &tail)==type_int)
                printf("pop value: %d\n", pop_int(&head, &tail));
            if(top(&head, &tail)==type_long)
                printf("pop value: %ld\n", pop_long(&head, &tail));
            if(top(&head, &tail)==type_float)
                printf("pop value: %f\n", pop_float(&head, &tail));
            if(top(&head, &tail)==type_double)
                printf("pop value: %lf\n", pop_double(&head, &tail));
        }

        printf("function select:\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.quit\n");
        scanf(" %d", &fs);
    }
    printf("bye\n");
}
