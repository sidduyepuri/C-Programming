//Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print the length of arbitrary long input lines, and as much as possible of the text. 
#include <stdio.h>
#include <string.h>
#define MAXLINE 1000
int get_line(char line[], int maxline);
int main(void)
{
	int len;
	char line[MAXLINE];
	int maxlen;
	char maxline[MAXLINE];
	maxlen = 0;
	while ((len = get_line(line, MAXLINE)) > 0)
	{
		if (maxlen < len)
		{
			maxlen = len;
			strcpy(maxline,line);
		}
		printf("line_length: %d\n", len);
	}
	if (maxlen > 0)
		printf("%s", maxline);
	return 0;
}
int get_line(char line[], int maxline)
{
	int c, i;
	for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	while(c != EOF && c != '\n')
	{
		++i;
		c = getchar();
	}
	return i;
}

