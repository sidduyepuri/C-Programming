#include <stdio.h>
#include <string.h>
#define MAXLINE 1000
int get_line(char line[],int lim);
int main()
{
	int len,i,j;
	char line[MAXLINE];
	char str[MAXLINE]="ould";
	char *str2;
	while(get_line(line,MAXLINE)>0)
	{
		if(strstr(line,str)>0)
			printf("%s\n",line);
	}
	return 0;
}
int get_line(char line[],int lim)
{
	int c,i;
	for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';i++)
		line[i]=c;
	line[i]='\0';
	return i;
}

