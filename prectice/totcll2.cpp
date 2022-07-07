#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
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
//	temp->next=temp;
	if(head==NULL)
	{
		head=temp;
		tail=head;
		temp->next=head;
	}
	temp->next=tail->next;
	tail->next=temp;
	

	
	
}
void print()
{
	struct node *temp=tail->next;
	do{
		printf("%d\n",temp->data);
		temp=temp->next;
	}while(temp!=tail->next);
	printf("\n");
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
	//temp->next=NULL;
	if(head==NULL)
	{
		head=temp; 
	}
	else{
			while(count!=pos-1)
	{
		count++;
		temp2=temp2->next;
	}
	temp->next=temp2->next;
	temp2->next=temp;
		
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
		tail=head;
		temp->next=head;
		
	}
	else{
	temp->next=tail->next;
	tail->next=temp;
	tail=tail->next;	

		
	}
}
void deleteatbeg()
{
	struct node*temp=head;
	head=head->next;
	tail->next=temp->next;
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
	temp2->next=temp->next;
	free(temp);
	temp=NULL;
}
void deleteatend()
{
	struct node*temp=head;
	struct node*temp2;
	while(temp->next!=tail)
	{
		temp=temp->next;
		
	}
	temp->next=tail->next;
	temp2=tail;
	tail=temp;
	free(temp2);
	temp2=NULL;
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
