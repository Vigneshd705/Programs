//selection sort
#include <stdio.h>
void main()
{
    int arr[100];
    int n,i,temp,j,min;
    printf("\nEnter the total number of elements you want to add:  ");
    scanf("%d",&n);
    printf("\nStart entering numbers: \n");
    for (i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    } 
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        
    }
    for (j=0;j<n;j++)
                {
                printf("%d ",arr[j]);
                }
            printf("\n");
}
