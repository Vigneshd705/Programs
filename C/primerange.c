#include <stdio.h>
void main()
{
    int first,last,i,j;
    printf("Enter the starting and ending number to find prime numbers between it");
    scanf("%d%d",&first,&last);
    for (i=first;i<=last;i++)
    {
        for (j=2;j<=i;j++)
        {
            if (i%j==0)
            break;
            else
            {
                printf("\n%d",i);
            break;
            }
            
        }
    }
}