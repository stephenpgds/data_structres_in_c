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
void dec2bin(int num)
{
	
	while(num!=0)
	{
		push(num%2);
		num=num/2;
	}
	
}

void print()
{
	int val;
	while(top!=-1)
	{
			val=sarr[top];
	top=top-1;
	printf("%d",val);
	}

	
}
int main()
{
	int num;
	printf("enter the dec number:");
	scanf("%d",&num);
	dec2bin(num);
	print();
}
