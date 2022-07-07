#include<stdio.h>
#include<stdlib.h>
struct node{
	int expo;
	float coeff;
	struct node*next;
};

struct node* create(struct node*head)
{
	int n,coeff,i;
	float expo;
	printf("enter the no of elements:");
	for(i=0;i<n;i++)
	{
		printf("enter the coeff:");
		scanf("%f",&coeff);
		printf("enter the expo:");
		scanf("%d",&expo);
	head=insert(head,coeff,expo);	
	}
	return head;
}
struct node*insert(struct node*head,float co,int ex)
{
	struct node*head1=NULL;
	struct node*head2=NULL;
	struct node*newp=(struct node*)malloc(sizeof(struct node));
	newp->coeff=co;
	newp->expo=ex;
	newp->next=NULL;
	if(head==NULL || ex > head->expo)
	{
		newp->next=head;
		head=newp;
	
	}
	else{
		while(newp->next!=NULL && )
	}
	
	
}
int main()
{
	struct node*head=NULL;
	struct node*head1=NULL;
	struct node*head2=NULL;
	printf("enter the polynomial:");
	printf("enter the 1st polynomail:");
	head1=create(head1);
	printf("enter the 2nd polynomail:");
	head2=create(head2);
	polyadd(head1,head2);

}
