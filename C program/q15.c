//minimum absolute difference between pairs
#include <stdio.h>
void main()
{
    int arr[100],num,i,j,large,small,min;
    printf("Enter how many elements you want to add: ");
    scanf("%d",&num);
    printf("Start entering numbers: ");
    for (i=0;i<num;i++)
    scanf("%d",&arr[i]);
    //finding the absolute minimum
    for (i=0;i<num-1;i++)
    {
        for (j=i+1;j<num;j++)
        {
            if (arr[i]>arr[j])
            {
                small=arr[j];
                large=arr[i];
            }
            else
            {
                small=arr[i];
                large=arr[j];
            }
            if (i==0 && j==1)
            min=large-small;
            if (min>large-small)
            min=large-small;

        }
    }
    printf("The absolute minimum is %d\n",min);
    for (i=0;i<num;i++)
    {
        for (j=0;j<num;j++)
        {
            if ((arr[j]-arr[i])==min)
            printf("{%d,%d}",arr[i],arr[j]);
        }
    }
}