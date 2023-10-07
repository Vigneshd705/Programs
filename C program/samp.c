#include <stdio.h>
void main()
{
FILE *f1;
int n,i=0;
char ch[30]="hello";
f1=fopen("Data","w");
while (ch!='\0')
{fprintf(f1,"%s",ch);}
}