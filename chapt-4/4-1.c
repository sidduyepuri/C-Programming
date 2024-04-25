//Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost occurrence of t in s, or -1 if there is none. 
#include <stdio.h>
#include <string.h>
#define MAXLINE 100
int strindex(char str[],char sub_str[]);
int main()
{
	char str[MAXLINE];
	char sub_str[MAXLINE];
	printf("Enter main string:");
	scanf("%[^\n]s",str);
	printf("Enter sub string:");
	scanf("%s",sub_str);
	printf("Position:%d\n",strindex(str,sub_str));
	return 0;
}
int strindex(char str[],char sub_str[])
{
	int i,j;
	for(i=0,j=0;str[i]!='\0'&&sub_str[j]!='\0';)
	{
		if(str[i]==sub_str[j])
		{
			j++;
			i++;
		}
		else
		{
			j=0;
			i++;
		}
	}
	if(sub_str[j]=='\0')
		return i-strlen(sub_str);
	else
		return -1;
}
