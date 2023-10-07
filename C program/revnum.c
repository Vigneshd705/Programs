#include <stdio.h>
void main()
{
    int num,dig,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The number before reversing is %d\n",num);
    while (num>0)
    {
        dig=num%10;
        sum=(sum*10)+dig;
        num=num/10;
    }
    printf("The number after reversing is %d",sum);
}
