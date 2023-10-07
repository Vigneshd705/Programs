#include <stdio.h>
#include <stdlib.h>
int top=-1,size;
int is_full()
{
    if (top==size-1)
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
    if (top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int push(int s[],int data)
{
    if (is_full())
    {
        printf("Stack is full");
    }
    else
    {
        s[++top]=data;
    }
}
int pop(int s[])
{
    
    if (is_empty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d\n",s[top--]);    
    }
}
int peek(int s[])
{
    if (is_empty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d\n",s[top]);    
    }
}
void main()
{
    int choice,n;
    printf("Enter the size of stack: ");
    scanf("%d",&size);
    int *stack=(int*)malloc(sizeof(int));
    while(1)
    {
        printf("\nEnter you choice: \n1-push()\n2-pop()\n3-peek()\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the data: ");
            scanf("%d",&n);
            if(is_empty()||peek(stack)>n)
            {push(stack,n);}
            else
            {
                while (!is_empty()&&peek(stack)<n)
                {
                    pop();
                    printf("%d",n);
                }
                if(is_empty())
                push(stack,n);
            }
            
            break;
            case 2:
            pop(stack);
            break;
            case 3:
            peek(stack);
            break;
            default:
            exit(0);
        }

    }
}