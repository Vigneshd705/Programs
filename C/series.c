//display the series +1/2-3/4+7/8-9/10+13/14
 #include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    int n,i,count=0,ex,exp;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        ex=(2*i)-1;
        exp=2*i;
        if (count==0)
        {
            printf("+");
        }
        if (count==1)
        {
            printf("-");
        }
        printf("%d/%d",ex,exp);
        
        count++;
        if (count==2)
        {
            i++;
            n++;
            count=0;
        }
        
    }
}