#include <stdio.h>
#define MAXSIZE 100
int bufp=0;
int buf[MAXSIZE];
void ungetch(int c);
int getch(void);
int main()
{
	int c;
	while((c=getch())!=EOF)
		putchar(c);
	ungetch(c);
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
		printf("ungetch: Too many arguments\n");
	}
	else
		buf[bufp++]=c;
}
