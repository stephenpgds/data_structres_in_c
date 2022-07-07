#include<stdio.h>
#include<stdlib.h>

struct node{
	float coeff;
	int expo;
	struct node*next;
};
struct node* insert(struct node*head,float co,int ex)
{
	struct node* newp =(struct node*)malloc(sizeof(struct node));
	struct node*temp;
	newp->coeff=co;
	newp->expo=ex;
	newp->next=NULL;
	if(head==NULL ||ex > head->expo)
	{
		newp->next=head;
		head=newp;
		
	}
	else{
		
			temp=head;
			while(temp->next!=NULL && temp->next->expo > ex)
			temp=temp->next;
			newp->next=temp->next;
			temp->next=newp;
		}
		return head;
}
struct node* create(struct node* head)
{
	int i,expo,n;
	float coeff;
	printf("enter the no of elements:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the coeff for term %d:",i+1);
		scanf("%f",&coeff);
		printf("enter the expo for term %d:",i+1);
		scanf("%d",&expo);
		head=insert(head,coeff,expo);
		
	}
	return head;
}

void print(struct node* head)
{

	
		if(head==NULL)
		{
			printf("no poly");
		}		
		else
		{
			
			
			struct node* temp=head;
			while(temp!=NULL)
		{
			printf("%.1fX^%d",temp->coeff,temp->expo);
			temp=temp->next;
			if(temp!=NULL)
			{
			printf(" + ");	
			}
		else
			{
			printf("\n");
			}
			
    	}
		}
}
int main()
{
	struct node*head=NULL;
	printf("enter the polynomial:\n");
	head=create(head);
	print(head);
}
