//Exercise 4-6. Add commands for handling variables. (It's easy to provide twenty-six variables with single-letter names.) Add a variable for the most recently printed value. 
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> /* for atof() */ 
#include <ctype.h> 
#include <math.h> 
#define MAXOP 100 /* max size of operand or operator */ 
#define NUMBER '0' /* signal that a number was found */ 
int getop(char []); 
void push(double); 
double pop(void); 
void swap(void);
void duplicate(void);
void top(void);
void clear(void);
int getch(void); 
void ungetch(int); 
void math_funcs(void);
#define MAXVAL 100 /* maximum depth of val stack */ 
int sp = 0; /* next free stack position */ 
double stack[MAXVAL]; /* value stack */
#define ALPHA 26
int variable[ALPHA];
/* reverse Polish calculator */ 
int main() 
{ 
	int type,flag=0;
	double val;
	char tmp;
	double op2; 
	char s[MAXOP]; 
	while ((type = getop(s)) != EOF) { 
		switch (type) { 
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
			case 's':swap();
				 break;
			case 'd':duplicate();
				 break;
			case 't': top();
				  break;	
			case 'c': clear();
				  break;
			case 'M': math_funcs();
				  break;
			case '=': pop();
				  if(isupper(tmp)){
				 	variable[tmp-'A']=pop();
					flag=0;
				  }
				  break;
			case '\n': 
				val=pop();
				if(isupper(flag))
				 	variable[flag-'A']=val;
				printf("\t%.8g\n", val);
				break; 
			default:
				 if(isupper(type)){
					push(variable[type-'A']);
					flag=type;
				 }	
				 else
					printf("Invalid variable\n");
		}
		tmp=type;
	} 
	return 0; 
} 
void swap(void)
{
	double tmp1=pop();
	double tmp2=pop();
	push(tmp1);
	push(tmp2);
}
void duplicate(void)
{
	double tmp1=pop();
	push(tmp1);
	push(tmp1);
}
void top(void)
{
	printf("Top:%f\n",stack[sp-1]);
}
void clear(void)
{
	while(sp>0)
	{
		stack[--sp]=0.0;
	}
}

/* push: push f onto value stack */ 
void push(double f) 
{ 
	if (sp < MAXVAL) 
		stack[sp++] = f; 
	else 
		printf("error: stack full, can't push %g\n", f); 
} 
/* pop: pop and return top value from stack */ 
double pop(void) 
{ 
	if (sp > 0) 
		return stack[--sp]; 
	else { 
		printf("error: stack empty\n"); 
		return 0.0; 
	} 
}
void math_funcs(void)
{
	double op2;
	char s[10];
	int c, i = 0;

	getch();
        printf("\t\tSpecial function to trigonometry:\nCommands: sin, exp, pow\n");
	while ((c = getchar()) != '\n' && c != EOF)
		s[i++] = c;
	s[i] = '\0';
	if (strcmp(s, "sin") == 0)
		printf("%.8g\n",sin(pop()));
	else if (strcmp(s, "exp") == 0)
		printf("%.8g\n",exp(pop()));
	else if (strcmp(s, "pow") == 0) {
		op2 = pop();
		printf("%.8g\n", pow(pop(), op2));
	}
	else
		printf("Wrong command\n");
}	

/* getop: get next character or numeric operand */ 
int getop(char s[]) 
{ 
	int i, c; 
	while ((s[0] = c = getch()) == ' ' || c == '\t') 
		; 
	s[1] = '\0'; 
	if (!isdigit(c) && c != '.') 
		return c; /* not a number */ 
	i = 0; 
	if (isdigit(c)) /* collect integer part */ 
		while (isdigit(s[++i] = c = getch())) 
			; 
	if (c == '.') /* collect fraction part */ 
			while (isdigit(s[++i] = c = getch())) 
				; 
	s[i] = '\0'; 
	if (c != EOF) 
		ungetch(c); 
	return NUMBER; 
} 
#define BUFSIZE 100 
char buf[BUFSIZE]; /* buffer for ungetch */ 
int bufp = 0; /* next free position in buf */ 
int getch(void) /* get a (possibly pushed-back) character */ 
{ 
	return (bufp > 0) ? buf[--bufp] : getchar(); 
} 
void ungetch(int c) /* push character back on input */ 
{ 
	if (bufp >= BUFSIZE) 
		printf("ungetch: too many characters\n"); 
	else 
		buf[bufp++] = c; 
}
