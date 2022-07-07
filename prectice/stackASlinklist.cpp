#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};
struct node*top=NULL;
void push()
{
	int d;
	printf("enter the data:");
	scanf("%d",&d);
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=d;
	temp->next=NULL;
	if(temp==NULL)
	{
		printf("stack under flow");
		return;
	}
	temp->next=top;
	top=temp;
}
void pop()
{
	int val,i;
	printf("the poped element  are:");
	struct node*temp=top;
	val=temp->data;
	if(temp==NULL)
	{
		printf("overflow");
	}
	
	top=top->next;
	free(temp);
	printf("%d\n",val);
}

void peek()
{
	struct node*temp=top;
	if(top==NULL)
	{
		printf("stack is underflow");
		
	}
	printf("%d",temp->data);
}
void print()
{
	struct node*temp=top;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	
	}
}
int main()
{
	int i,c;

		do
		{
			printf("1.push\n");
			printf("2.pop\n");
			printf("3.peek\n");
			printf("4.print\n");
			printf("enter the choice:");
			scanf("%d",&c);
			switch(c)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				print();
				break;
			default:
				printf("rng choice");
	}
		}while(c!=5);
	
		
	
	}
