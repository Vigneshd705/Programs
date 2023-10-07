//prime numbers in a array
#include <stdio.h>
void main()
{
    int num,i,j,flag=0;
    printf("Enter the number of elements you want to add: ");
    scanf("%d",&num);
    int arr[num];
    printf("Start entering values: ");
    for (i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=2;i<num;i++)
    {
        flag=0;
        for (j=2;j<arr[i];j++)
        {
            if (arr[i]%j==0)
            {flag=1;
            break;}
        }
    if (flag==0)
    {printf("%d",arr[i]);}
    }
}