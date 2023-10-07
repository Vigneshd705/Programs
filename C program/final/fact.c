#include <stdio.h>
void main()
{
    int fact=1,num,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {fact=fact*i;
    }
    printf("factorial of %d is %d",num,fact);
}