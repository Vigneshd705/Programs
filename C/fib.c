#include <stdio.h>
int fib(int num)
{
    if (num==0)
    return 0;
    else if (num==1)
    return 1;
    else
    return (fib(num-1)+fib(num-2));
}
void main()
{
    int i,num,f;
    printf("Enter the number");
    scanf("%d",&num);
    for (i=0;i<=num;i++)
    {
        f=fib(i);
        printf("\n%d",f);
    }
}