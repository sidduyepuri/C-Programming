#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
int getoneline(char line[],int size);
void copy(char to[], char from[]);
	char line[MAXSIZE];
	char longestline[100];
int main()
{
	int len,temp=0;
	char MAXLENGTH[MAXSIZE];
	while((len=getoneline(line,MAXSIZE))>0)
	{
		if(len>temp){
			//copy(longestline,line);
			strcpy(longestline,line);
		}
		temp=len;
	}
	printf("Longest line is : %s\n",longestline);
}
int getoneline(char *line,int size)
{
	int c,len=0;
	int i;
	for(i=0;(c=getchar())!=EOF;i++)
	{
		if(c=='\n')
			break;
		line[i]=c;
		len++;
	}
	line[i]='\0';
	return len;
}
void copy(char to[], char from[])
{
        int i;
        i = 0;
        while ((to[i] = from[i]) != '\0')
                ++i;
}
