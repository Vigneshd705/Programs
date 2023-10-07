#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coeff, power;
    struct node *next;
};

struct node *head1 = NULL;
struct node *head2 = NULL;
struct node *head3 = NULL;

void create1(int data, int pow)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->coeff = data;
    newnode->power = pow;
    newnode->next = NULL;

    if (head1 == NULL)
    {
        head1 = newnode;
    }
    else
    {
        struct node *current1 = head1;
        while (current1->next != NULL)
        {
            current1 = current1->next;
        }
        current1->next = newnode;
    }
}

void create2(int data, int pow)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->coeff = data;
    newnode->power = pow;
    newnode->next = NULL;

    if (head2 == NULL)
    {
        head2 = newnode;
    }
    else
    {
        struct node *current2 = head2;
        while (current2->next != NULL)
        {
            current2 = current2->next;
        }
        current2->next = newnode;
    }
}

struct node *polynomial_eval(struct node *head1, struct node *head2)
{
    struct node *current1 = head1;
    struct node *current2 = head2;
    struct node *head3 = NULL;
    struct node *current3 = NULL;

    while (current1 != NULL && current2 != NULL)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = NULL;

        if (head3 == NULL)
        {
            head3 = newnode;
            current3 = head3;
        }
        else
        {
            current3->next = newnode;
            current3 = current3->next;
        }

        if (current1->power == current2->power)
        {
            current3->power = current1->power;
            current3->coeff = current1->coeff + current2->coeff;
            current1 = current1->next;
            current2 = current2->next;
        }
        else if (current1->power > current2->power)
        {
            current3->coeff = current1->coeff;
            current3->power = current1->power;
            current1 = current1->next;
        }
        else if (current1->power < current2->power)
        {
            current3->coeff = current2->coeff;
            current3->power = current2->power;
            current2 = current2->next;
        }
    }

    if (current2 != NULL)
    {
        if (head3 == NULL)
        {
            head3 = current2;
        }
        else
        {
            current3->next = current2;
        }
    }
    else if (current1 != NULL)
    {
        if (head3 == NULL)
        {
            head3 = current1;
        }
        else
        {
            current3->next = current1;
        }
    }

    return head3;
}

void display(struct node *head)
{
    struct node *current = head;
    while (current != NULL)
    {
        printf("%dx^%d ", current->coeff, current->power);
        current = current->next;
    }
}

int main()
{
    int p, ord;
    printf("Enter the order of the equation 1: ");
    scanf("%d", &ord);
    for (int i = ord; i >= 0; i--)
    {
        printf("Enter the coefficient of x^%d: ", i);
        scanf("%d", &p);
        create1(p, i);
    }
    printf("Enter the order of the equation 2: ");
    scanf("%d", &ord);
    for (int i = ord; i >= 0; i--)
    {
        printf("Enter the coefficient of x^%d: ", i);
        scanf("%d", &p);
        create2(p, i);
    }

    head3 = polynomial_eval(head1, head2);
    printf("Result: ");
    display(head3);
    return 0;
}
