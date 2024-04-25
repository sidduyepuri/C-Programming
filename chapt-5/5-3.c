//Exercise 5-3. Write a pointer version of the function strcat that we showed in Chapter 2: strcat(s,t) copies the string t to the end of s.
#include <stdio.h>
#include <string.h>
char* str_cat(char *dest,const char *src);
int main()
{
	char str1[100],str2[50];
	scanf("%s %s",str1,str2);
	char *res=str_cat(str1,str2);
	printf("%s\n",res);
	return 0;
}
char* str_cat(char *dest,const char *src)
{
	int i,len=strlen(dest);
	for(i=0;(*(dest+len)=*src)!='\0';i++)
	{
		len++;
		src++;
	}
	return dest;
}
