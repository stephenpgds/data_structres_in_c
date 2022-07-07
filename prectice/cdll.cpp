#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
	struct node*prev;
	
};
struct node*head=NULL;
struct node*cptr;
void insert(int d)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=d;
	
	if(head==NULL){
		head=temp;
		cptr=temp;
		temp->next=cptr;
		temp->prev=cptr;
	}
	cptr->prev=temp;
	cptr->next=temp;
	temp->prev=cptr;
	cptr=temp;
	
	temp->next=head;
	
	
}
void print()
{ 
	struct node*temp=head;
	do
	{
		
		printf("%d",temp->data);
		temp=temp->next;
		
	}while(cptr!=temp->prev);
}

int main()
{
	int i,n,x;
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
