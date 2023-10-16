#include <stdio.h>
#include <stdlib.h>
int heap[100];
int i = 1, c = 1;
void maxpercolateUp(int k, int n)
{
    int temp = heap[k];
    while (heap[n] > heap[(n / 2)] && n != 1)
    {
        heap[n] = heap[(n / 2)];
        heap[(n / 2)] = temp;
        n = n / 2;
    }
}
void maxpercolateDown(int k, int n)
{
    int temp = heap[k];
    while (heap[n] < heap[(n * 2)] || heap[n] < heap[(n * 2) + 1] && n != c)
    {
        if (heap[n] < heap[(n * 2) + 1])
        {
            heap[n] = heap[(n * 2) + 1];
            heap[(n * 2) + 1] = temp;
            n = (n * 2) + 1;
        }
        else if (heap[n] < heap[(n * 2)])
        {
            heap[n] = heap[(n * 2)];
            heap[(n * 2)] = temp;
            n = n * 2;
        }
    }
}
void maxincreaseKey(int pos, int newdata)
{
    for (int i = 1; i < c; i++)
    {
        if (i == pos)
        {
            heap[i] = newdata;
            maxpercolateUp(i, i);
            break;
        }
    }
}
void maxdecreaseKey(int pos, int newdata)
{
    for (int i = 1; i < c; i++)
    {
        if (i == pos)
        {
            heap[i] = newdata;
            maxpercolateDown(i, i);
            break;
        }
    }
}

void minpercolateUp(int k, int n)
{
    int temp = heap[k];
    while (heap[n] < heap[(n / 2)] && n != 1)
    {
        heap[n] = heap[(n / 2)];
        heap[(n / 2)] = temp;
        n = n / 2;
    }
}
void minpercolateDown(int k, int n)
{
    int temp = heap[k];
    while (heap[n] < heap[(n * 2)] || heap[n] < heap[(n * 2) + 1] && n != c)
    {
        if (heap[n] < heap[(n * 2) + 1])
        {
            heap[n] = heap[(n * 2) + 1];
            heap[(n * 2) + 1] = temp;
            n = (n * 2) + 1;
        }

        else if (heap[n] < heap[(n * 2)])
        {
            heap[n] = heap[(n * 2)];
            heap[(n * 2)] = temp;
            n = n * 2;
        }
    }
}
void minincreaseKey(int pos, int newdata)
{
    for (int i = 1; i < c; i++)
    {
        if (i == pos)
        {
            heap[i] = newdata;
            minpercolateDown(i, i);
            break;
        }
    }
}
void mindecreaseKey(int pos, int newdata)
{
    for (int i = 1; i < c; i++)
    {
        if (i == pos)
        {
            heap[i] = newdata;
            minpercolateUp(i, i);
            break;
        }
    }
}
void mininsert(int data)
{
    heap[i] = data;
    int n = i;
    minpercolateUp(i, n);
    i++;
}
void maxinsert(int data)
{
    heap[i] = data;
    int n = i;
    maxpercolateUp(i, n);
    i++;
}
void maxbuildHeap()
{
    for (int i = c - 1; i >= 1; i--)
        maxpercolateUp(i, i);
}
void minbuildHeap()
{
    for (int i = c - 1; i >= 1; i--)
        minpercolateUp(i, i);
}
void deletemin()
{
    heap[0]=heap[c];
    c--;
    minpercolateDown(1,1);
}
void deletemax()
{
    heap[0]=heap[c];
    c--;
    maxpercolateDown(i,i);
}
void display()
{
    for (int i = 1; i < c; i++)
    {
        printf("%d ", heap[i]);
    }
    printf("\n");
}
void main()
{
    int pos, data, newdata, choice;
    printf("Enter the choice:\n1-maxheap\n2-minheap");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        while (1)
        {
            printf("Enter the choice:\n1-Insert\n2-Build Heap\n3-Increase Key\n4-Decrease Key\n5-Delete\n6-Display");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("Enter the data: ");
                scanf("%d", &data);
                maxinsert(data);
                break;
            case 2:
                printf("Enter the elements you want to enter: ");
                scanf("%d", &choice);
                printf("Start entering values: \n");
                for (int i = 1; i <= choice; i++)
                {
                    scanf("%d", &heap[i]);
                    c++;
                }
                maxbuildHeap(c - 1, c - 1);
                choice = 2;
                break;
            case 3:
                printf("Enter the position to be deleted: ");
                scanf("%d", &pos);
                printf("Enter the data to be overwritten: ");
                scanf("%d", &newdata);
                maxincreaseKey(pos, newdata);
                break;
            case 4:
                printf("Enter the position to be deleted: ");
                scanf("%d", &pos);
                printf("Enter the data to be overwritten: ");
                scanf("%d", &newdata);
                maxdecreaseKey(pos, newdata);
                break;
            case 5:
                deletemax();
                break;
            case 6:
                display();
                break;
            default:
                exit(0);
            }
        }
        break;
    case 2:
        while (1)
        {
            printf("Enter the choice:\n1-Insert\n2-Build Heap\n3-Increase Key\n4-Decrease Key\n5-Delete\n6-Display");
            scanf("%d", &choice);
            switch (choice)
            {

            case 1:
                printf("Enter the data: ");
                scanf("%d", &data);
                mininsert(data);
                break;
            case 2:
                printf("Enter the elements you want to enter: ");
                scanf("%d", &choice);
                printf("Start entering values: \n");
                for (int i = 1; i <= choice; i++)
                {
                    scanf("%d", &heap[i]);
                    c++;
                }
                minbuildHeap(c - 1, c - 1);
                choice = 2;
                break;
            case 3:
                printf("Enter the position to be deleted: ");
                scanf("%d", &pos);
                printf("Enter the data to be overwritten: ");
                scanf("%d", &newdata);
                minincreaseKey(pos,newdata);
                break;
            case 4:
                printf("Enter the position to be deleted: ");
                scanf("%d", &pos);
                printf("Enter the data to be overwritten: ");
                scanf("%d", &newdata);
                mindecreaseKey(pos,newdata);
                break;
            case 6:
                display();
                break;
            default:
                exit(0);
            }
        }
        break;
    }
}