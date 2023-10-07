#include <stdio.h>
#include <math.h>

void main()
{
    int n,sum=0,num,temp,count=0,digit;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    digit=num;

    while (digit>0)
    {
        digit/=10;
        count++;
    }
    while (num>0)
    {
        n=num%10;
        sum+=pow(n,count);
        printf("%d",sum);
        num=num/10;
    }
    if (temp==sum)
    printf("%d is a armstrong number",temp);
    else
    printf("%d is not a armstrong number",temp);
}