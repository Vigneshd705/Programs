#include <stdio.h>
void main()
{
    int arr[]={71,95,84,51,47,16,29,10,97,85};
    int len,i,num,count=0;
    len=sizeof(arr)/sizeof(arr[0]);
    printf("Enter the number you want to search: ");
    scanf("%d",&num);
    for (i=0;i<len;i++)
    {
        if (arr[i]==num)
        {
            printf("%d is found on the %d index of array",num,i);
            count++;
            break;
        }
    }
    if (count==0)
    {
        printf("%d is not found on the array",num);
    }
}