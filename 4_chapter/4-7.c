//Exercise 4-7. Write a routine ungets(s) that will push back an entire string onto the input. Should ungets know about buf and bufp, or should it just use ungetch? 
#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
int bufp=0;
char buf[MAXSIZE];
int getch(void);
void ungetch(int c);
void ungets(char str[]);
int main()
{
	char ch;
	ungets("siddu is a good boy\n");
	while(bufp>0)
	{
		ch=getch();
		putchar(ch);
	}
	return 0;
}
int getch(void)
{
	return bufp>0?buf[--bufp]:getchar();
}
void ungetch(int c)
{
	if(bufp>=MAXSIZE)
	{
		printf("ungetch: Too many characters\n");
	}
	else
		buf[bufp++]=c;
}
void ungets(char str[])
{
	int i,len=strlen(str);
	for(;len>=0;)
	{
		ungetch(str[--len]);
	}
}
