#include<stdio.h>
#include<stdlib.h>
#define max 50
int top=-1,n;
int arr[max];
void push()
{
	int d;
	printf("enter the data:");
	scanf("%d",&d);
	if(top==max-1)
	{
		printf("stack over flow");
		return;
	}
	else
	{
		top=top+1;
		arr[top]=d;
		
	}
}
void pop()
{
	int val,i;
	printf("the poped element  are:");
	
	val=arr[top];
	top=top-1;
	printf("%d\n",val);
}

void peek()
{
	if(top==-1)
	{
		printf("stack is underflow");
		
	}
	printf("%d",arr[top]);
}
void print()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d\n",arr[i]);
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
