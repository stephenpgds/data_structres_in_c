#include<stdio.h>
#include<conio.h>
struct point{
	int x;
	int y;
};

void print(struct point arr[])
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("%d %d",arr[i].x,arr[i].y);
	}
}
int main()
{
	struct point arr[2]={{1,2},{4,5}};
	print(arr);

}
