#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
struct Node*head=NULL;
void insert(int x)
{ 
	struct Node*temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=NULL;


	
	if(head==NULL)
	{
		head=temp;
		return;
	}
	struct Node*temp2=head;
		while(temp2->next!=NULL)
		{
			temp2=temp2->next;
			
		
			
		}
	temp2->next=temp;

}
void insertany()
{
	int p,d,count=1;
	printf("enter the position to insert:");
	scanf("%d",&p);
	printf("enter the element to be insert:");
	scanf("%d",&d);
	
	
	struct Node*temp = (struct Node*)malloc(sizeof(struct Node));	
	
	temp->data=d;
	temp->next=NULL;
	struct Node*temp2=head;

	if(p==1)
	{
		temp->next=temp2;
		head =temp;
		return;
		}	
	while(count!=p-1)
	{
		temp2=temp2->next;
		count++;
	}
	temp->next=temp2->next;
	temp2->next=temp;
}
void print()
{
	struct Node*temp;
	temp=head;
	printf("the linked list is :");
	while(temp!=NULL)
	{
		printf("\n%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	int i,n,x;

	printf("enter the no of elements:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the elements:");
		scanf("%d",&x);
		insert(x);
	
		print();
		
	}
		insertany();
		print();

}
