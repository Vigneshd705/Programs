#include <stdio.h>
#include <string.h>
#include <math.h>
int fact(int a)
{
    int fact=1,i=1;
    for (i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
void main()
{
    float p;
    int n,num,sum=0,val=0,v=0;
    char perm[10],toss[10];
    printf("Enter how many times you want to toss: ");
    scanf("%d",&n);
    printf("Enter your permutation: ");
    scanf("%s %d %s",perm,&num,toss);
    printf("%s %d %s",perm,num,toss);
    val=strcmp(perm,"atleast");
    v=strcmp(perm,"atmost");
        if (val==0)
        {

        for (int i=num;i<=n;i++)
        {
            sum=sum+ (fact(n)/(fact(n-i)*fact(i)));
            
        }
        }
        else if (v==0)
        {
            for (int i=0;i<=num;i++)
            {
                sum=sum+ (fact(n)/(fact(n-i)*fact(i)));   
            }
        }
        else 
        {
            sum=(fact(n)/(fact(n-num)*fact(num)));   
        }

    p=sum/pow(2,n);
    printf("\n%d",sum);
    printf("\nThe probability of getting %s %d %s is %.4f",perm,num,toss,p);
}