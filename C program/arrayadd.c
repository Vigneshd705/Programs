#include <stdio.h>
void main()
{
    int a=3,b=3,c=3,d=3,p=3,q=3,i,j;
    int m1[a][b],m2[c][d],r[p][q];
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            printf("Enter the value of column %d and row %d ",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }
    for (i=0;i<c;i++)
    {
        for (j=0;j<d;j++)
        {
            printf("Enter the value of column %d and row %d ",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }
    for (i=0;i<c;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("\n%d",m1[i][j]+m2[i][j]);
        }
    }


}