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
 		
 		printf("%d",temp->data);
	 
 		
 		temp=temp->next;
	}
 }
 void deleteatanypos()
 {
 	struct node *temp=head;
 	struct node*temp2;
 	int count=1,pos;
 	printf("enter the pos");
 	scanf("%d",&pos);
 	while(count!=pos)
 	{
 		count++;
 		temp=temp->next;
 		
	 }
	 //temp2=temp->prev;
	 temp->next->prev=temp->prev;
	 temp->prev->next=temp->next;
	 free(temp);
 }
int main()
{
	int x,i,n;
	printf("enter the no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the elements:");
		scanf("%d",&x);
		insertatend(x);
		print();
	}	
	
		deleteatanypos();
		print();
}
