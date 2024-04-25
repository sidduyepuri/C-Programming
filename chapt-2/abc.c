//Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.)
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100];
	char str2[100];
	scanf("%s %s",str1,str2);
	char *ptr=strpbrk(str1,str2);
	if(ptr!=0)
		printf("%p %s\n",ptr,ptr);
	else
		printf("NULL\n");
	return 0;
}

