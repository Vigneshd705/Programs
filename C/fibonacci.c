#include <stdio.h>
void main()
{
    int num,num1=0,num2=1,sum,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {printf("\n%d",num1);
    sum=num1+num2;
    num1=num2;
    num2=sum;
    }
}