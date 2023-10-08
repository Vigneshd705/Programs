#include <stdio.h>
#include <stdlib.h>
int max=0,i=0,choice,count=0,new_books=0;
struct lib
{
    int Sno,year;
    char title[30],author[30];
}books[100];
void main()
{
    FILE *fp1;
    struct lib books[100];
    while(1)
    { 
    printf("\nLibrary Menu");
    printf("Enter your choice: \n1-Add Books \n2-Display Books \n3-Exit");
    scanf("%d",&choice); 
    if (choice==1)
    {
    fp1=fopen("f.bin","wb");
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
        for (i=0;i<new_books;i++)
        {fwrite(&books[i],sizeof(struct lib),1,fp1);}
        new_books++;
        
    }  
    fclose(fp1);
    }
    else if(choice==2)
    {
        i=0;   
        fp1=fopen("f.bin","rb");
        printf("S.No  Title                              Author's Name                       Published year");
        while(fread(&books[i],sizeof(struct lib),1,fp1)==1)
        {
            printf("\n%-5d %-35s %-35s %-5d",i+1,books[i].title,books[i].author,books[i].year);
            i++;
        }
        fclose(fp1);
    }
    else
    {
        /*FILE *fp1;
        fp1=fopen("f.bin","a+2");
        for (i=0;i<new_books;i++)
        fwrite(&books[i],sizeof(struct lib),1,fp1);
        fclose(fp1);
        fp1=fopen("f.bin","r");
        //fp1=fread("&books",sizeof(struct lib),1,fp1);
        while(fread(&books[i],sizeof(struct lib),1,fp1)==1)
        {
            printf("Title: %s\n",books[i].title);
            printf("author: %s\n",books[i].author);
            printf("published year: %d/n",books[i].year);
            i++;
        }
        fclose(fp1);*/
        exit(0);
    }
    }
}