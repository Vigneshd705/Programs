#include <stdio.h>
//#include <conio.h>
void main()
{
FILE *f1,*f2,*f3;
int n,i=0,num;
//clrscr();
f1=fopen("Data","w");
printf("Enter the numbers of elements you want to add to the file");
scanf("%d",&n);
printf("Start entering the numbers: ");
for (i=0;i<n;i++)
{
scanf("%d",&num);
fprintf(f1,"%d\n",num);
}
fclose(f1);
f1=fopen("Data","r");
f2=fopen("even","w");
f3=fopen("odd","w");
while (fscanf(f1,"%d\n",&num)!=EOF)
{
if (num%2==0)
fprintf(f2,"%d\n",num);
else
fprintf(f3,"%d",num);
}
fclose(f1);
fclose(f2);
fclose(f3);
//getch();
}
