#include <stdio.h>
void main()
{
    int m1[100][100],m2[100][100],m3[100][100];
    int c1,c2,r1,r2,i,j,k,count=0,m,n;
   
    printf("Enter no. of columns of matrix 1: " );
    scanf("%d",&c1);
    printf("Enter no. of rows of matrix 1: " );
    scanf("%d",&r1);
    printf("Enter no. of columns of matrix 2: " );
    scanf("%d",&c2);
    printf("Enter no. of rows of matrix 2: " );
    scanf("%d",&r2);
    
    
    if (r1==c2)
    {
    for (i=0;i<c1;i++)
    {
        for (j=0;j<r1;j++)
        {
            printf("Enter the value of matrix 1's %d column and %d row",i+1,j+1);
            scanf("%d",&m1[i][j]);

        }
    }
    for (i=0;i<c2;i++)
    {
        for (j=0;j<r2;j++)
        {
            printf("Enter the value of matrix 2's %d column and %d row",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r2;j++)
        {
            m3[i][j]=0;
        }
    }
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c2;j++)
        {
            for (k=0;k<c2;k++)
            {
                m3[i][j]+=m1[i][k]*m2[k][j];
            }
            
        }
    }
    
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r2;j++)
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
    else
    printf("Matrix multiplication of the given matrix is not possible.");
}