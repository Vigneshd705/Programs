#include<stdio.h>
struct student
{
    int slno;
    char name[20],lastname[20];
    int date,month,year;
    char admission[100],dept[5],gender[7];
    float cutoff;
};
void main()
{
    int i,j; char temp[20];
    struct student details[3];
    int arr[10];
    for (i=0;i<3;i++)
    {
    printf("Enter the student name: ");
    scanf("\n%[^\n]s",details[i].name);
    printf("Enter the date of birth in the format dd/mm/year: ");
    scanf("%d/%d/%d",&details[i].date,&details[i].month,&details[i].year);
    printf("Enter the gender: ");
    scanf("%s",details[i].gender);
    printf("Enter the cutoff: ");
    scanf("%f",&details[i].cutoff); 
    printf("Enter the department: ");
    scanf("%s",details[i].dept);
    printf("Enter the type of admission: aided / management / merit : ");
    scanf("\n%[^\n]s",details[i].admission);   
    }
    for (i=0;i<3;i++)
    {
    printf("%s",details[i].name);
    printf("%d/%d/%d",details[i].date,details[i].month,details[i].year);
    printf("%s",details[i].gender);
    printf("%f",details[i].cutoff); 
    printf("%s",details[i].dept);
    printf("%s",details[i].admission);   
    }
}