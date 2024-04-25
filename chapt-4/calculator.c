/* while (next operator or operand is not end-of-file indicator) 
   if (number) 
   	push it
   else if (operator) 
   	pop operands
   	do operation
   	push result
   else if (newline) 
   	pop and print top of stack
   else 
   error			*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
void push(double); 
double pop(void);
int sp=0;
double val[100];
int main()
{
	int i=0,tmp;
	char str[100];
	while(1)
	{
		scanf(" %[^\n]s",str);
		for(i=0;str[i]!='\0';i++)
		{
			if(isdigit(str[i]))
				push(str[i]-'0');
			else if(isspace(str[i])||str[i]=='\t');
			else if(!isalnum(str[i]))
			{
				switch(str[i])
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
					default: printf("Error!\n");
				}
			}
			if(str[i+1]=='\0'){
				printf("%f\n",pop());
				break;
			}
		}
	}


}

void push(double f)
{
	if(sp<100)
		val[sp++]=f;
	else
		printf("Stack is full!\n");
}
double pop(void)
{
	double f;
	if(sp>0)
		return val[--sp];
	else{
		printf("Stack is empty!\n");
		return 0.0;
	}
}
