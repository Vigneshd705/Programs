//gcd of two numbers
#include <stdio.h>  
int main()  
{     
    // initialize the local variables num1 and num2  
    int num1 , num2; 
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);      
    while (num1 != num2)   
    {  
        // if num1 is greater than num2, returns the num1.  
        if (num1 > num2)  
            {  
            num1 = num1 - num2;   
            }  
            // otherwise, it returns the num2.  
        else  
            {  
                num2 = num2 - num1;  
                }     
                  
    }   
    // print the GCD of the number.  
    printf( " GCD of two numbers %d and %d is %d.", num1,num2,num2);  
}  