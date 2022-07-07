#include<stdio.h>
#include<stdlib.h>

struct node{
	int data; 
	struct node*next;
	struct node*prev; 
};
struct node*head=NULL;
struct node*tail;
void insertatbeg()
{
	int d;
	printf("enter the data:");
	scanf("%d",&d);
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=d;
	temp->next=head;
	temp->prev=head;
	if(head==NULL)
	{
		head=temp;
		tail=head;
	}
	else{
	/*	temp->next=head;
		temp->prev=head;
		temp->next->prev=temp;
		temp->next->next=temp;
		head=temp;
	*/
	temp->next=head;
	head->prev=temp;
	temp->prev=tail;
	tail->next=temp;
	head=temp;
	}
	

	 
	
}
void print()
{
	struct node *temp=tail->next;
	do
	{
			printf("%d\n",temp->data);
		temp=temp->next;
	
	}while(temp!=tail->next);
}
void insertatany()
{
	int pos,count=1,d;
	printf("enter the pos:");
	scanf("%d",&pos);
	printf("enter the data:");
	scanf("%d",&d);
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	struct node*temp2=head;
	struct node*temp1=head;
	temp->data=d;
	temp->next=NULL;
	temp->prev=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else{
			while(count!=pos)
	{
		count++;
		temp2=temp2->next;
	}
	temp->prev=temp2->prev;
	temp->next=temp2;
	temp2->prev=temp;
	temp->prev->next=temp;	
	}

}
void insertatend()
{
	int d;
	printf("enter the data:");
	scanf("%d",&d);
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	struct node*temp2=head;
	temp->data=d;

	if(head==NULL)
	{
		head=temp;
		temp->next=temp;
		temp->prev=temp;
		tail=head;
	}
	else{
		while(temp2->next!=head)
		{
			temp2=temp2->next;
		}
	//	temp->next=temp2->next;
		temp->prev=temp2;
		temp2->next=temp;
		head->prev=temp;
		temp->next=head;
		tail=temp;
	//	temp->next->prev=temp;
	
	}
	
}
void deleteatbeg()
{
	struct node*temp=head;
	head=head->next;
	head->prev=NULL;
	free(temp);
	temp=NULL;
}
void deleteatany()
{
	int pos,count=1;
	printf("enter the pos:");
	scanf("%d",&pos);
	struct node*temp=head;
	struct node*temp2;
	while(count!=pos)
	{
		count++;
		temp2=temp;
		temp=temp->next;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(temp);
	temp=NULL;
}
void deleteatend()
{
	struct node*temp=head;
	struct node*temp2;
	while(temp->next!=NULL)
	{
		temp2=temp;
		temp=temp->next;
		
	}
	temp2->next=NULL;
	free(temp);
	temp=NULL;
}
int main()
{
	int n,i,c;
	do{
		printf("1.insertatbeg\n2.insertatany\n3.insertatend\n4.deleteatbeg\n5.delatany\n6.delatend\n7.print\n");
		printf("enter the choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				insertatbeg();
				break;
			case 2:
				insertatany(); 
				break;
			case 3:
				insertatend();
				break;
			case 4:
				deleteatbeg();
				break;
			case 5:
				deleteatany();
				break;
			case 6:
				deleteatend();
				break;
			case 7:
				print();
				break;
			default:
				printf("wrong entry");
				
				
				
		}
		
	}while(c!=8);
}
