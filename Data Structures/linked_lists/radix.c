#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
};
int i,j,p,t;
struct node* head,* temp,* newnode,* c,* temp1;
struct node* head0=NULL,* head1=NULL,* head2=NULL,* head3=NULL,* head4=NULL,* head5=NULL,* head6=NULL,* head7=NULL,* head8=NULL,* head9=NULL;
struct node* c0=NULL,* c1=NULL,* c2=NULL,* c3=NULL,* c4=NULL,* c5=NULL,* c6=NULL,* c7=NULL,* c8=NULL,* c9=NULL;
struct node* arr[10],* arr1[10];
int count=0;int max=0;
void create(){
	head=NULL;
	int choice=1;
	while(choice){
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->link=NULL;
		printf("Enter the data: ");
		scanf("%d",&newnode->data);
		if(head==NULL){
			head=newnode;
			temp=head;
		}
		else{
			temp->link=newnode;
			temp=newnode;
		}
		printf("do you want to continue(0,1): ");
		scanf("%d",&choice);
	}
}
void display(){
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->link;
	}
}
int con(int num){
	while(num>0){
		num/=10;
		count++;
	}
	return count;
}
int m(){;
	temp=head;
	while(temp!=NULL){
		count=0;
		int a = con(temp->data);
		if(a>=max){
			max=a;
		}
		temp=temp->link;
	}
	return max;
}
void radixsort(){
      struct node* arr[10]={head0,head1,head2,head3,head4,head5,head6,head7,head8,head9};
      struct node* arr1[10]={c0,c1,c2,c3,c4,c5,c6,c7,c8,c9};
      for(i=0;i<m();i++){
		temp=head;
		while(temp!=NULL){
			p=temp->data;
			for(j=0;j<i+1;j++){
				t=p;
				t=t%10;
				p=p/10;
			}
			if(arr[t]!=NULL){
			        arr1[t]=(struct node*)malloc(sizeof(struct node));
			        arr1[t]->data=temp->data;
			        temp1->link=arr1[t];
			        temp1=arr1[t];
			        arr1[t]->link=NULL;
			}
			else{
			        arr[t]=(struct node*)malloc(sizeof(struct node));
			        arr[t]->data=temp->data;
			        arr[t]->link=NULL;
			        temp1=arr[t];
			}
		}
		head=NULL;
		for(i=0;i<10;i++){
		        if(arr[i]!=NULL){
		                if(head==NULL){
		                        //head=(struct node*)malloc(sizeof(struct node));
		                        head=arr[i];	
			                c=head;
			                while(c->link!=NULL){
			                        c=c->link;
			                }
			        }
			        else{
			                c->link=arr[i];
			                while(c->link!=NULL){
			                        c=c->link;
			                }
			        }
		      }
	      }
	      for(i=0;i<10;i++){
	                arr[i]=NULL;
	                arr1[i]=NULL;
	      }
	}
}
	
void main(){
	create();
	display();
	printf("\n");
	radixsort();
	display();
	printf("\n");
}
