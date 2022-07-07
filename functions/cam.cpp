#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n=4;
	int *ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("mna");
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",*(ptr+i));
	}
	return 0;
}
