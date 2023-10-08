#include <stdio.h>
void main()
{
    int i,j,num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (i=0;i<=num;i++)
    {
        for (j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}