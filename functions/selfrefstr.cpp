#include<stdio.h>
#include<stdlib.h>
struct self{
	int i;
	char c;
	struct self *ptr;
};

int main()
{
	struct self var1,var2;
	var1.i=11;
	var1.c='A';
	var1.ptr=NULL;
	var2.i=22;
	var2.c='B';
	var2.ptr=NULL;
	var1.ptr=&var2;
	printf("%d %c",var1.ptr->i,var1.ptr->c);
}
