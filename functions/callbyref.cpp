#include<stdio.h>
#include<stdlib.h>
struct charset{
	char a;
	int i;
};
keyvalue(char *p,int *q)
{
		scanf("%c %d",p,q);
		printf("%c %d",(*p),(*q));
}
int main()
{
	struct charset cs;
	keyvalue(&cs.a,&cs.i);
	return 0;
}
