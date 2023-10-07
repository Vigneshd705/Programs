/*
i/p:1 2 2 3
o/p:1 2 3
*/
#include <stdio.h>
#include <stdlib.h>
struct snode
{
    int data;
    struct snode *next;
};

struct snode *head, *head1;

void create(int n)
{
    int data;
    struct snode *current;
    for (int i = 0; i < n; i++)
    {
        struct snode *newnode = (struct snode *)malloc(sizeof(struct snode));
        printf("Enter the data: ");
        scanf("%d", &data);
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
        current->data = data;
    }
    current->next = NULL;
}

void del()
{
    struct snode *current = head,*temp = NULL;
    
    while (current != NULL)
    {
        if (temp != NULL && temp->data == current->data)
        {
            temp->next = current->next;
            free(current);
            current = temp->next;
        }
        else
        {
            temp = current;
            current = current->next;
        }
    }
}

void display()
{
    struct snode *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
}

void main()
{
    create(4);
    del();
    display(); 
}
