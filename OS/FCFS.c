#include <stdio.h>
int n, burst_time[100], wait_time[100], turn_around_time[100];
int waittime()
{
    wait_time[0] = 0;
    printf("The Waiting time is: ");
    printf("%d ", wait_time[0]);
    for (int j = 1; j < n; j++)
    {
        wait_time[j] = wait_time[j - 1] + burst_time[j - 1];
        printf("%d ", wait_time[j]);
    }
}

int turnaroundtime()
{
    printf("The turn around time is: ");
    for (int k = 0; k < n; k++)

    {
        turn_around_time[k] = wait_time[k] + burst_time[k];
        printf("%d ", turn_around_time[k]);
    }
}
float average_time(int avg[])
{
    int avrg = 0;
    for (int i = 0; i < n; i++)
    {
        avrg += avg[i];
    }
    return avrg / n;
}
void main()
{
    printf("Enter the number of process: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the burst time for process %d: ", i + 1);
        scanf("%d", &burst_time[i]);
    }
    waittime();
    printf("\n");
    turnaroundtime();
    printf("\nThe average waiting time is %f\n", average_time(wait_time));
    printf("The average turn around time is %f\n", average_time(turn_around_time));
}