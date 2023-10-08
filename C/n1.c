#include <stdio.h>
#include <string.h>
void main()
{
    int len;int count=0;
    char str[100];int i,j;
    printf("Enter the number: ");
    scanf("%d",&len);
    for (i=0;i<len;i++)
    {printf("\n");
        for (j=len;j>0;j--)
        {
            if (i==j-1 || i==len-j)
            {
                printf("%d ",j);
            }
            else
            {
                printf(" ");
            }
        }
    }
}