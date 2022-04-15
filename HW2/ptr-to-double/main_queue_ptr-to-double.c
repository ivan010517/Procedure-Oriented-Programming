#include"queue_ptr-to-double.h"
#include<stdio.h>

int main()
{
    int fs;
    TYPE* ptr;
    Node *queue1_head = NULL, *queue1_tail = NULL;
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
            scanf("%lf", ptr);
            push(&queue1_head, &queue1_tail, ptr);
        }
        else if(fs==2)
        {
            ptr = pop(&queue1_head, &queue1_tail);
            if(ptr)
                printf("pop value: %lf\n", *ptr);
            else
                printf("queue empty\n");
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
