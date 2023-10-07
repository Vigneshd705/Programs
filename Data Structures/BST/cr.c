#include <stdio.h>
#include <stdlib.h>

struct bnode {
    int data;
    struct bnode *lchild, *rchild;
};

struct bnode *head;

struct bnode *create(int data, struct bnode *current) {
    struct bnode *newnode = (struct bnode*)malloc(sizeof(struct bnode));
    newnode->data = data;
    newnode->lchild = NULL;
    newnode->rchild = NULL;

    if (current == NULL) {
        head = newnode;
        return head;
    }

    if (current->lchild == NULL) {
        current->lchild = newnode;
    } else if (current->rchild == NULL) {
        current->rchild = newnode;
    } else {
        // Traverse down the tree to find the appropriate place to insert.
        // You can choose a strategy (e.g., BFS or DFS) for insertion.
    }

    return newnode;
}

void display(struct bnode *current) {
    if (current != NULL) {
        printf("%d ", current->data);
        display(current->lchild);
        display(current->rchild);
    }
}

int main() {
    struct bnode *current = NULL;

    current = create(5, current);
    current = create(6, current);
    current = create(7, current);
    current = create(8,current);

    printf("Tree elements: ");
    display(head);

    return 0;
}
