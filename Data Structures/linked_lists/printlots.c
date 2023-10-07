#include <stdio.h>
#include <stdlib.h>
struct snode
{
    int data;
    struct snode *next;
};
struct snode *head, *head2, *current, *current1;
int create1(int n)
{
    int data;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the data: ");
        scanf("%d", &data);
        struct snode *newnode = (struct snode *)malloc(sizeof(struct snode));
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
        current->next = NULL;
    }
}
int create2(int n)
{
    int data;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the data: ");
        scanf("%d", &data);
        struct snode *newnode = (struct snode *)malloc(sizeof(struct snode));
        if (head2 == NULL)
        {
            head2 = newnode;
            current = head2;
        }
        else
        {
            current->next = newnode;
            current = current->next;
        }
        current->data = data;
        current->next = NULL;
    }
}
void display()

{
    struct snode *current = head2;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}
void printlots()
{
    int count = 1;
    for (current = head, current1 = head2; current != NULL, current1 != NULL; current1 = current1->next)
    {
        if (current->data == count)
        {
            printf("%d\n", current1->data);
            current = current->next;
        }
        count++;
    }
}
void main()
{
    int n;
    printf("Enter the number of elements in list position(p): ");
    scanf("%d", &n);
    create1(n);
    printf("Enter the number of elements in list datas(l): ");
    scanf("%d", &n);
    create2(n);
    printlots();
}