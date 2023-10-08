#include <stdio.h>
float num1,num2;
float result;
char op;
float sum()
{return num1+num2;}
float diff()
{return num1-num2;}
float product()
{return num1*num2;}
float div()
{return (float)num1/num2;}
void choice()
{printf("Enter the operator: ");
scanf("%s",&op);
switch(op)
{case '+':
result=sum();
printf("%f",result);
break;
case '-':
result=diff();;
printf("%f",result);
break;
case '*':
result=product();
printf("%f",result);
break;
case '/':
result=div();
printf("%f",result);
break;
default:
printf("invalid operator");
}}
void display()
{num1=result;
printf("Enter the number: ");
scanf("%f",&num2);
choice(op);
}
void main()
{
char c;
//printf("Choose the Operator: \n'+' for addition \n'-' for subraction \n'*' for multipication \n'/' for division ");
printf("\nEnter num1: ");
scanf("%f",&num1);
printf("Enter num2: ");
scanf("%f",&num2);
choice(op);
printf("\nDo you want to continue?(y/n)");
scanf("%s",&c);
while(c=='y' || c=='Y')
{
display();
printf("\nDo you want to continue?(y/n)");
scanf("%s",&c);
}
}