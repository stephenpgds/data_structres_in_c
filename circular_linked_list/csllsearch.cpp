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

void search()
{

	int s,index=1;
	struct Node*temp=head;
	
	printf("enter the element to search:");
	scanf("%d",&s);
	 do{
		if(temp->data==s)
		{
			printf("\nthe index is %d",index);
		}
	
			index++;
			temp=temp->next;	
	}while(temp->next!=head);
	

	
	
	
	
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
	search();
	//print();
}
