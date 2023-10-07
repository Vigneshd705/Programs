#include <stdio.h>
void main()
{
    int m=3,n=3,i,j,k,count=0;
    int m1[m][n],m2[m][n],m3[m][n];
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter the value of matrix 1's %d column and %d row",i+1,j+1);
            scanf("%d",&m1[i][j]);

        }
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter the value of matrix 2's %d column and %d row",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m3[i][j]=0;
        }
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            for (k=0;k<3;k++)
            {
                m3[i][j]+=m1[i][k]*m2[k][j];
            }
            
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",m3[j][i]);
            count++;
            if (count==3)
            {
                printf("\n");
                count=0;
            }
        }

    }
}