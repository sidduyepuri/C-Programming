#include <stdio.h> 
#include <stdlib.h> /* for atof() */ 
#include <ctype.h> 
#define MAXOP 100 /* max size of operand or operator */ 
#define NUMBER '0' /* signal that a number was found */
#define LINELIM 100 
void push(double); 
double pop(void); 
int get_line(char str[],int lim);
/* reverse Polish calculator */ 
int main() 
{ 
	int type,i,c=0;
	char str[LINELIM];
	double op2; 
	char s[MAXOP]; 
	while(get_line(str,LINELIM)>0)
	{
		for(i=0;str[i]!='\0';i++)
		{
			while(isspace(str[i]))
				i++;
			if(isdigit(str[i]))
			{
				while(isdigit(str[i])){
					c=c*10.0+str[i]-'0';
					i++;
				}
				push(c);
				c=0;
			}
			else if(!isspace(str[i])&&!isdigit(str[i])&&str[i]!='.')
			{
				switch (str[i]) { 
					case NUMBER: 
						push(atof(s)); 
						break; 
					case '+': 
						push(pop() + pop()); 
						break; 
					case '*': 
						push(pop() * pop()); 
						break; 
					case '-': 
						op2 = pop(); 
						push(pop() - op2); 
						break; 
					case '/': op2 = pop(); 
						  if (op2 != 0.0) 
							  push(pop() / op2); 
						  else 
							  printf("error: zero divisor\n"); 
						  break; 
					case '%': op2 = pop(); 
						  if (op2 != 0.0) 
							  push((int)pop() % (int)op2); 
						  else 
							  printf("error: zero divisor\n"); 
						  break; 
					case '\n': 
						  printf("\t%.8g\n", pop()); 
						  break; 
					default: 
						  printf("error: unknown command %s\n", s); 
						  break; 
				}
			}
			if(str[i+1]=='\0')
				printf("\t result:%.8g\n", pop()); 
		}
	} 
	return 0; 
} 
#define MAXVAL 100 /* maximum depth of val stack */ 
int sp = 0; /* next free stack position */ 
double val[MAXVAL]; /* value stack */ 
/* push: push f onto value stack */ 
void push(double f) 
{ 
	if (sp < MAXVAL) 
		val[sp++] = f; 
	else 
		printf("error: stack full, can't push %g\n", f); 
} 
/* pop: pop and return top value from stack */ 
double pop(void) 
{ 
	if (sp > 0) 
		return val[--sp]; 
	else { 
		printf("error: stack empty\n"); 
		return 0.0; 
	} 
}

int get_line(char str[],int lim)
{
	int c,i;
	for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';i++)
	{
		str[i]=c;
	}
	str[i]='\0';
	return i;
}

