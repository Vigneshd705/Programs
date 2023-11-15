#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 2-LEVEL:
struct Two_Level
{
    char dname[10], fname[10][10][10], sdname[10][10];
    int ds, sds[10], fcnt;
} dir[10];

int main()
{
    int i, j, k, n, ch;
    char f[10];
    printf("Enter the number of directories : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter directory name %d : ", i + 1);
        scanf("%s", dir[i].dname);
        printf("Size of directory : ");
        scanf("%d", &dir[i].ds);
        for (j = 0; j < dir[i].ds; j++)
        {
            printf("Enter subdirectory name & size : ");
            scanf("%s", dir[i].sdname[j]);
            scanf("%d", &dir[i].sds[j]);
            for (k = 0; k < dir[i].sds[j]; k++)
            {
                printf("Enter file name : ");
                scanf("%s", dir[i].fname[j][k]);
            }
        }
    }
    printf("\nDir-Name\t\tsize\tSub-dirname\tsize\tfiles");
    printf("\n******************************************************************\n");

    printf("Enter the name of the directory : ");
    scanf("%s", dir[0].dname); // Assuming you want to work with the first directory

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
            scanf("%s", dir[0].fname[dir[0].fcnt++]);
            break;
        }
        case 2:
        {
            printf("Enter the name of the file : ");
            scanf("%s", f);
            for (i = 0; i < dir[0].fcnt; i++)
            {
                if (strcmp(f, dir[0].fname[i]) == 0)
                {
                    printf("File %s is deleted\n", f);
                    break;
                }
            }
            if (i == dir[0].fcnt)
                printf("File %s not found\n", f);
            else
                dir[0].fcnt--;
            break;
        }
        case 3:
        {
            printf("Enter the name of the file : ");
            scanf("%s", f);
            for (i = 0; i < dir[0].fcnt; i++)
            {
                if (strcmp(f, dir[0].fname[i]) == 0)
                {
                    printf("File %s : found\n", f);
                    break;
                }
            }
            if (i == dir[0].fcnt)
                printf("File %s : Not found\n", f);
            break;
        }
        case 4:
        {
            if (dir[0].fcnt == 0)
                printf("Directory Empty\n");
            else
            {
                printf("Files are : \n");
                for (i = 0; i < dir[0].fcnt; i++)
                    printf("%s, ", dir[0].fname[i]);
            }
            break;
        }
        case 0:
        {
            printf("<<<Exited!>>>\n");
            exit(0);
        }
        default:
        {
            printf("Invalid Choice\n");
        }
        }
    }
}