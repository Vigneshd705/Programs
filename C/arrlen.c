#include<stdio.h>
int arr[]={2,3,4,1,5};
int array()
{
    return sizeof(arr)/sizeof(arr[0]);
}
void main()
{
printf("%d",array());
}