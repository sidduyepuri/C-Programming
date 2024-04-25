//Exercise 4-3. Given the basic framework, it's straightforward to extend the calculator. Add the modulus (%) operator and provisions for negative numbers.
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
void push(double); 
double pop(void);
int sp=0;
double stack[100];
void clear(void);
void swap(void);
void print(char ch);
void duplicate(void);
void top(void);
int main()
{
	int i=0,tmp;
	char str[100],ch;
	while(1)
	{
		scanf(" %[^\n]s",str);
		printf("enter variable:");
		scanf(" %c",&ch);
		for(i=0;str[i]!='\0';i++)
		{
			if(isdigit(str[i]))
				push(str[i]-'0');
			else if(isspace(str[i])||str[i]=='\t');
			else if(isalnum(str[i])||!isalnum(str[i]))
			{
				switch(ch)
				{
					case '+': push(pop()+pop());
						  break;
					case '-': tmp=pop();
						  push(pop()-tmp);
						  break;
					case '*': push(pop()*pop());
						  break;
					case '/': tmp=pop();
						  if(tmp!=0.0)
							  push(pop()/tmp);
						  else
							  printf("Error! Zero diviser.\n");
						  break;
					case '%': tmp=pop();
						  if(tmp!=0.0)
							push((int)pop()%(int)tmp);
						  else
							printf("Error! Zero divider\n");
						  break;
					case 'a'...'z': print(ch);
							break;
					default: printf("Error!\n");
				}
			}
			if(str[i+1]=='\0'){
				printf("result:%f\n",pop());
				break;
			}
		}
	}


}
void print(char ch)
{
	printf(" %c%f\n",ch,stack[sp-1]);
}
void push(double f)
{
	if(sp<100)
		stack[sp++]=f;
	else
		printf("Stack is full!\n");
}
double pop(void)
{
	double f;
	if(sp>0)
		return stack[--sp];
	else{
		printf("Stack is empty!\n");
		return 0.0;
	}
}
void swap(void)
{
	double tmp1=pop();
	double tmp2=pop();
	push(tmp1);
	push(tmp2);
	printf("swapping top and top-1\n");
	printf("top:%f\n",stack[sp-1]);
	printf("top-1:%f\n",stack[sp-2]);
}
void duplicate(void)
{
	double tmp1=pop();
	push(tmp1);
	push(tmp1);
	printf("duplicating top\n");
	printf("top:%f\n",stack[sp-1]);
	printf("top-1:%f\n",stack[sp-2]);
}
void clear(void)
{
	while(sp)
		stack[--sp]=0.0;
}
void top(void)
{
	printf("Top:%f\n",stack[sp-1]);
}
