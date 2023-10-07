//calculator using function
#include <stdio.h>
int num1,num2;
char op;
void sum()
{printf ("The sum is %d",num1+num2);}
void diff()
{printf("The difference is %d",num1-num2);}
void product()
{printf("The product is %d",num1*num2);}
void div()
{printf("The quotient is %f",(float)num1/num2);}
void mod_div()
{printf("The remainder is %d",num1%num2);}
void display()
{
printf("Enter two numbers:");
scanf("%d%d",&num1,&num2);
printf("Choose the Operator: \n'+' for addition \n'-' for subraction \n'*' for multipication \n'/' for division \n'%'  for modulo division \nEnter the operator: ");
scanf(" %c",&op);
switch(op)
{case '+':
sum();
break;
case '-':
diff();
break;
case '*':
product();
break;
case '/':
div();
break;
case '%':
mod_div();
break;
default:
printf("invalid operator");
}
}
void main()
{
char c;
do
{
display();
printf("\nDo you want to continue?(y/n)");
scanf("%s",&c);
}
while(c=='y' || c=='Y');
}