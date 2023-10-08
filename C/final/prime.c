#include <stdio.h>
void main()
{
    int arr[1000],temp[500];
    int num,i,j=0,k=0,flag,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (i=2;i<num;i++)
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
    {
    
        if (num>=(sum+arr[i]))
        {
            sum+=arr[i];
            temp[k]=arr[i];
            k++;
        }
        
        if (num==sum)
        {
            printf("\nsum found\n");
            for(int p=0;p<k;p++)
                printf("+%d",temp[p]);
            exit(0);
        }
        
    }
    printf("sum not found");
        exit(0);
        
    }
    
