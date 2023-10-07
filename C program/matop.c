#include <stdio.h>
void main()
{
    int num[100][100];    int rows,cols,i,j,row1,col1;
    printf("Enter the rows and column of the matrix: ");
    scanf("%d %d",&rows,&cols);
    for (i=0;i<rows;i++)
    {
        //int sum=0;
        for (j=0;j<cols;j++)
        {
            printf("Enter the %d th row and %d column",i+1,j+1);
            scanf("%d",&num[i][j]);
        }
    }
    for (i=0;i<rows;i++)
    {
        //int sum=0;
        for (j=0;j<cols;j++)
        {
            printf("%3d",num[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<rows;i++)
    {
        for (j=0;j<cols;j++)
        {
            if (num[i][j]==0)
            {
                row1=i;
                col1=j;
                break;
            }
        }
    }
    for (i=0;i<rows;i++)
    {
        num[i][col1]=0;
    }
    for (j=0;j<cols;j++)
    {
        num[row1][j]=0;
    }
    printf("\n\n");
    for (i=0;i<rows;i++)
    {
        //int sum=0;
        for (j=0;j<cols;j++)
        {
            printf("%3d",num[i][j]);
        }
        printf("\n");
    }

}