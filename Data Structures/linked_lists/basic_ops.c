#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *tail = NULL;
int create(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = tail;
        tail = new_node;
    }
}
int searchByData(int data)
{
    int count = 1;
    struct node *current = head;
    while (data != current->data)
    {
        current = current->next;
        count++;
    }
    return count;
}
int searchByPosition(int pos)
{
    int count = 1;
    struct node *current = head;
    while (pos != count)
    {
        current = current->next;
        count++;
    }
    return current->data;
}
int insertBegin(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}
int insertEnd(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *current = head;
    new_node->data = data;
    new_node->next = NULL;
    while (current != NULL)
    {
        current = current->next;
    }
    tail->next = new_node;
}
int insertAtPosition(int data, int pos)
{
    if (pos == 1)
        insertBegin(data);
    else
    {
        int count = 0;
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = data;
        struct node *current = head;
        while (pos!= count)
        {
            current = current->next;
            count++;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}
int insertAfterElement(int data, int new_data)
{
    int pos = searchByData(data);
    if (pos == 1)
    {
        insertBegin(new_data);
    }
    else
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        int count = 1;
        new_node->data = new_data;
        struct node *current=head;
        while (pos != count)
        {
            current = current->next;
            count++;
        }
        new_node->next = current->next;
        current->next = new_node;

    }
}
int insertBeforeElement(int data, int new_data)
{
    int pos = searchByData(data);
    if (pos == 1)
    {
        insertBegin(new_data);
    }
    else
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        int count = 2;
        new_node->data = new_data;
        struct node *current=head;
        while (pos != count)
        {
            current = current->next;
            count++;
        }
        new_node->next = current->next;
        current->next = new_node;

    }
}
void deleteBegin()
{
    head=head->next;
}
void deleteEnd()
{
    struct node *current=head;
    while(current!=NULL)
    {
        current=current->next;
    }
    tail->next=NULL;
}

void display()
{
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
void main()
{
    create(10);
    insertBegin(11);
    insertEnd(12);
    insertAtPosition(9,1);
    insertAfterElement(12, 8);
    insertBeforeElement(9,7);
    display();
    deleteBegin();
    deleteEnd();
    display();
}
