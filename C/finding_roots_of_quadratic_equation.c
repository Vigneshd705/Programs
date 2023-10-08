#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c;
    float sqrt1,sqrt2,sqr,temp;
    printf("Enter the equation in the format ax^2+bx+c");
    scanf("%d%d%d",&a,&b,&c);
    temp=(pow(b,2))-((4)*(a)*(c));
    if (temp>=0)
    {
    sqr=pow(temp,0.5);
    sqrt1=(-b+sqr)/(2*a);
    sqrt2=(-b-sqr)/(2*a);
    printf("The roots of the equation %dx^2+%dx+%d is %2f and %2f",a,b,c,sqrt1,sqrt2);
    }
    else
    {
        printf("No real roots");
    }
    
}