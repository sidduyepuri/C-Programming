#include <stdio.h>
#include <string.h>
void reverse(char str[]);
int main()
{
	char str[100];
	scanf("%s",str);
	reverse(str);
	printf("%s\n",str);
	return 0;
}
void reverse(char str[])
{
	static int i=0;
	static int l=0;
	char temp;
	if(str[i]!='\0')
	{
		i++;
		reverse(str);
	}
	else
		str[i--]='\0';
	if(i>l)
	{
		temp=str[i];
		str[i]=str[l];
		str[l]=temp;
		l++;
		i--;
	}
}

