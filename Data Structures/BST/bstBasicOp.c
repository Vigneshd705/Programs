#include <stdio.h>
#include <stdlib.h>
struct bnode {
	int data;
	struct bnode *lchild,*rchild;
};
struct bnode *create(int data)
{
	struct bnode *newnode=(struct bnode*)malloc(sizeof(struct bnode));
	newnode->data=data;
	newnode->rchild=NULL;
	newnode->lchild=NULL;
	return newnode;
}
struct bnode *findMin(struct bnode *current)
{
	while(current!=NULL && current->lchild!=NULL)
	{
		current=current->lchild;
	}
	return current;
}
struct bnode *findMax(struct bnode *current)
{
	while(current!=NULL && current->rchild!=NULL)
	{
		current=current->rchild;
	}
	return current;
}
struct bnode *insert(struct bnode* root,int data)
{
	if (root==NULL)
		root=create(data);
	else if(root->data>data)
		root->lchild=insert(root->lchild,data);
	else if (root->data<data)
		root->rchild=insert(root->rchild,data);
	else if(root->data==data)
		printf("%d already exists!",data);
	return root;
}
struct bnode *delete(struct bnode *root, int data)
{
    if (root == NULL)
    {
        printf("Element Not Found\n");
        return root;
    }

    if (data < root->data)
    {
        root->lchild = delete(root->lchild, data);
    }
    else if (data > root->data)
    {
        root->rchild = delete(root->rchild, data);
    }
    else 
    {
        if (root->lchild == NULL)
        {
            struct bnode *temp = root->rchild;
            free(root);
            return temp;
        }
        else if (root->rchild == NULL)
        {
            struct bnode *temp = root->lchild;
            free(root);
            return temp;
        }

        struct bnode *temp = findMin(root->rchild);
        root->data = temp->data;
        root->rchild = delete(root->rchild, temp->data);
    }
    return root;
}
struct bnode *search(struct bnode *root,int data)
{
	if(root->data>data)
		root->lchild=search(root->lchild,data);
	else if (root->data<data)
		root->rchild=search(root->rchild,data);
	else if(root->data==data)
		printf("%d found",data);
	return root;
}
void inorder(struct bnode *root)
{
	if(root!=NULL){
		inorder(root->lchild);
		printf("%d ", root->data);
		inorder(root->rchild);
	}

}
void preorder(struct bnode *root)
{
	if(root!=NULL){
		printf("%d ", root->data);
		inorder(root->lchild);
		inorder(root->rchild);
	}

}
void postorder(struct bnode *root)
{
	if(root!=NULL){
		inorder(root->lchild);
		inorder(root->rchild);
		printf("%d ", root->data);
	}

}
void main()
{
	struct bnode *root;
	int data,choice;
	while(1)
	{
	printf("\nEnter your choice: \n1.insert \n2.delete \n3.search \n4.findMin \n5.findMax\n6.display\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("Enter data: ");
		scanf("%d",&data);
		root=insert(root,data);
		break;
	case 2:
		if(root==NULL)
			printf("Empty");
		else
			{printf("Enter data: ");
			scanf("%d",&data);
			root=delete(root,data);}
		break;
	case 3:
		if(root==NULL)
			printf("Empty");
		else{
			printf("Enter data: ");
			scanf("%d",&data);
			root=search(root,data);}
		break;
	case 4:
		if(root==NULL)
			printf("Empty");
		else
			{struct bnode *n=findMin(root);
			printf("%d",n->data);}
		break;
	case 5:
		if(root==NULL)
			printf("Empty");
		else
			{struct bnode *n=findMax(root);
			printf("%d",n->data);}
		break;
	case 6:
		inorder(root);
		break;
	default:
		exit(0);
	}
}
}