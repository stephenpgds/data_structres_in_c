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

void deleteatbeg()
{

	struct Node*temp=head;
	struct Node*temp1=tail;
	head=head->next;
	tail->next=temp->next;
	free(temp);

	
	
	
	
	
	
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
	deleteatbeg();
	print();
}
