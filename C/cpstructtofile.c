#include <stdio.h>
struct s
{
char name[100];
int height;
};
int main(){
    struct s a[5],b[5];
    FILE *fptr;
    int i;
    fptr=fopen("file.txt","w");
    for(i=0;i<2;++i)
    {
	fflush(stdin);
	printf("Enter name: ");
	gets(a[i].name);
	printf("Enter height: ");
	scanf("%d",&a[i].height);
	fprintf(fptr,"Name:%s\t %d\n",a[i].name,a[i].height);
    }
    fclose(fptr);
    fptr=fopen("file.txt","r");
    for(i=0;i<2;++i)
    {
	fscanf(fptr," %[^\t] %d",a[i].name,&a[i].height);
	printf("%s\n height %d",a[i].name,a[i].height);
    }
    fclose(fptr);
    return 0;
}