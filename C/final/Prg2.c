#include <stdio.h>
void main()
{
int num1,num2;
printf("Enter two numbers: ");
scanf("%d%d",&num1,&num2);
printf("The sum is %d",num1+num2);
printf("\nThe difference is %d",num1-num2);
printf("\nThe product is %d", num1*num2);
printf("\nThe quotient is %f",(float)num1/num2);
}