#include <stdio.h>
void main()
{
    int arr[100],num,max,temp;
    printf("Enter the number of elements you want to add: ");
    scanf("%d",&num);
    for (int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<num;)
    {
        max=i;
        for (int j=0;j<num;)
        {
            if (arr[max]<arr[j])
            {
                max=j;
            }
            if (max!=i)
            {
                temp=arr[max];
                arr[max]=arr[i];
                arr[i]=temp;
            }
            j=j+2;
        }
        i=i+2;
    }
    for (int i=1;i<num;)
    {
        max=i;
        for (int j=1;j<num;)
        {
            if (arr[max]>arr[j])
            {
                max=j;
            }
            if (max!=i)
            {
                temp=arr[max];
                arr[max]=arr[i];
                arr[i]=temp;
            }
            j=j+2;
        }
        i=i+2;
    }
    for (int i=0;i<num;i++)
    {
        printf("%d",arr[i]);
    }
}