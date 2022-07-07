#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*head=NULL;
void insert(int d)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=d;
	temp->next=NULL;
	struct node*temp2=head;
	if(head==NULL)
	{
		head=temp;
		return;
	}
	while(temp2->next!=NULL)
	{
		temp2=temp2->next;
		
	}
	temp2->next=temp;
}
 void print()
{
	struct node*temp=head;
	while(temp!=NULL);
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int n,i,d;
	printf("enter the no of nodes:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the elements:");
		scanf("%d",&d);
		insert(d);
		print();
	}
}
