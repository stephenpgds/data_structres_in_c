#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
	struct node*prev;
};

struct node*head=NULL;
void insertatend(int d)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	 struct node*temp1=head;
	 temp->prev=NULL;
	 temp->data=d;
	 temp->next=NULL;
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
 		
 		printf("\n %d",temp->data);
	 
 		
 		temp=temp->next;
	}
 }
 void reverse()
 {
 	struct node *temp=head;
 	struct node*temp2=temp->next;
 	temp->next=NULL;
 	temp->prev=temp2;
 	while(temp!=NULL)
 	{
 		temp2->prev=temp2->next;
 		temp2->next=temp;temp=temp2;
 		temp2=temp2->prev;
 		printf("%d \n",temp->data);
	 }
 }
int main()
{
	int x,i,n;
	printf("enter the no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the elements:");
		scanf("%d",&x);
		insertatend(x);
		print();
	}	
	
		reverse();
		print();
}
