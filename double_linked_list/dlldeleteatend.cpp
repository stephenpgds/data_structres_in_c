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
void deleteatend()
{
	printf("the list is:\n");
	struct node*temp2=head;
	struct node*temp1=NULL;
	while(temp2->next!=NULL)
	{
		// method1 temp1=temp2;
		temp2=temp2->next;
		
	}
	// method2 temp1=temp2->prev;
	free(temp2);
	temp1->next=NULL;
	
	
	
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
	deleteatend();
	print();
	
}
