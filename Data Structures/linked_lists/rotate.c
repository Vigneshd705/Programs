#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *head;

void create(int n)
{
    struct node *current;
    int data;
    for (int i = 0; i < n; i++)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &data);
        newnode->data = data;
        newnode->next = NULL;
        
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
    }
}

void rotate(int k, int n)
{
    if (k <= 0 || k >= n) return; // No need to rotate
    
    struct node *current = head;
    int count = 1;

    // Traverse to the (n-k)th node
    while (count < (n - k) && current != NULL)
    {
        current = current->next;
        count++;
    }

    if (current == NULL) return; // Invalid rotation

    // Store the new head and the last node of the rotated list
    struct node *new_head = current->next;
    struct node *tail = current;

    // Traverse to the end of the current list
    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    // Connect the last node to the original head
    tail->next = head;

    // Update the head of the list
    head = new_head;

    // Disconnect the original list from the rotated part
    current->next = NULL;
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

int main()
{
    create(5);
    rotate(2, 5);
    display();

    return 0;
}
