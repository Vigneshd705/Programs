#include <stdio.h>
void main()
{
    int num[100];
    int n;
    printf("Enter the how many numbers you want to add: ");
    scanf("%d",&n);
    printf("Start entering numbers: ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int min=num[0];
    for (int i=0;i<=n;i++)
    {

        for (int j=0;j<(n/2);j++)
        {
            if (min>num[i]+num[j])
            {
                min=num[i]+num[j];
            }

        }
    }
    //printf("%d",min);
    for (int i=0;i<=n;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            if (min==num[i]+num[j])
            {
               printf("%d %d",num[i],num[j]);
               exit(0);
            }

        }

    }
}

