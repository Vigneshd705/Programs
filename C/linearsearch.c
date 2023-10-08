//linear searching
#include <stdio.h>
void main()
{
    int arr[100];
    int i,n,num,count=0;
    printf("\nEnter the total number of elements you want to add:  ");
    scanf("%d",&n);
    printf("\nStart entering numbers: \n");
    for (i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    } 
    printf("\nEnter the number you want to search: ");
    scanf("%d",&num);

    for (i=0;i<n;i++)
    {
        if (num==arr[i])
        {
            printf("\n%d is in the index %d ",num,i);
            count++;
            break;
            
        }
        
    }
    if (count==0)
        printf("The number doesn't exist");
}