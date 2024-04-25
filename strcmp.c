#include <stdio.h>
int str_cmp(char *str1,char *str2);
int main()
{
	char str1[50],str2[50];
	scanf("%s %s",str1,str2);
	int n=str_cmp(str1,str2);
	if(n==0)
		printf("Both strings are same\n");
	else if(n>0)
		printf("string 1 bigger\n");
	else
		printf("string 2 bigger\n");
	return 0;
}
int str_cmp(char *str1,char *str2)
{
	while(*str1==*str2)
	{
		if(*str1=='\0'&&*str2=='\0')
			return 0;
		str1++;
		str2++;
	}
	return *str1-*str2;
}
