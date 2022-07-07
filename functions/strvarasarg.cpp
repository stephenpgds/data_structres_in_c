#include<stdio.h>
#include<stdlib.h>
struct point{
	int x;
	int y;
};
void print(struct point p)
{
	printf("%d %d",p.x,p.y);
}
int main()
{
	struct point p1,p2;
	p1={10,20};
	p2={30,40};
	print(p1);
	print(p2);
	return 0;
}
