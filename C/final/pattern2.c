#include <stdio.h>
#include <string.h>
void main()
{
    int len;int count=0;
    char str[100];int i,j;
    printf("Enter the string: ");
    scanf("%s",str);
    len=strlen(str);
    for (i=0;i<len;i++)
    {printf("\n");
        for (j=0;j<len;j++)
        {
            if (i==j || i==len-j-1)
            {
                printf("%c ",str[j]);
            }
            else
            {
                printf(" ");
            }
        }
    }
}