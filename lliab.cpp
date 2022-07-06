#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head;
void insert(int x){

struct Node* temp =(Node*)malloc(sizeof(struct Node));
temp->data=x;
temp->next=head;
head = temp;

	
}

void print(){
	struct Node*temp;
	temp=head;
	printf("the list is:");
	while(temp!=NULL)
	{
		printf(" %d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
	
}
int main()
{
	head=NULL;
	printf("how many no to insert");
	int i,n,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the numbers");
		scanf("%d",&x);
		insert(x);
		print();
	}
}
