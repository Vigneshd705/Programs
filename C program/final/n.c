#include <stdio.h>
void main()
{
    int arr[20];
    int n,count=0;
    
    printf("Enter the number of elements want to add: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The repeating numbers are: ");

    for (int i=0;i<n;i++)
    {   count=0;
        for (int j=0;j<i;j++)
        {
            if (arr[i]==arr[j])
            {count++;}
            
        }
        if (count==1)
            printf("%d",arr[i]);
    }
}