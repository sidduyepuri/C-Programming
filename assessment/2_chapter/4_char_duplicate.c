#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXSIZE 100
void remove_duplicates(char str1[],char str2[]);
void str_lwr(char str[]);
int main()
{
	char str1[MAXSIZE],str2[MAXSIZE];
	scanf("%[^\n]s",str1);
	scanf(" %[^\n]s",str2);
	remove_duplicates(str1,str2);
	printf("%s\n",str1);
	return 0;
}
void remove_duplicates(char str1[],char str2[])
{
	int i=0,j=0;
	str_lwr(str2);
	for(;str1[i]!='\0';i++)
	{
		while(strchr(str2,tolower(str1[i]))>0)
			i++;
		str1[j++]=str1[i];
	}
	str1[j]='\0';
}
void str_lwr(char str[])
{
	int i=0;
	for(;str[i]!='\0';i++)
	{
		if(isupper(str[i]))
			str[i]+=32;
	}
}
