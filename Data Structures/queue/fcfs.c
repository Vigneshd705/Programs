+#include <stdio.h>
struct process
{
    int id;
    int burst_time;
    int turnaroundtime;
    int waitingtime;
}pid[50];
int front=-1,rear=-1,n=3,avgwt=0,avgtat=0;
int enqueue(int data,int id,int wt,int tat)
{
rear=(rear+1)%n;
pid[rear].burst_time=data;
pid[rear].waitingtime=wt;
pid[rear].turnaroundtime=tat;
pid[rear].id=id;
}
struct process dequeue()
{
    front=(front+1)%n;
    return pid[front];
}
void fcfs()
{
    int wt=0,tat=0;
    int temp=0;
    struct process tem;
    for (int i=0;i<n;i++)
    {
        wt+=temp;
        tem=dequeue();
        temp=tem.burst_time;
        tat+=temp;
        enqueue(temp,i+1,wt,tat);
        avgtat+=tat;
        avgwt+=wt;
    }
}
void display()
{
    struct process temp;
    printf("Process\tBurst time\tWaiting time\tTurn arount time\n");
    for (int i=0;i<n;i++)
    {
        temp=dequeue();
        printf("  %-10d %-15d %-15d %d\n",temp.id,temp.burst_time,temp.waitingtime,temp.turnaroundtime);
    }
    printf("The average waiting time is %f\n",(float)avgwt/n);
    printf("The average turn around time is %f",(float)avgtat/n);
}
void main()
{
    int data;
    printf("Enter the number of process: ");
    scanf("%d",&n);
    for (int i =0;i<n;i++)
    {
        printf("Enter the burst time for process %d: ",i+1);
        scanf("%d",&data);
        enqueue(data,i+1,0,0);
    }
    fcfs();
    display();
}
