#include <stdio.h>
int stack[3] = {1, 2, 3};
int size = 3;
int top = 2;
int is_empty()
{
    if (top <= -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void peek()
{
        if (is_empty())
        {
            printf("Stack is empty");
        }
        else
        {
            printf("%d\n", stack[top]);
        }
}
void main()
{
    peek();
}