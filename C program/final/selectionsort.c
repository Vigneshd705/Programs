#include <stdio.h>
void main()
{
    int arr[]={20,12,10,15,2};
    int len,i,num,temp,j,min,k;
    len=sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i < len - 1; i++)
    {
        min = i;
        for (j = i + 1; j < len; j++)
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
        for (k=0;k<len;k++)
                {
                printf("%d ",arr[k]);
                }
            printf("\n");
    }
}
