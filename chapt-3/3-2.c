//Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a function for the other direction as well, converting escape sequences into the real characters.
#include <stdio.h>
#include <string.h>
#define MAX 100
void escape(char s[],char t[]);
int main()
{
	int c,i=0;
	char s[MAX],t[MAX];
	while((c=getchar())!=EOF)
	{
		t[i]=c;
		i++;
		if(c=='\n')
			break;
	}
	escape(s,t);
	printf("%s\n",s);
	return 0;
}

void escape(char s[],char t[])
{
	int i=0,j=0;
	for(;t[i]!='\0';i++)
	{
		switch(t[i])
		{
			case '\t': s[j++]='\\';
				   s[j++]='t';
				   break;
			case '\n': s[j++]='\\';
				   s[j++]='n';
				   break;
			default:   s[j++]=t[i];
		}
		if(t[i]=='\n')
			break;
	}
	s[j]='\0';
}

