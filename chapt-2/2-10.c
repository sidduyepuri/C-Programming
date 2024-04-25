//Exercise 2-10. Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else.
#include<stdio.h>
void lower(char str[]);
int main()
{
	char str[100];
	scanf("%s",str);
	lower(str);
	printf("%s\n",str);
	return 0;
}
void lower(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
		str[i]<=90&&str[i]>=65?str[i]=str[i]+32:str[i];
}

