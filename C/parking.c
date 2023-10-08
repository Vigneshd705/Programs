//parking 
#include <stdio.h>
void main()
{
    int row,col;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    int park[row][col];
    int i,j,temp=0,max,tem[row];
    printf("Start entering status full(1)/empty(0)\n");
    for (i=0;i<row;i++)
    {   temp=0;
        for (j=0;j<col;j++)
        {
            scanf("%d",&park[i][j]);
            if (park[i][j]==0 || park[i][j]==1)
            {
                temp+=park[i][j];
            }
            else
            {
                printf("Invalid input!");
                scanf("%d",&park[i][j]);
                temp+=park[i][j];
            }
        }
        tem[i]=temp;
    }
    for (i=0;i<row;i++)
    {
        max=i;
        for (j=0;j<row;j++)
        {
            if (tem[j]>tem[max])
            max=j;
        }
    }
    for (i=0;i<row;i++)
    {
        if (tem[i]==tem[max])
        printf("Maximum number of parking is in %d row\n",i+1);
    }
}