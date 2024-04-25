#include <stdio.h>
#include <ctype.h>
void skip_spaces(char str[],char s[]);
int main()
{
	char str[100],s[100];
	scanf("%[^\n]s",str);
	skip_spaces(str,s);
	printf("%s\n",s);
	return 0;
}
void skip_spaces(char str[],char s[])
{
	int i,j=0;
	for(i=0;str[i]!='\0';i++,j++)
	{
		while(isspace(str[i]))
			i++;
		while(!(isspace(str[i])))
			s[j++]=str[i++];
		if(isspace(str[i]))
			s[j]=str[i];
	}
}

