//inverted triangle
#include <stdio.h>
void main()
{
    int i,j,num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        for (j=1;j<+i;j++)
        {
            printf(" ");
        }
        for (j=i;j<num+1;j++)
        {
            printf("*");
        }
        for (j=i;j<num;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}