#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *head;

// Function to reverse a portion of the linked list from position m to n
void reverseBetween(int m, int n)
{
    if (m == n || head == NULL || head->next == NULL)
        return; // Nothing to reverse or invalid input.

    struct node *prev = NULL;
    struct node *current = head;
    int count = 1;

    // Traverse to the m-1 position
    while (count < m && current != NULL)
    {
        prev = current;
        current = current->next;
        count++;
    }

    struct node *mNode = current;
    struct node *nNode = NULL;
    struct node *next = NULL;

    // Reverse the m to n portion
    while (count <= n && current != NULL)
    {
        next = current->next;
        current->next = nNode;
        nNode = current;
        current = next;
        count++;
    }

    // Connect the reversed portion back to the rest of the list
    if (prev != NULL)
        prev->next = nNode;
    else
        head = nNode; // If m is the head node

    mNode->next = current;
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

    struct node *current = head;
    for (int i = 2; i <= 5; i++)
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = i;
        newNode->next = NULL;
        current->next = newNode;
        current = newNode;
    }

    printf("Original Linked List: ");
    display();

    int m, n;
    printf("Enter the values of 'm' and 'n' (positions to reverse): ");
    scanf("%d %d", &m, &n);

    reverseBetween(m, n);

    printf("Linked List after reversing from %d to %d: ", m, n);
    display();

    // Free the memory used by the linked list
    current = head;
    while (current != NULL)
    {
        struct node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
