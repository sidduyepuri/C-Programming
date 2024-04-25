#include <stdio.h>
Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits 
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
through 9, a through f, and A through F. #include <ctype.h>
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
	{
		if(isupper(str[i]))
			//str[i]=str[i]+32;
			str[i]=tolower(str[i]);
	}
}
