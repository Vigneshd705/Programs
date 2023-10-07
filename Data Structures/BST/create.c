#include <stdio.h>
#include <stdlib.h>
struct bnode
{
    int data;
    struct bnode *lchild,*rchild;
};
struct bnode *head;
struct bnode *create(int data,struct bnode *current)
{
    struct bnode *prev,*lcurrent,*rcurrent;
    struct bnode *newnode=(struct bnode*)malloc(sizeof(struct bnode));
    prev=current;
    if (head==NULL)
    {
        head=newnode;
        current=head;
    }
    else if(current->lchild==NULL)
    {
        current->lchild=newnode;
        lcurrent=current->lchild;
    }
    else if (current->lchild!=NULL)
    {
        current->rchild=newnode;
        rcurrent=current->rchild;
    }
    else if (current->lchild!=NULL && current->rchild!=NULL)
    {
        create(data,lcurrent);
    }
    current->data=data;
    return current;
}
void display(struct bnode *current)
{
    struct bnode *lcurrent,*rcurrent;
    //printf("%d",current->data);
  while(current->lchild!=NULL || current->rchild!=NULL)
  {
    if (current->lchild!=NULL)
    {
        lcurrent=current->lchild;
        printf("%d",lcurrent->data);
    }
    else if(current->rchild!=NULL)
    {
        rcurrent=current->rchild;
        printf("%d",rcurrent->data);
        display(lcurrent);
    }
  }  
}
void main()
{
    struct bnode *current; 
    current=create(5,current);
    current=create(6,current);
    current=create(7,current);
    display(head);
}