#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAXSIZE 100
#define SIZE 10
int bufp;
char buf[MAXSIZE];
int getch(void); 
void ungetch(int); 
int main()
{
	int n, array[SIZE], getint(int *); 
	for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++) 
		; 
	for(int i=0;i<SIZE;i++)
		printf("%d\n",array[i]);
	return 0;
}
/* getint: get next integer from input into *pn */ 
int getint(int *pn) 
{ 
	int c, sign; 
	while (isspace(c = getch())) /* skip white space */ 
		; 
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') { 
		ungetch(c); /* it is not a number */ 
		return 0; 
	} 
	sign = (c == '-') ? -1 : 1; 
	if (c == '+' || c == '-') 
		c = getch(); 
	for (*pn = 0; isdigit(c);c = getch()) 
		*pn = 10 * *pn + (c - '0'); 
	*pn *= sign; 
	if (c != EOF) 
		ungetch(c); 
	return c; 
}
int getch(void)
{
	return bufp>0?buf[--bufp]:getchar();
}
void ungetch(int c)
{
	if(bufp>MAXSIZE)
	{
		printf("ungetch: Too many values\n");
	}
	else
		buf[bufp++]=c;
}
