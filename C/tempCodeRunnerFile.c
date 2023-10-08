#include <stdio.h>
void main()
{
    int i,j,num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (i=num;i>0;i--)
    {
        for (j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}