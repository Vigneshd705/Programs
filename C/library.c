#include <stdio.h>
#include <stdlib.h>
int max=0,i,choice,count=0,new_books;
struct lib
{
    int Sno,year;
    char title[30],author[30];
}books[100];
void main()
{
   
    while(1)
    { 
    printf("\n3Library Menu");
    printf("Enter your choice: \n1-Add Books \n2-Display Books \n3-Exit");
    scanf("%d",&choice);
    if (choice==1)
    {
    printf("Enter the number of books you want to add: ");
    scanf("%d",&max);
    for (i=0;i<max;i++)
    {
        books[new_books].Sno=new_books+1;
        printf("Enter the book name: ");
        scanf("\n%[^\n]s",books[new_books].title);
        printf("Enter the author's name: ");
        scanf("\n%[^\n]s",books[new_books].author);
        printf("Enter the published year: ");
        scanf("%d",&books[new_books].year);
        new_books++;
        
    }  
    }
    else if(choice==2)
    {
    printf("S.No  Title                              Author's Name                       Published year");
    for (i=0;i<new_books;i++)
    {
        printf("\n%-5d %-35s %-35s %-5d",books[i].Sno,books[i].title,books[i].author,books[i].year);
    }
    }
    else
    {
        FILE *fp1;
        fp1=fopen("f.txt","w");
        fwrite("&books[new_books]",sizeof(struct lib),1,fp1);
        fclose(fp1);
        exit(0);
    }
    }
}