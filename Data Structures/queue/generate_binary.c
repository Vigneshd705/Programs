#include <stdio.h>
int bin[50];
int front = -1, rear = -1, n;
int enqueue(int data)
{
    bin[++rear] = data;
}
int dequeue()
{
    return bin[++front];
}
int binary()
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = dequeue();
        enqueue(temp * 10);
        enqueue((temp * 10) + 1);
    }
}
void main()
{
    printf("Enter the number: ");
    scanf("%d", &n);
    enqueue(1);
    binary();
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", bin[i]);
    }
}