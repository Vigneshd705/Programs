#include <stdio.h>
void main()
{
char *ptr;
char num='e';
ptr=&num;
printf("%d\n",sizeof(*ptr));
printf("%x\n",ptr);
printf("%c",*ptr);
}