//bUBBLE SORTING
#include <stdio.h>
void main()
{
    int arr[100];
    int n,i,count=0,temp,j;
    printf("\nEnter the total number of elements you want to add:  ");
    scanf("%d",&n);
    printf("\nStart entering numbers: \n");
    for (i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    } 
    for (i = 0; i < n - 1; i++)
    {
        count = 0;
        for (j = 0; j < n - (i + 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count = 1;
            }
        }
        if (count == 0)
            break;        
    }
    for (i=0;i<n;i++)
                {
                printf("%d ",arr[i]);
                }
    
}