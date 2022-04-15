#include"queue.h"
#include<stdio.h>

int main()
{
    int fs, value;
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
            printf("push value: ");
            scanf("%d", &value);
            push(&queue1_head, &queue1_tail, value);
        }
        else if(fs==2)
        {
            printf("pop value: %d\n", pop(&queue1_head, &queue1_tail));
        }

        printf("function select:\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.quit\n");
        scanf(" %d", &fs);
    }
    printf("bye\n");

}
