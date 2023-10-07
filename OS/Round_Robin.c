#include <stdio.h>
int n;
struct process
{
    int process_id;
    int burst_time;
    int Burst_time;
    int turnaroundtime;
    int waitingtime;
    int arrivaltime;
    int exititime;
} pid[50];
int roundrobin()
{
    int completed = 0;
    int quantum_time = 6;
    int t = 0;
    while (completed < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (pid[i].burst_time > 0)
            {
                if (pid[i].burst_time > quantum_time)
                {
                    t += quantum_time;
                    pid[i].burst_time = pid[i].burst_time - quantum_time;
                }
                else if (pid[i].burst_time <= quantum_time)
                {
                    t += pid[i].burst_time;
                    pid[i].exititime=t;
                    pid[i].turnaroundtime=pid[i].exititime-pid[i].arrivaltime;
                    pid[i].waitingtime=pid[i].turnaroundtime-pid[i].Burst_time;
                    printf("Process %d is completed at %d\n", i + 1,t);
                    pid[i].burst_time = 0;
                    completed++;
                }
            }
        }
    }
}
void avg()
{
    int wt=0,tat=0;
    for (int i=0;i<n;i++)
    { 
        tat+=pid[i].turnaroundtime;
        wt+=pid[i].waitingtime;
    }
    printf("The average waiting time is %f\n",(float)wt/n);
    printf("The average turn around time is %f\n",(float)tat/n);

}
void main()
{
    printf("Enter the number of process: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the burst time for process %d: ", i + 1);
        scanf("%d", &pid[i].burst_time);
        pid[i].Burst_time=pid[i].burst_time;
        pid[i].arrivaltime=i;
        pid[i].process_id = i + 1;
    }
    roundrobin();
    printf("Process Id  Arrival Time Burst Time Exit Time   Turn Around Time    Waiting Time\n");
    for (int i=0;i<n;i++)
    {
        printf("    P%-15d%-10d%-10d%-15d%-20d%-10d\n",pid[i].process_id,pid[i].arrivaltime,pid[i].Burst_time,pid[i].exititime,pid[i].turnaroundtime,pid[i].waitingtime);
    }
    avg();
}