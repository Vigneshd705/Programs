#include <stdio.h>
void main()
{
    int arr[100],num,max,temp;
    printf("Enter the number of elements you want to add: ");
    scanf("%d",&num);
    for (int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]!=0 && arr[i]!=1 && arr[i]!=2)
        {
            printf("Invalid input %d at position %d", arr[i],i+1);
            scanf("%d",&arr[i]);
        }
    }
    for (int i=0;i<num;i++)
    {
        max=i;
        for (int j=0;j<num;j++)
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
        }
    }
    for (int i=0;i<num;i++)
    {
        printf("%d",arr[i]);
    }
}