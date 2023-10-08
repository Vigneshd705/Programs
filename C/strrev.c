//string reverse
#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];char temp;
    int len,j,i,right=0;
    printf("Enter the string: ");
    gets(str);
    for (i=0;str[i]!='\0';i++)
    {
    right++;
    }
    right=right-1;
    printf("%d",right);
        for (j=0;j<=right;j++)
        {
            temp=str[j];
            str[j]=str[right];
            str[right]=temp;
            right--;
        }
        
    printf("%s\n",str);
}