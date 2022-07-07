#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node*next;
	int data;
	struct node*prev;
	
};
struct node* head=NULL;
void insert(int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	temp->prev=NULL;
	
	if(head==NULL)
	{
		head=temp;
		return;
	}
	struct node*temp1=head;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
		
	}
	temp1->next=temp;
	temp-prev=
	
}
void print()
{
	
}

int main()
{
	
	int n,i,x;
	printf("enter the no of elements:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the element:");
		scanf("%d",&x);
		insert(x);
	print();
	}
}
