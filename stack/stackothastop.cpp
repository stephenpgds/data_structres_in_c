#include<stdio.h>
# define max 10

int sarr[max];
int first=-1;
void push()
{
	int e,i;
	first+=1;
	printf("enter the element to push:");
	scanf("%d",&e);

	for(i=first;i>0;i--)
	{
		
		sarr[i]=sarr[i-1];
		
	}
	sarr[0]=e;
	
}



void print()
{
	int i;
		if(first==-1)
	{
		printf("stack is underflow");
		return;
	}
	printf("the stack is:");
	for(i=0;i<=first;i++)
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
		printf("2.print\n");
		printf("3.exit\n");
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
		default:
			printf("wrong choice");
			
		}
	}while(choice!=3);
	return 0;
}
