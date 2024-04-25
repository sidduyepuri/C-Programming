//Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.)
#include <stdio.h>
//#include <string.h>
char* strp_brk(char str1[],char str2[]);
int main()
{
	char str1[100];
	char str2[100];
	scanf("%s %s",str1,str2);
	char *ptr=strp_brk(str1,str2);
	if(ptr!=0)
		printf("%p %s\n",ptr,ptr);
	else
		printf("NULL\n");
	return 0;
}
char* strp_brk(char str1[],char str2[])
{
	int i,j;
	for(i=0;str1[i]!='\0';i++)
		for(j=0;str2[j]!='\0';j++)
			if(str1[i]==str2[j])
				return &str1[i];
	return 0; 
}

