#include <stdio.h>

/*WORST FIT */
int main()
{
    int n, i, j;
    printf("Enter the No. of Processes: ");
    scanf("%d", &n);
    int block_size[n], process_size[n];
    int allocation[n];

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
        allocation[i] = -1;
    }

    printf("%-10s%-15s%-20s\n", "PROCESS", "PROCESS SIZE", "BLOCK SIZE");

    for (i = 0; i < n; i++)
    {
        int worst_fit = -1;
        for (j = 0; j < n; j++)
        {
            if (allocation[j] == -1 && block_size[j] >= process_size[i])
            {
                if (worst_fit == -1 || block_size[j] > block_size[worst_fit])
                {
                    worst_fit = j;
                }
            }
        }
        if (worst_fit != -1)
        {
            allocation[worst_fit] = i;
            printf("P%-9d%-14d%-19d\n", i + 1, process_size[i], worst_fit + 1);
        }
        else
        {
            printf("P%-9d%-14d%-19s\n", i + 1, process_size[i], "Not-Allocated");
        }
    }

    return 0;
}