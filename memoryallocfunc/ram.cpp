#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n;
	
	printf("enter no of integer:");
	scanf("%d",&n);
	int *ptr=(int *)malloc(n*sizeof(int));

	if(ptr==NULL)
	{
		printf("memory na");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("enter the integer :");
		scanf("%d",ptr+i);
			
	}
	for(i=0;i<n;i++)
	{
		printf("%d",*(ptr+i));
		
	}
	printf("\nenter no of integer:");
	scanf("%d",&n);
	ptr=(int*)realloc(ptr,4*sizeof(int));
		for(i=2;i<n;i++)
	{
		printf("enter the integer :");
		scanf("\n%d",ptr+i);
			
	}
		for(i=0;i<n;i++)
	{
		printf("%d",*(ptr+i));
		
	}
	return 0;
}
