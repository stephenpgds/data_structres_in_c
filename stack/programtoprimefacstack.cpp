#include<stdio.h>
#include<stdlib.h>
# define max 100
int top=-1;
int sarr[max];

void push(int i)
{
	if(top==max-1)
	{
		printf("stack is overflow");
		
	}
	top=top+1;
	sarr[top]=i;
}
void prime(int num)
{
	int i=2;
	while(num!=1)
	{
		while(num%i==0)
		{
			push(i);
			num=num/i;
		}
		i++;
	}
	
}

void print()
{
	int i;
	if(top==-1)
	{
		printf("the stack is underflow");
	}
	for(i=0;i<=top;i++)
	{
	printf("%d\n",sarr[i]);	
	}
	
}
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	prime(num);
	print();
}
