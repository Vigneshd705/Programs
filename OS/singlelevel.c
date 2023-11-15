// SINGLE-LEVEL:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Single_Level
{
    char dname[10], fname[10][10];
    int fcnt;
} dir;

void main()
{
    int i, ch;
    char f[30];
    dir.fcnt = 0;
    printf("Enter the name of the directory : ");
    scanf("%s", dir.dname);
    while (1)
    {
        printf("\n1--Create File\n2--Delete File\n3--Search File\n4--Display File\n0--Exit\n");
        printf("Choose : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("\nEnter the name of the file : ");
            scanf("%s", dir.fname[dir.fcnt++]);
            break;
        }
        case 2:
        {
            printf("Enter the name of the file : ");
            scanf("%s", f);
            for (i = 0; i < dir.fcnt; i++)
            {
                if (strcmpi(f, dir.fname[i]) == 0)
                {
                    printf("File %s is deleted\n", f);
                    break;
                }
            }
            if (i == dir.fcnt)
                printf("File %s not found\n", f);
            else
                dir.fcnt--;
            break;
        }
        case 3:
        {
            printf("Enter the name of the file : ");
            scanf("%s", f);
            for (i = 0; i < dir.fcnt; i++)
            {
                if (strcmpi(f, dir.fname[i]) == 0)
                {
                    printf("File %s : found\n", f);
                    break;
                }
            }
            if (i == dir.fcnt)
                printf("File %s : Not found\n", f);
            break;
        }
        case 4:
        {
            if (dir.fcnt == 0)
                printf("Directory Empty\n");
            else
            {
                printf("Files are : \n");
                for (i = 0; i < dir.fcnt; i++)
                    printf("%s, ", dir.fname[i]);
            }
            break;
        }
        case 0:
        {
            printf("<<<Exited!>>>\n");
            exit(-1);
        }
        default:
        {
            printf("Invalid Choice\n");
        }
        }
    }
}