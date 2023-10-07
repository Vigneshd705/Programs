#include <stdio.h>
int front = 0, rear = -1,size;
int queue[50];
int k=4;
int is_empty()
{
    if (rear == -1)
        return 1;
    else
        return 0;
}
int push_back(int data)
{
    queue[++rear] = data;
}
int pop_front()
{
    return queue[front++];
}
int pop_back()
{
    return queue[rear--];
}
int Front()
{
    return queue[front];
}
int back()
{
    return queue[rear];
}
int msw(int arr[])
{
    for (int i=0;i<k;i++)
    {
        while (!is_empty()&&arr[back()]<arr[i])
        {
            pop_back();
        }
        push_back(i);
        
    }
    printf("%d ",arr[queue[front]]);
    for (int i=k;i<size;i++)
    {
        if (queue[front]==i-k)
        {
            queue[front]=queue[front+1];
        }
        while (!is_empty()&&arr[back()]<arr[i])
        {
            pop_back();
        }
        push_back(i);
        printf("%d ",arr[queue[front]]);
        

    }
}
void main()
{
    int arr[]={8,5,10,7,9,4,15,12,90,13};
    size=sizeof(arr)/sizeof(arr[0]);
    msw(arr);
}