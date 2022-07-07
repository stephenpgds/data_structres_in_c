#include<stdio.h>

int main()
{
	int x,y,z,a,b,f;
	float c,d;
	printf("enter the x :");
	scanf("%d",&x);
	printf("enter the y :");
	scanf("%d",&y);
	printf("enter the z :");
	scanf("%d",&z);
	printf("enter the a :");
	scanf("%d",&a);
	printf("enter the b :");
	scanf("%d",&b);
	f=z*x*y;
	c=a/b;
	d=f*c;
	printf("the value is :%.f",d);
}
