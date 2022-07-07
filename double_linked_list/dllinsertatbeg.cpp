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
	temp->data=d;
	temp->next=NULL;
	temp->prev=NULL;
	if(head==NULL)
	{
		head=temp;
		return;
	}	
	temp->next=head;
	head->prev=temp;
	head=temp;
	

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
