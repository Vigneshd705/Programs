#include <stdio.h>
#include <stdlib.h>
int stop=-1,mtop=-1,size;
int stack[50],min_stack[50];
int is_empty(int top)
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
int spush(int data)
{
    stack[++stop]=data;
}
int mpush(int data)
{
         min_stack[++mtop]=data;
}
int spop()
{
    
    if (is_empty(stop))
    {
        printf("Stack is empty\n");
    }
    else
    {
         return stack[stop--] ;   
    }
 }
int mpop()
{
    
    if (is_empty(mtop))
    {
        printf("Stack is empty\n");
    }
    else
    {
        return min_stack[mtop--];    
    }
}
int speek()
{
    if (is_empty(stop))
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d",stack[stop]);    
    }
}
int get_min()
{
    if (is_empty(mtop))
    {
        printf("NULL");
    }
    else
    { 
        //return min_stack[mtop];
        printf("%d",min_stack[mtop]);  
    }
}
void main()
{
    int choice,n;
    printf("Enter the size of stack: ");
    scanf("%d",&size);
    while(1)
    {
        printf("\nEnter you choice: \n1-push()\n2-pop()\n3-getmin()\n4-peek()\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the data: ");
            scanf("%d",&n);
            spush(n);
            if (mtop==-1||min_stack[mtop]>n)
            {
                mpush(n);
            }
            else
            {
                mpush(min_stack[mtop]);
            }
            
            break;
            case 2:
            mpop();
            spop();
            break;
            case 3:
            get_min();
            break;
            case 4:
            speek();
            break;
            default:
            exit(0);
        }

    }
}