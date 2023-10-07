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
        while (pos != count)
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
    int choice, data, n;
    while (1)
    {
        printf("Enter the choice:-\n1-create a newnode\n2-insert at begin\n3-insert at end\n4-insert at position\n5-insert after an element\n6-insert before an element\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element:");
            scanf("%d", &data);
            create(data);
            break;
        case 2:
            printf("Enter the element:");
            scanf("%d", &data);
            insertBegin(data);
            break;
        case 3:
            printf("Enter the element:");
            scanf("%d", &data);
            insertEnd(data);
            break;
        case 4:
            printf("Enter the position:");
            scanf("%d",&n);
            printf("Enter the element: ");
            scanf("%d", &data);
            insertAtPosition(data,n);
            break;
        case 5:
            printf("Enter the element exisiting element: ");
            scanf("%d", &n);
            printf("Enter the element:");
            scanf("%d", &data);
            insertAfterElement(n, data);
            break;
        case 6:
            printf("Enter the element exisiting element: ");
            scanf("%d", &n);
            printf("Enter the element:");
            scanf("%d", &data);
            insertBeforeElement(n, data);
            break;
        default:
            display();
            exit(0);
            break;
        }
    }
}
