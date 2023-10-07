//FACTORIAL USING RECURRSION
#include <stdio.h>
int f=1,num;
int fact(int num)
{
    if (num<=1)
    return 1;
    else
    {
        return num*fact(num-1);
    }
}
void main()
{
    printf("Enter the number");
    scanf("%d",&num);
    printf("%d",fact(num));
    
}