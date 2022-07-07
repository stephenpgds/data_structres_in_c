#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100

int top =-1;
char stack[max];

int match_char(char a,char b)
{
	if(a == '[' && b == ']')
	{
	return 1;
	}	
	if(a == '(' && b == ')')
	{
		return 1;
	}
	if(a == '{' && b == '}')
	{
		return 1;
	}
 		return 0;
}
void push(char s)
{
	if(top==max-1)
	{
		printf("over flow");
	}
	top=top+1;
	stack[top]=s;
	
}
char pop()
{
	char val=stack[top];
	top=top-1;
	return val;
}
int check_balanced(char * s)
{
	int i;
	char temp;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i] == '(' || s[i] == '{' || s[i] == '[')
		{
			push(s[i]);
		}
		if(s[i] == ')' || s[i] == '}' || s[i] == ']')
		{
			if(top == -1)
			{
				printf("right brackets are more than the left");
				return 0;
			}
			else
			{
				temp=pop();
				if(match_char(temp,s[i]))
				{
				//	printf("mis matched brackets");
				
				
				
				
				
				
					return 1;
				}
			}
		}
	}
}

int main()
{
	int balanced;
	char expr[max];
	printf("enter the algebric expression:");
	gets(expr);
	balanced=check_balanced(expr);  
	if(balanced == 1)
	{
		printf("balanced");
	}
	else{
		printf("un balanced");
	}
	return 0;
}
