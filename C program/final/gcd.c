#include <stdio.h>
void main()
{
    int num1,num2,min,i,gcd;
    printf("Enter two numbers :");
    scanf("%d%d",&num1,&num2);
    if (num1>num2)
    min=num2;
    else
    min=num1;
    for (i=1;i<=min;i++)
    {
    if (num1%i==0 && num2%i==0)
    gcd=i;}
printf("gcd=%d",gcd);
}
