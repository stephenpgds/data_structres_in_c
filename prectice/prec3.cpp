#include<stdio.h>
#include<stdlib.h>
struct node{
	int data; 
	struct node*prev;
	struct node*next;
};
struct node*head=NULL;
void reverseprint()
{
	struct node*temp=head;
	if(temp==NULL)
	return;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	printf("reverse:");
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->prev;
	}
	printf("\n");
}
struct node* getnewnode(int x)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->prev=NULL;
	temp->next=NULL;
	return temp;
}
void insertathead(int d)
{
	struct node*temp=getnewnode(d);
	if(head==NULL)
	{
		head=temp;
		return;
	}
		head->prev=temp;
		temp->next=head;
		head=temp;
	
}
void print()
{
	struct node*temp=head;
	printf("forward:");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int i,n,x;
	printf("enter the no of elements:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter the elements:");
		scanf("%d",&x);
		insertathead(x);
	print();
	reverseprint();
	}
	
}
