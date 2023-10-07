//Avg og marks
#include <stdio.h>
void main()
{
    int num,i,total=0;
    printf("Enter the no. of subjects: ");
    scanf("%d",&num);
    int marks[num];
    for (i=0;i<num;i++)
    {
        printf("Enter the marks of subject %d ",i+1);
        scanf("%d",&marks[i]);
        total+=marks[i];
    }
    printf("\nThe total marks obtained in %d subjects is %d",num,total);
    printf("\nThe average mark of %d subjects is %f",num,(float)total/num);
}