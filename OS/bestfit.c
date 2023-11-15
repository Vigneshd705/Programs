#include <stdio.h>
/*BEST FIT */
int main()
{
    int n, i, j;
    printf("Enter the No. of Processes: ");
    scanf("%d", &n);
    int block_size[n], process_size[n];
    int allo[n];

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
        allo[i] = -1;
    }

    printf("%-10s%-15s%-20s\n", "PROCESS", "PROCESS SIZE", "BLOCK SIZE");

    for (i = 0; i < n; i++)
    {
        int best_fit = -1;
        for (j = 0; j < n; j++)
        {
            if (allo[j] == -1 && block_size[j] >= process_size[i])
            {
                if (best_fit == -1 || block_size[j] < block_size[best_fit])
                {
                    best_fit = j;
                }
            }
        }
        if (best_fit != -1)
        {
            allo[best_fit] = i;
            printf("P%-9d%-14d%-19d\n", i + 1, process_size[i], best_fit + 1);
        }
        else
        {
            printf("P%-9d%-14d%-19s\n", i + 1, process_size[i], "Not-Allocated");
        }
    }
    return 0;
}