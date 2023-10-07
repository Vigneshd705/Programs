#include <stdio.h>
int stack[3], size = 3, top = -1;
int is_full()
{
    if (top == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int data)
{
    if (is_full())
    {
        printf("The elements in the stack are: \n");
        for (int i = 0; i < size; i++)
        {
            printf("%d\n", stack[i]);
        }
        printf("%d Cannot be pushed.Since,Stack is already full.\n", data);
        exit(0);
    }
    else
    {
        top++;
        stack[top] = data;
    }
}
void main()
{
    push(55);
    push(56);
    push(47);
    push(2);
    push(3);
}