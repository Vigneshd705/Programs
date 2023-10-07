#include <stdio.h>
int n,k,rear=-1,front=-1,queue[50],stack[50],top=-1;
int enqueue(int data)
{
    rear=(rear+1)%n;
    queue[rear]=data;
}
int dequeue()
{
    front=(front+1)%n;
    return queue[front];
}
int push(int data)
{
stack[++top]=data;
}
int pop()
{
    return stack[top--];
}
int reverse()
{
for (int i=0;i<k;i++)
    {
        push(dequeue());
    }
    for (int i=0;i<k;i++)
    {
        enqueue(pop());
    }
    for (int i=0;i<n-k;i++)
    {
        enqueue(dequeue());
    }
}
void main()
{
    int a;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Start entering values: ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a);
        enqueue(a);
    }    
    printf("Enter the value of k: ");
    scanf("%d",&k);
    reverse();
    for (int i=0;i<n;i++)
    {
        printf("%d ",dequeue());
    }
}