#include <stdio.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *head;
//int n;
int create(int n)
{
    struct node *current;
    int data;
    for (int i = 0; i < n; i++)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        if (head == NULL)
        {
            head = newnode;
            current = head;
        }
        else
        {
            current->next = newnode;
            current = current->next;
        }
        printf("Enter the data: ");
        scanf("%d", &data);
        current->data = data;
    }
    current->next = NULL;
}
void rotate(int k,int n)
{
    int count=1;
    struct node *current=head;
    while (count!=n-k)
    {
        current=current->next;
        count++;
    }
    struct node *head1=current->next;
    struct node *current1=head1;
    current->next=NULL;
    while (count!=n)
    {
        current1=current1->next;
        count++;
    }
    current1->next=head;
    head=head1;
}
void display()
{
    struct node *current=head;
    while(current!=NULL)
    {
        printf("%d",current->data);
        current=current->next;
    }
}
void main()
{
    create(5);
    rotate(2,5);
    display();
}