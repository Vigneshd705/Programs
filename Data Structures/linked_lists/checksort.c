#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
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
void check_sort()
{
    struct node *current = head;
    int flag = 0;
    while (current != NULL && current->next != NULL)
    {
        if (current->data <= current->next->data)
        {
            current = current->next;
        }
        else
        {
            flag = 1;
            printf("Unsorted list");
            exit(0);
        }
    }
    printf("sorted list");
}
void main()
{
    int n;
    printf("Enter the size of linked list: ");
    scanf("%d", &n);
    create(n);
    check_sort();
}