#include <stdio.h>

int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a=5,b=6;
    printf("The value of a and b before swapping are %d and %d\n",a,b);
    swap(&a,&b);
    printf("The value of a and b after swapping are %d and %d",a,b);
}