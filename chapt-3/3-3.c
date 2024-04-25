//Exercise 3-3. Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a leading or trailing - is taken literally. 
#include <stdio.h>
void expand(char str1[],char str2[]);
int main()
{
	char str1[100],str2[100];
	scanf("%[^\n]s",str1);
	expand(str1,str2);
	printf("%s\n",str2);
	return 0;
}
void expand(char str1[],char str2[])
{
	int i=0,ch,j=0;
	for(;str1[i]!='\0';i++)
	{
		if(str1[i]=='-')
		{
			j--;
			for(ch=str1[i-1];ch<str1[i+1];ch++)
				str2[j++]=ch;
		}	
		else
			str2[j++]=str1[i];
	}
	str2[j]='\0';
}
