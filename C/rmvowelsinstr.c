//remove vowels in a string
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    int len,i;
    printf("Enter the string: ");
    scanf("%s",str);
    len=strlen(str);
    for (i=0;i<len;i++)
    {
        if (str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U')
        {
            //removes the vowel from the string
            printf("%c",str[i]);
        }
        else
        {
            //prints the consecutive vowels in the string
            if ((str[i+1]=='a' || str[i+1]=='e' || str[i+1]=='i' || str[i+1]=='o' || str[i+1]=='u') || (str[i-1]=='a' || str[i-1]=='e' || str[i-1]=='i' || str[i-1]=='o' || str[i-1]=='u') ||   (str[i+1]=='A' || str[i+1]=='E' || str[i+1]=='I' || str[i+1]=='O' || str[i+1]=='U') || (str[i-1]=='A' || str[i-1]=='E' || str[i-1]=='I' || str[i-1]=='O' || str[i-1]=='U'))
            printf("%c",str[i]);
        }

           
    }
}