#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head;
struct Node*tail;
void insert(int x){

struct Node*temp =(Node*)malloc(sizeof(struct Node));
//struct Node* tail; 

temp->data=x;
if(head==NULL)
{
	head=temp;
	tail=temp;
	temp->next=head;
}
else{

	tail->next=temp;
	tail=temp;
	tail->next=head;
}
}

void insertatany()
{
	int pos,count=1,e;
	printf("enter the pos to insert:");
	scanf("%d",&pos);
	printf("enter the element:");
	scanf("%d",&e);
	struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=e;
	struct Node*temp1=head;
	struct Node*temp2;
	
	
	while(count!=pos)
	{
		count++;
		temp2=temp1; 	
		temp1=temp1->next;
		
	}
	
	temp->next=temp1;
	temp2->next=temp;
	
	
	
	
}
void print(){
	struct Node*temp;
	temp=head;
	printf("the list is:");
	do
	{
		
		printf(" %d ",temp->data);
		temp=temp->next;
		
	}	while(temp!=head);
	printf("\n");
	
}
int main()
{
	head=NULL;
	printf("how many no to insert:");
	int i,n,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the numbers");
		scanf("%d",&x);
		insert(x);
		print();
	}
	insertatany();
	print();
}
