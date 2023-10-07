#include <stdio.h>
void main()
{
    int arr[]={-2,45,0,11,-9};
    int n,i,num,count=0,temp,j,k;
    n=sizeof(arr)/sizeof(arr[0]);
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
        for (k=0;k<n;k++)
                {
                printf("%d ",arr[k]);
                }
            printf("\n");
        
    }
    
}