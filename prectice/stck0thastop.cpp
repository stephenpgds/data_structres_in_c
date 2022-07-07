#include<stdio.h>
#include<stdlib.h>
#define max 50
int first=-1;
int arr[max];
void push()
{
	int d,i;
	printf("enter the data:");
	scanf("%d",&d);
	first=first+1;
	
	if(first==max-1)
	{
		printf("stack over flow");
		return;
	}
	for(i=first;i>0;i--)
	{
		
			arr[i]=arr[i-1];
			
	}
	arr[0]=d;
		
	
}
void pop()
{
	int val,i;
	printf("the poped element  are:");
	
	val=arr[0];
	for(i=0;i<first;i++)
	{
		arr[i]=arr[i+1];
	}
	printf("%d\n",val);
}

void peek()
{
	if(first==-1)
	{
		printf("stack is underflow");
		
	}
	printf("%d",arr[0]);
}
void print()
{
	int i;
	for(i=0;i<=first;i++)
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
