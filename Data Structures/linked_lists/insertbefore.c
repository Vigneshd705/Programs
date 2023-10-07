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
int insertBegin(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
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
        struct node *current = head;
        while (pos != count)
        {
            current = current->next;
            count++;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

void display()
{
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}
void main()
{
    create(5);
    create(6);
    create(8);
    insertBeforeElement(8,7);
    display();
}