#include<stdio.h>
#include<string.h>
void main()
{
    char str1[30],str2[30];
    printf("Enter the string :");
    scanf("%s",str1);
    strcpy(str2,str1);
    strrev(str2);
    int n;
    n = strcmp(str1,str2);
    if(n==0)
        printf("The string is palindrome");
    else
        printf("The string is not palindrome");
}