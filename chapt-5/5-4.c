//Exercise 5-4. Write the function strend(s,t), which returns 1 if the string t occurs at the end of the string s, and zero otherwise. 
#include <stdio.h>
#include <string.h>
int strend(char *str1,char *str2);
int main()
{
	char str1[100];
	char str2[50];
	printf("Enter Main string:");
	scanf("%[^\n]s",str1);
	printf("Enter sub string:");
	scanf(" %s",str2);
	int res=strend(str1,str2);
	if(res==1)
		printf("substring found at end\n");
	else
		printf("Not found\n");
	return 0;
}
int strend(char *str1,char *str2)
{
	int i=0;
	int len1=strlen(str1),len2=strlen(str2);
	str1=str1+(len1-len2);
	while(*str1==*str2)
	{
		if(*str1=='\0'&&*str2=='\0')
			return 1;
		str1++;
		str2++;
	}
	return -1;
}

