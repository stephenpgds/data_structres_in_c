#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*prev;
	struct node*next;
};
struct node*head=NULL;
 void insertatend(int d)
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
	
	

}
void insertatany()
{
		int e,pos,count=1;
		printf("enter the pos:");
	scanf("%d",&pos);
	printf("enter the element:");
	scanf("%d",&e);
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=e;
	struct node*temp1=head;

	
	while(count!=pos){
		count++;
		temp1=temp1->next;
	}
	temp->next=temp1;
	temp->prev=temp1->prev;
	temp->prev->next=temp;
	temp->next->prev=temp;
	
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
		insertatend(x);
		print();
	}
	insertatany();
	print();
}
