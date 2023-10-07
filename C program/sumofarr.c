
#include<stdio.h>
void disp(int *ptr,int *sum)  
{
    while(*ptr!='\0')  
    {
        *sum+=*ptr;         
        ptr++;      
    }   
}
void main()    
{
int arr[100],n=0,add,num,i=0;
printf("Enter the no. of elements you want to add: ");
scanf("%d",&num);
printf("start entering values: ");
for (i=0;i<num;i++)
{
    scanf("%d",&arr[i]);
}
int *sum = &n;
printf("THE GIVEN ARRAY : {%d,%d,%d,%d,%d}\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
disp(arr,sum);
printf("\nFINAL VALUE OF SUM :\n") ;
add=*sum;
printf("->THE SUM OF ARRAY : %d",add);   
}


/*#include <stdio.h>
int display(int n[5],int sum)
{
    int i=0;
    while (n[i]!='\0')
    {
        sum+=n[i];
        i++;
    }
    return sum;
}
void main()
{
    int sum=0,n[100],num;
    printf("How many elements you want to add in the array");
    scanf("%d",&num);
    printf("Start entering your values: \n");
    for (int i=0;i<num;i++)
    {
        scanf("%d",&n[i]);
    }
    display(n,sum);
    printf("The sum of the array %d",sum);

}
*/
