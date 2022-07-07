#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*prev;
	struct node*next;
};
struct node*head=NULL;
int main()
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=5;
	temp->next=NULL;
	temp->prev=NULL;
	head=temp;
	printf("%d",temp->data);
	
} 
