#include <stdio.h>
void main()
{
    char ch;
    FILE *fp1,*fp2; 
    fp1=fopen("string.txt","r");
    fp2=fopen("mstr.txt","w+");
    while ( (ch=fgetc(fp1))!=EOF)
    {
        int c=ch;
        if (c>65 && c<90)
        {
            c+=32;
            ch=(char)c;
           fputc(ch,fp2); 
        }
        else if(c>90 && c<120)
        {
            c-=32;
            ch=(char)c;
            fputc(ch,fp2);
        }
        else
        fputc(ch,fp2);
    }
}