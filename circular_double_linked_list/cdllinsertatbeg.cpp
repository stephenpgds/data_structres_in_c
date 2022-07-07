#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*prev;
	struct node*next;
};
struct node*head=NULL; 
 void insertatbeg(int d)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	struct node*temp1;
	temp->data=d;

	if(head==NULL)
	{
		head=temp;
		temp->next=head;
		temp->prev=head;
	
	}
	temp1=head;	
	while(temp1->next!=head)
	{
		temp1=temp1->next;
	}
	temp1->next=temp;
	
	temp->prev=temp1;
	head->prev=temp;
	temp->next=head;
	head=temp;
	

}
void  print()
{
	struct node*temp=head;
	do
	{
		
		printf("%d",temp->data);
		temp=temp->next;
		printf("\n");
	}	while(temp!=head);
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
		insertatbeg(x);
		print();
	}
	
}
