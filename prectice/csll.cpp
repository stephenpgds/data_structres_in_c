#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
	
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
	}
		cptr->next=temp;
	cptr=temp;
	cptr->next=head;
	
}
void print()
{ 
	struct node*temp=head;
	do
	{
		
		printf("%d",temp->data);
		temp=temp->next;
		
	}while(temp!=cptr->next);
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
