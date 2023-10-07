//equivatiral triange
 #include <stdio.h>
void main()
{
    int i,j,num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (i=num;i>0;i--)
    {
        for (j=i;j>0;j--)
        {
            printf(" ");
        }
        for (j=i;j<num;j++)
        {
            printf("*");
        }
        for (j=i;j<num+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}