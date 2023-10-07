#include <stdio.h>
#include <stdlib.h>
int front = 0, rear = -1, size;
int queue[50];
int k = 4;
int is_empty()
{
    if (rear == -1)
        return 1;
    else
        return 0;
}
int empty()
{
    if (rear == -1)
        printf("Queue is empty");
    else
        printf("Queue is not empty");
}
int push_back(int data)
{
    queue[++rear] = data;
}
int pop_front()
{
    if (is_empty())
    {
        printf("Queue is empty");
    }
    else
        printf("%d", queue[front++]);
}
int pop_back()
{
    if (is_empty())
    {
        printf("Queue is empty");
    }
    else
        printf("%d", queue[rear--]);
}
int Front()
{
    if (is_empty())
    {
        printf("Queue is empty");
    }
    else
        printf("%d", queue[front]);
}
int back()
{
    if (is_empty())
    {
        printf("Queue is empty");
    }
    else
        printf("%d", queue[rear]);
}
void main()
{
    int choice, data;
    while (1)
    {
        printf("\nEnter your choice:-\n1-is empty\n2-push back\n3-pop front\n4-pop back\n5-front\n6-back\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            empty();
            break;
        case 2:
            printf("Enter the data: ");
            scanf("%d", &data);
            push_back(data);
            break;
        case 3:
            pop_front();
            break;
        case 4:
            pop_back();
            break;
        case 5:
            Front();
            break;
        case 6:
            back();
            break;
        default:
            exit(0);
        }
    }
}