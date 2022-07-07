#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*prev;
	struct node*next;
};
struct node*head=NULL;
 void insertatend(int 
 d)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	struct node*temp1=head;
	temp->data=d;
	temp->next=NULL;
	temp->prev=NULL;
	if(head==NULL)
	{
		head=temp;
		return;
	}
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
		
		}	
		temp1->next=temp;
		temp->prev=temp1;
		
		
	

}
void print()
{
	struct node*temp=head;
	while(temp!=NULL)
	{
		
		printf("%d",temp->data);
		temp=temp->next;
		printf("\n");
	}
}
void insertatany()
{
	int count=1,d,p;
	printf("enter the pos:");
	scanf("%d",&p);
	printf("enter the element to insert:");
	scanf("%d",&d);
	
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	struct node*temp1=head;
	temp->data=d;
	temp->next=NULL;
	temp->prev=NULL;
	while(count!=p-1)
	{
		
		temp1=temp1->next;
		count++;
	}
	temp->next=temp1->next;
	temp1->next=temp;
	temp->prev=temp1;
	temp->next->prev=temp;
	
}
int main()
{
	int i,n,x;
	printf("enter the no of elements:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("enter the elements");
		scanf("%d",&x);
		insertatend(x);
		print();
		
	}
	insertatany();
		print();
	
}
