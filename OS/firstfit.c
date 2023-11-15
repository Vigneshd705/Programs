#include <stdio.h>

/* FIRST FIT */
int main()
{
    int n, i, j;
    printf("Enter the No. of Processes: ");
    scanf("%d", &n);
    int block_size[n], process_size[n];
    int allocat[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the Block Size for Block %d: ", i + 1);
        scanf("%d", &block_size[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter the Process Size for Process %d: ", i + 1);
        scanf("%d", &process_size[i]);
    }

    for (i = 0; i < n; i++)
    {
        allocat[i] = -1;
    }

    printf("%-10s%-15s%-20s\n", "PROCESS", "PROCESS SIZE", "BLOCK SIZE");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (allocat[j] == -1 && process_size[i] <= block_size[j])
            {
                allocat[j] = i;
                printf("P%-9d%-14d%-19d\n", i + 1, process_size[i], j + 1);
                break;
            }
        }
        if (allocat[i] == -1)
        {
            printf("P%-9d%-14d%-19s\n", i + 1, process_size[i], "Not-Allocated");
        }
    }

    return 0;
}