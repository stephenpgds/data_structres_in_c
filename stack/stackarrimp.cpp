#include<stdio.h>
# define max 10

int sarr[max];
int top=-1;

void push()
{
	int e;
	printf("enter the element to push:");
	scanf("%d",&e);
	if(top==max-1)
	{
		printf("stack is overflow");
		return;
	}
	top++;
	sarr[top]=e;
	
}

void pop()
{
	int value;
	if(top==-1)
	{
		printf("stack is underflow");
		return;
	}
	value=sarr[top];
	top--;
	printf("the poped value is: %d",value);
	
}
void peek()
{
		if(top==-1)
	{
		printf("stack is underflow");
		return;
	}
	printf("the top most element is: %d",sarr[top]);
}

void print()
{
	int i;
		if(top==-1)
	{
		printf("stack is underflow");
		return;
	}
	printf("the stack is:");
	for(i=0;i<=top;i++)
	{
		printf("%d",sarr[i]);
	}
}


int main()
{
	int choice;
	do
	{
		printf("\n");
	
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.peek\n");
		printf("4.print\n");
		printf("5.exit\n");
		printf("\n");
		printf("enter the choice:");
		scanf("%d",&choice);	
		
	
	
	switch(choice)
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
		case 5:
			break;
		default:
			printf("wrong choice");
			
		}
	}while(choice!=5);
	return 0;
}
