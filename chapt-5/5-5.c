//Exercise 5-5. Write versions of the library functions strncpy, strncat, and strncmp, which operate on at most the first n characters of their argument strings. For example, strncpy(s,t,n) copies at most n characters of t to s. Full descriptions are in Appendix B.
#include <stdio.h>
#include <string.h>
void str_ncpy(char *str1,char *str2,int n);
void str_ncat(char *str1,char *str2,int n);
int str_ncmp(char *str1,char *str2,int n);
int main()
{
	char str1[100],str2[50];
	int choice,n,res=1;
	printf("Enter string 1:");
	scanf("%s",str1);
	printf("Enter string 2:");
	scanf(" %s",str2);
	printf("Enter n value:");
	scanf("%d",&n);
	printf("choose your option:\n1.strncpy().\n2.strncat().\n3.strncmp().\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: str_ncpy(str1,str2,n);
			break;
		case 2:	str_ncat(str1,str2,n);
			break;
		case 3:	res=str_ncmp(str1,str2,n);
			break;
		default: printf("Enter valid option.");
	}
	if(choice==1||choice==2)
		printf("%s\n",str1);
	else if(res==0&&choice==3)
		printf("same\n");
	else
		printf("Not same\n");
	return 0;
}

void str_ncpy(char *str1,char *str2,int n)
{
	int i=0;
	for(;i<n;i++)
		*str1++=*str2++;
	*str1='\0';
}

void str_ncat(char *str1,char *str2,int n)
{
	int i=0;
	str1=str1+strlen(str1);
	while(i<n)
	{
		*str1++=*str2++;
		i++;
	}
	*str1='\0';
}

int str_ncmp(char *str1,char *str2,int n)
{
	int i=0;
	while(i<n)
	{
		if(*str1!=*str2)
			return *str1-*str2;
		i++;
		str1++;
		str2++;
	}
	return 0;
}
