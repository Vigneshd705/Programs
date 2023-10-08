#include <stdio.h>
void main()
{
    int amt,cash,c1,c2,c3,c4,c5,c6;
    printf("Enter the amount: ");
    scanf("%d",&amt);
    cash=amt;
    if (amt>=2000)
    {
        c1=amt/2000;
        amt=amt%2000;
    }
    if (amt>=500)
    {
        c2=amt/500;
        amt%=500;
    }
    if (amt>=50)
    {
        c3=amt/50;
        amt%=50;
    }
    if (amt>=10)
    {
        c4=amt/10;
        amt%=10;
    }
    if (amt>=5)
    {
        c5=amt/5;
        amt%=5;
    }
    if (amt>=2)
    {
        c6=amt/2;
        amt%=2;
    }
    printf("Rs. %d is issued as %d*2000,%d*500,%d*50,%d*10,%d*5,%d*2,",cash,c1,c2,c3,c4,c5,c6);
}