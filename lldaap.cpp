#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
struct Node*head=NULL;
void Delete()
{   int p,count=1;
     printf("enter the pos to del: ");
      scanf("%d",&p);
	if(head==NULL)
	{
		printf("No node to delete");
		return;
	}
	struct Node*temp2=head;
	struct Node*temp3=head;
	if(p==1)
	{
		head=temp2->next;
		free(temp2);
	}
		while(count!=p)
		{
			temp3=temp2;
			temp2=temp2->next;
			count++;
		}
		temp3->next=temp2->next;
		free(temp2);
	

}
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
		Delete();	
		print();
}
