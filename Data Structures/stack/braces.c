#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int top=-1,size=0;
char stack[100];
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
int is_same(int data)
{
    if (stack[top]==data)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void pop(int data)
{
        if (is_empty())
        {
            printf("Stack is empty");
        }
        else if (is_same)
        {
            printf("Invalid");
        }
        
        else
        {
            printf("%c\n", stack[top]);
            top--;
        }
}
void push(int data)
{
    if (is_full())
    {
        printf("The elements in the stack are: \n");
        for (int i = 0; i < size; i++)
        {
            printf("%c\n", stack[i]);
        }
        printf("%c Cannot be pushed.Since,Stack is already full.\n", data);
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
    char str[100];
    scanf("%s",str);
    int size=strlen(str);
    char stack[size];
    for (int i=0;i<size;i++)
    {
        switch(str[i])
        {
            case '(':push(1);break;
            case '[':push(2);break;
            case '{':push(3);break;
            case '}':pop(3);break;
            case ']':pop(2);break;
            case ')':pop(1);break;
        }
    }
}