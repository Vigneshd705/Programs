#include <stdio.h>
void main()
{
    int arr[1000],temp[500];
    int num,i,j=0,k=0,flag,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (i=2;i<1000;i++)
    {
        flag=0;
        for (j=2;j<i;j++)
        {
            if (i%j==0)
            {flag=1;
            break;}
        }
        if (flag==0)
        {
            arr[j]=i;
            j++;
    //printf("%d\n",i);
        }
    }
    for (i=0;i<=num;i++)
    {k=0;
    sum=0;
        while(num>=(sum+arr[i]))
        {
            printf("+%d",arr[i]);
            sum+=arr[i];
            temp[k]=arr[i];
            k++;
        }
        
        //printf("\nk=%d\n",k);
        if (num==sum)
        {
            //{//printf("%d+",temp[k]);
            //k--;}
            printf("\nsum found");
            exit(0);
        }
        
    }
    
}