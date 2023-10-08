#include <stdio.h>
void main()
{
    int n,r,i=0;
    printf("Enter the multiplier: ");
    scanf("%d",&n);
    printf("Enter the range: ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
    printf("%2d X %2d = %2d\n",i,n,i*n);
    }

}