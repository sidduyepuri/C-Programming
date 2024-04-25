#include <stdio.h>
#include <ctype.h>
int atoi(char str[]);
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	int n=atoi(str);
	printf("%d\n",n);
	return 0;	
}

int atoi(char str[])
{
	int i=0,num=0,count=0;
	for(;str[i]!='\0';i++)
	{
		if(isalpha(str[i]))
			return 0;
		else if(str[i]=='-'&&count==0)
			count++;
		else if(isdigit(str[i]))
			num=num*10+str[i]-'0';
		else
			return 0;
	}
	if(count>0)
		num=num-num*2;
	return num;
}

