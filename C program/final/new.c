#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
void main()
{   int n[100];
    int word=0,i=0,a=0,b=0,j=0;//*n;
    char ch[100],mod[10][100];
    //clrscr();
    //fflush(stdin);
    printf("Enter the sentence : ");
    scanf("%[^\n]s",ch);
    while(ch[i]!='\0')
    {
	if ((int)ch[i]==32)
	word++;
	i++;
    }
    word++;
    i=0;
    //n=(int*)malloc(word*sizeof(int));
    
    while(ch[i]!='\0')
    {
	if(isalpha(ch[i]))
	mod[j][b++]=ch[i];
	else if(isdigit(ch[i]))
	n[a++]=ch[i]-48;
	else
	{
	 j++;
	 b=0;
	}
	i++;
    }
    for(i=0;i<word;i++)
    {
	for(j=0;j<word;j++)
	{
	    if(i+1==n[j])
	    printf("%s ",mod[j]);
	}

    }
   //getch();
}