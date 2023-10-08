//reversing a string using pointers
#include <stdio.h>
#include <string.h>
void reverse(char*str)
{
    char temp;
    int i,j;
    i=0;
    j = strlen(str)-1;
    while(i<j)
    {
        temp = *(str+i);
        *(str+i) =  *(str+j);
        *(str+j) = temp;
        i++;
        j--;
    }
}
void main()
{
    char str1[100],str2[100];
    printf("Enter the string: ");
    scanf("\n%[^\n]s",str1);
    reverse(str1);
    printf("%s",str1);

}
