#include <stdio.h>
void main()
{
    int num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num>0)
    {
        //num%=10;printf("%d",num);
        sum+=num%10;
        num=num/10;
    }
    printf("%d",sum);
}
