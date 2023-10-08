//inserting mainstring into substring
#include <stdio.h>
#include<string.h>
void main()
{
    int pos,l,i;
    char str[100],substr[50];
    printf("Enter the main string: ");
    scanf("\n%[^\n]s",str);
    printf("Enter the substring: ");
    scanf("\n%[^\n]s",substr);
    printf("Enter the position you want to insert the substring: ");
    scanf("%d",&pos);
    l = strlen(str);
    for(i=l;i>=pos;i--)
    {
        str[i+strlen(substr)] = str[i];
    }
    for(i=0;i<strlen(substr);i++)
    {
        str[i+pos] = substr[i];
    }
    printf("%s",str);

}