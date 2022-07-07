#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
	
};
struct node*head=NULL;

void push()
{
	int d;
	printf("enter the data:");
	scanf("%d",&d);
	 struct node*temp=(struct node*)malloc(sizeof(struct node));
	 struct node*temp1=head;
	 temp->data=d;
	 temp->next=head;
	 head=temp;
	
	
}
void print()
{
	struct node*temp;
	temp=head;
	while(temp!=NULL)
	{
			printf("%d",temp->data);
		temp=temp->next;
	
	}
	
}
void pop()
{
	
}
int main()
{
		int choice;
	do
	{
		printf("\n");
		printf("1.push\n");
		printf("2.print\n");
	//	printf("3.pop\n");
		printf("4.exit\n");
		printf("\n");
		printf("enter the choice:");
		scanf("%d",&choice);	
		
	
	
	switch(choice)
	{
		case 1:
			push();
			break;	
		case 2:
			print();
			break;
		case 3:
			pop();
			break;
		default:
			printf("wrong choice");
			
		}
	}while(choice!=4);
	return 0;
}
