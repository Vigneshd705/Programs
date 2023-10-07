#include <stdio.h>
void main()
{
    int sum=0,n[]={2,4,5,6,3},*ptr;
    ptr=n;
    for (int i=0;i<(sizeof(n)/sizeof(n[0]));i++)
    {
        sum+=*ptr;
        ptr++;
    }
    printf("The sum of the array %d",sum);
}