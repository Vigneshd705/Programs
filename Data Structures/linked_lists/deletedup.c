#include <stdio.h>
#include <stdlib.h>
struct snode
{
    int data;
    struct snode *next;
    struct snode *prev;
};
struct snode *head=NULL,*tail;
int create(int n)
{
    int data;
    struct snode *current;
    for (int i=0;i<n;i++)
    {
        printf("Enter the data: ");
        scanf("%d",&data);

        struct snode *new_node=(struct snode*)malloc(sizeof(struct snode));
        if (head==NULL)
        {
            head=new_node;
            current=head;
            current->prev=NULL;
        }
        else
        {
            
            current->next=new_node;
            current->next->prev=current;
            current=current->next;
            
        }
        current->data=data;
        current->next=NULL;
    }
    tail=current;
}
void deldup()
{
    struct snode *current,*temp;
    int count=1;
    for (current=head;current!=NULL;current=current->next->next)
    {
        if(count==1)
        {
            head=current->next;
        }
        // temp=current;
        // current->next=current->next->next;
        // temp->next=current;
        temp=current->next;
        current->next=current->next->next;
        current->next->next=current;
        count++;

    }
    
}
void display()
{
    struct snode *current=head;
    while(current!=NULL)
    {
        printf("%d",current->data);
        current=current->prev;
    }
}
void main()
{
    create(3);
    deldup();
    display();
}