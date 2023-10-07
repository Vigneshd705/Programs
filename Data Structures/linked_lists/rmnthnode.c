#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *head;

// Function to remove the nth node from the end of the list
void removeNthFromEnd(int n)
{
    struct node *first = head;
    struct node *second = head;
    struct node *prev = NULL;

    // Move the first pointer ahead by 'n' nodes
    for (int i = 0; i < n; i++)
    {
        if (first == NULL)
        {
            printf("Invalid n (greater than the length of the list)\n");
            return;
        }
        first = first->next;
    }

    // Move both pointers one node at a time until first reaches the end
    while (first != NULL)
    {
        prev = second;
        second = second->next;
        first = first->next;
    }

    // Remove the nth node
    if (prev == NULL)
    {
        // If prev is NULL, it means we are removing the head node
        head = second->next;
    }
    else
    {
        prev->next = second->next;
    }

    free(second); // Free the memory of the removed node
}
// Function to display the linked list
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
    // Create a sample linked list
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->next = NULL;

    for (int i = 2; i <= 5; i++)
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = i;
        newNode->next = head;
        head = newNode;
    }

    printf("Original Linked List: ");
    display();

    int n;
    printf("Enter the value of 'n' (position from the end) to remove: ");
    scanf("%d", &n);

    removeNthFromEnd(n);

    printf("Linked List after removing the %d-th node from the end: ", n);
    display();

    // Free the memory used by the linked list
    struct node *current = head;
    while (current != NULL)
    {
        struct node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}

