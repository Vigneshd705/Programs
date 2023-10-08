#include <stdio.h>
void main()
{
    int num,i;
    printf("Enter the  number: ");
    scanf("%d",&num);
    printf("The factors of %d are: ",num);
    for (i=1;i<=num;i++)
    {
       if (num%i==0)
       {
        printf("\n%d",i);
       }
    }
}