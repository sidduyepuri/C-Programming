#include <stdio.h>
#include <string.h>
#define MAXLINE 1000
int get_line(char line[],int lim);
int main()
{
	int len,i,j;
	char line[MAXLINE];
	char str[MAXLINE];
	char str3[]="ould";
	char *str2;
	while((len=get_line(line,MAXLINE))>0);
	for(i=0;line[i]!=EOF;i++)
	{
		for(j=0;line[i]!='\n';j++,i++)
			str[j]=line[i];
		str[j]='\0';
		str2=strstr(str,str3);
		if(str2>0)
			printf("%s\n",str);
	}
	return 0;
}
int get_line(char line[],int lim)
{
	int c,i;
	for(i=0;(c=getchar())!=EOF;i++)
		line[i]=c;
	line[i]='\0';
	return i;
}

