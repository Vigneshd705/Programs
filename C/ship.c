#include <stdio.h>
void main()
{
    int exist[]={7,0,5,2,3},left[]={1,2,3,0,5};
    int i=0,temp=0;
    for (i=0;i<sizeof(exist)/sizeof(exist[0]);i++)
    {
        temp+=exist[i];
        temp=temp-left[i];
        exist[i]=temp;
        printf("hour %d %d-%d= %d\n",i+1,temp  +left[i],left[i],exist[i]);        
    }

}