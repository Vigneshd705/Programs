#include <stdio.h>
int n, burst_time[100], wait_time[100], turn_around_time[100],process[100];
int waittime()
{
    wait_time[0] = 0;
    printf("%d ",wait_time[0]);
    for (int j = 1; j < n; j++)
    {
        wait_time[j] = wait_time[j - 1] + burst_time[j - 1];
    }
}

int turnaroundtime()
{
    for (int k = 0; k < n; k++)
    {
        turn_around_time[k] = wait_time[k] + burst_time[k];
    }
}
float average_time(int avg[])
{
    int avrg=0;
    for (int i=0;i<n;i++)
    {
        avrg+=avg[i];
    }
    return (float)avrg/n;
}
void sort()
{
    int min;
    int temp;
    for (int i=0;i<n;i++)
    {
        min=i;
        for (int j=i;j<n;j++)
        {
            if (burst_time[min]>burst_time[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=burst_time[i];
            burst_time[i]=burst_time[min];
            burst_time[min]=temp;
        }
        if(min!=i)
        {
            temp=process[i];
            process[i]=process[min];
            process[min]=temp;
        }
    }
}
void main()
{
    printf("Enter the number of process: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the burst time for process %d: ", i + 1);
        scanf("%d", &burst_time[i]);
        process[i]=i+1;
    }
    sort();
    waittime();
    printf("\n");
    turnaroundtime();
    printf("Process No.    Burst Time  Waiting Time  Turn around time\n");
    for (int i=0;i<n;i++)
    {
        printf("    %-15d %-13d  %-12d  %-15d \n",process[i],burst_time[i],wait_time[i],turn_around_time[i]);

    }
    printf("\nThe average waiting time is %f\n",average_time(wait_time));
    printf("The average turn around time is %f\n",average_time(turn_around_time));
}