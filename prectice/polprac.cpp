#include<stdio.h>
#include<stdlib.h>

struct node{
	int expo;
	float coeff;
	struct node*next;
};
void print(struct node*head)
{
	struct node*temp=head;
	while(temp!=NULL)
	{
		printf("%.1f X ^%d",temp->coeff,temp->expo);
		temp=temp->next;
		if(temp!=NULL)
			{
				printf("+");
				
			}
		else{
			printf("\n");
		}
	}
}
struct node* insert(struct node*head,float coeff,int expo)
{
	int ex;
	float co;
		printf("enter the coeff:");
		scanf("%f",&co);
		
		printf("enter the expo:");
		scanf("%d",&ex);
		
		struct node*temp=(struct node*)malloc(sizeof(struct node));
		temp->coeff=co;
		temp->expo=ex;
		temp->next=NULL;
		if(head==NULL|| ex > head->expo)
		{
			temp->next=head;
			head=temp;
		}
		else{
			struct node*temp1=head;
			while(temp1->next!=NULL && temp1->next->expo > ex)
			{
				
				temp1=temp1->next;
				
			}
			temp->next=temp1->next;
			temp1->next=temp;
			
			 
		}
		return head;
}
void addpoly(struct node*head1,struct node*head2)
{
	struct node*ptr1=head1;
	struct node*ptr2=head2;
	struct node*head3=NULL;
	while(ptr1!=NULL&&ptr2!=NULL)
	{
		if(ptr1->expo==ptr2->expo)
		{
			head3=insert(head3,ptr1->coeff+ptr2->coeff,ptr1->expo);
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		else if(ptr1->expo > ptr2->expo)
		{
			head3=insert(head3,ptr1->coeff,ptr1->expo);
			ptr1=ptr1->next;
		}
		else if(ptr1->expo < ptr2->expo)
		{
			head3=insert(head3,ptr2->coeff,ptr2->expo);
			ptr2=ptr2->next;
		}
	}
	while(ptr1!=NULL)
	{
		head3=insert(head3,ptr1->coeff,ptr1->expo);
		ptr1=ptr1->next;
	}
	while(ptr2!=NULL)
	{
		head3=insert(head3,ptr2->coeff,ptr2->expo);
		ptr2=ptr2->next;
	}
	printf("added poly:\n");
	print(head3);
}


int main()
{
	struct node*head1=NULL;
	struct node*head2=NULL;
	int n,i;
	printf("enter the polynomial:\n");
	printf("enter the no of elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
		head1=insert(head1,0,0 );
		printf("enter the 2 poly:\n");
		head2=insert(head2,0,0);
		addpoly(head1,head2);	
	}
	print(head1);
	printf("the 2nd poly is:\n");
	print(head2);
}
