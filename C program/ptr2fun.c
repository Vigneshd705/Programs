#include <stdio.h>
int sum(int a,int b)
{
    return a+b;
}
void main()
{
    int s;
    int (*ptr)(int,int)=sum;//int (*ptr)(int,int)=&sum;
    s=ptr(2,3);//s=(*ptr)(2,3);
    printf("%d",s);
}