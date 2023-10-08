//move zero to last
#include <stdio.h>
void main()
{
    int num,i,j,temp;
    printf("Enter the number of elements you want to add: ");
    scanf("%d",&num);
    int arr[num];
    printf("Start entering values: ");
    for (i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<num;i++)
    {
        for (j=0;j<num-1;j++)
        {
            if (arr[j]==0)
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (i=0;i<num;i++)
    {
        printf("%d\n",arr[i]);
    }

    
}