//Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2. 
#include <stdio.h>
#include <string.h>
#define MAX 100
void squeeze(char str1[],char str2[]);
int main()
{
	char str1[MAX];	
	char str2[MAX];
	printf("Enter str1 and str2:");
	scanf("%s %s",str1,str2);
	squeeze(str1,str2);
	printf("%s\n",str1);
	return 0;	
}
void squeeze(char str1[],char str2[])
{
	int len=strlen(str1),i,j,k,flag=0;
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=0;str2[j]!='\0';j++)
			if(str1[i]==str2[j])
			{
				for(k=i;k<len-1;k++)
					str1[k]=str1[k+1];
				str1[k]='\0';
				i=i-1;
				break;
			}
	}
}

