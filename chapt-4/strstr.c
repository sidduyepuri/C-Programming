#include <stdio.h>
#include <string.h>
int main()
{
	char *str1="siddu is a good boy";
	char *str2="dd";
	char *ptr=strstr(str1,str2);
	printf("%s\n",ptr);
	return 0;
}	

