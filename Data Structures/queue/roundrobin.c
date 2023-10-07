#include <stdio.h>
struct process
{
    int id;
    int burst_time;
    char status;
}pid[50];
int front=-1,rear=-1,n,quantum_time=0;
int enqueue(int data,int id)
{
rear=(rear+1)%n;
pid[rear].burst_time=data;
pid[rear].id=id;
}
int dequeue()
{
    front=(front+1)%n;
    return pid[front].burst_time;
}
void roundrobin()
{
    int count=0,j=0,temp,t;
    printf("Time Instance\tProcess Id\tRemaining Burst Time\tStatus\n");
    while (count<n)
    {
        temp=dequeue();
        if (temp<=quantum_time)
        {
            pid[front].burst_time=0;
            pid[front].status='c';
            count++;
        }
        else 
        {
            // pid[front].burst_time=temp-quantum_time;
            t=temp-quantum_time;
            pid[front].status='u';
            enqueue(t,pid[front].id);
        }

        printf("   %-3d- %-12d%-23d%-15d%c\n",j,j+quantum_time,pid[front].id,pid[front].burst_time,pid[front].status);
        j=j+quantum_time;
    }

}
void main()
{
    int temp;
    printf("Enter the number of process: ");
    scanf("%d",&n);
    printf("Enter the quantum time: ");
    scanf("%d",&quantum_time);
    for (int i=0;i<n;i++)
    {
        printf("Enter the burst time for process %d: ",i+1);
        scanf("%d",&temp);
        enqueue(temp,i+1);
    }
    roundrobin();
}
