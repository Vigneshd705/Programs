#include<stdio.h>
#include <string.h>
struct expenses
{
    char name[10];
    float amt;
}monthlyexpenses[3];
void main()
{
    
    int i;
    char str[5];
    float total_amt=0,etot,htot,edtot,wtot,otot,ttot,gtot,gamt,tamt,eamt,hamt,edamt,wamt,oamt;
    printf("Enter your monthly income: ");
    scanf("%f",&total_amt);
    for (i=0;i<3;i++)
    {
        printf("Enter how much you spent");
        scanf("%f",&monthlyexpenses[i].amt);
        printf("Enter what you spent for \n E-Entertainment \n H-Health \n G-Grocery \n Ed-Education \n W-dresses and cosmetics \n t-transportation ");
        scanf("%s",str);
        etot=strcmp(str,"e");
        if (etot==0)
        {eamt+=monthlyexpenses[i].amt;}
        gtot=strcmp(str,"g");
        if (gtot==0)
        {gamt+=monthlyexpenses[i].amt;}
        htot=strcmp(str,"h");
        if (htot==0)
        {hamt+=monthlyexpenses[i].amt;}
        edtot=strcmp(str,"ed");
        if (edtot==0)
        {edamt+=monthlyexpenses[i].amt;}
        wtot=strcmp(str,"w");
        if (wtot==0)
        {wamt+=monthlyexpenses[i].amt;}
        ttot=strcmp(str,"t");
        if (ttot==0)
        {tamt+=monthlyexpenses[i].amt;}
        total_amt-=monthlyexpenses[i].amt;}
        printf("%.2f",eamt);
        printf("\n%.2f",hamt);
        printf("\n%.2f",gamt);
        printf("\n%.2f",edamt);
        printf("\n%.2f",wamt);
        printf("\n%.2f",tamt);
        

        printf("\n%.2f is left in your account",total_amt);
    
}