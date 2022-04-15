#include"queue.h"
#include<stdio.h>

define_queue(float)

int main()
{
    int fs;
    float value;
    Node(float) *queue1_head = NULL, *queue1_tail = NULL;
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
            push(float, &queue1_head, &queue1_tail, value);
        }
        else if(fs==2)
        {
            printf("pop value: %f\n", pop(float, &queue1_head, &queue1_tail));
        }

        printf("function select:\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.quit\n");
        scanf(" %d", &fs);
    }
    printf("bye\n");

}
