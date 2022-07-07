#include<stdio.h>
#include<stdlib.h>

struct point{
	int x;
	int y;
};
struct point edit(struct point p )
{
	(p.x)++;
	p.y =p.y+5;
	return p;
}
void print(struct point ptv r)
{
	printf("%d %d",ptr.x,ptr.y);
}
int main()
{
	struct point p1,p2;
	p1={10,20};
	p2={30,40};
	p1=edit(p1);
	p2=edit(p2);
	print(p1);
	print(p2);
	return 0;
}
