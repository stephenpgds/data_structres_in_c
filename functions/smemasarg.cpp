#include<stdio.h>
#include<stdlib.h>
struct std1{
	char name[50];
	int age;
};
void print(char name[],int age)
{
	printf("%s %d",name,age);
	
}
int main()
{
	struct std1 s1 = {"suchi",20};
	print(s1.name,s1.age);
}
