#include <stdio.h>
void main()
{
    FILE *fptr1,*fptr2;
    char ch;
    int c;
    fptr1=fopen("file.txt","r");
    fptr2=fopen("file2.txt","w");
    while ((ch=fgetc(fptr1))!=EOF)
    {
        c=ch;
        if (c>65 && c<90)
        {
            c+=32;
            ch=(char)c;
            fputc(ch,fptr2);
        }
        else if (c<90 && c>120)
        {
            c-=32;
            ch=(char)c;
            fputc(ch,fptr2);
        }
        
    }
}