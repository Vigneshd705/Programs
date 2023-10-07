#include <stdio.h>
void main()
{
    int num,flag=0,i,j;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (num>1)
    {
    for (i=2;i<=num;i++)
    {
         flag=0;
        for (j=1;j<=i;j++)
        {
           
            if (i%j==0)
            flag++;
        }
        if (flag<=2)
        {printf("\n%d",i);}
    }
    }
    else
    printf("Enter the valid number");

}