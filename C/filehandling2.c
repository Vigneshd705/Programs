#include <stdio.h>
void main()
{
    char ch;
    FILE *fp1,*fp2,*fp3;
    fp1=fopen("file.txt","r");
    fp2=fopen("file2.txt","a+");
    //fp3=fopen("file3.txt","w");
    while ((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }/*
    while ((ch=fgetc(fp2))!=EOF)
    {
        fputc(ch,fp3);
    }*/
 fclose(fp2);
 fp2=fopen("file2.txt","r");
 while ((ch=getc(fp2))!=EOF)
 {
    printf("%c",ch);
 }   



}