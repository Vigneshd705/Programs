#include <stdio.h>
#include <stdlib.h>
struct snode
{
    int data;
    struct snode *next;
    struct snode *prev;
};
struct snode *head = NULL, *tail;
int create(int n)
{
    int data;
    struct snode *current;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the data: ");
        scanf("%d", &data);

        struct snode *new_node = (struct snode *)malloc(sizeof(struct snode));
        if (head == NULL)
        {
            head = new_node;
            current = head;
            current->prev = NULL;
        }
        else
        {

            current->next = new_node;
            current->next->prev = current;
            current = current->next;
        }
        current->data = data;
        current->next = NULL;
    }
    tail = current;
}
void palindrome()
{
    struct snode *current1 = head, *current2 = tail;
    while (current1 != current2 && current2->prev != current1)
    {
        if (current1->data == current2->data)
        {
            current1 = current1->next;
            current2 = current2->prev;
        }
        else
        {
            printf("Not a palindrome");
            exit(0);
        }
    }
    printf("Palindrome");
}
void main()
{
    create(4);
    palindrome();
}