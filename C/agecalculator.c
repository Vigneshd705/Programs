#include <stdio.h>
void main()
{
    int currentdate,currentmonth,currentyear,birthdate,birthmonth,birthyear,finaldate,finalmonth,finalyear;
    printf("Enter the Date of Birth in the format dd/mm/yyyy : ");
    scanf("%d/%d/%d",&birthdate,&birthmonth,&birthyear);
    printf("Enter today's date in the format dd/mm/yyyy : ");
    scanf("%d/%d/%d",&currentdate,&currentmonth,&currentyear);
    printf("%d/%d/%d",currentdate,currentmonth,currentyear);
    printf("%d/%d/%d",birthdate,birthmonth,birthyear);

    int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (birthdate>currentdate)
    {
        currentdate=currentdate+month[birthmonth-1];
        currentmonth=currentmonth-1;
    }
    if (birthmonth>currentmonth)
    {
        currentyear=currentyear-1;
        currentmonth=currentmonth+12;
       
    }
    finaldate=currentdate-birthdate;
    finalmonth=currentmonth-birthmonth;
    finalyear=currentyear-birthyear;
    printf("\n%d years %d months %d days",finalyear,finalmonth,finaldate);

}