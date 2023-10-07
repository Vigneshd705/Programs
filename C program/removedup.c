#include <stdio.h>
void main()
{
    int arr[]={1,5,3,5,6};
    int i,j,len,count=0;
    len=sizeof(arr)/sizeof(arr[0]);
    int marr[len];
    for (i=0;i<len;i++)
    {
        count=0;
        for (j=0;j<i;j++)
        {
        if (arr[i]==marr[j])   count++;}
        if (count==0)
        {
            marr[i]=arr[i];
            printf("%d",marr[i]);
        }
        
    }
}