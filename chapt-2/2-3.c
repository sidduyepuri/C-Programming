//Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int htoi(char hex[]);
int power(int m,int n);
int main()
{
	char hexa[50];
	scanf("%s",hexa);
	int dec=htoi(hexa);
	printf("Decimal value:%d\n",dec);
	return 0;
}
int htoi(char hex[])
{
	int i=0,res=0;
	char ch;
	int len=strlen(hex)-3;
	if(strncmp(hex,"0x",2)==0||strncmp(hex,"0X",2)==0)
		i+=2;
	for (;hex[i]!='\0';i++)
	{
		ch=tolower(hex[i]);
		if(isdigit(ch))
			res+=power(16,len)*(ch-48);
		else if((isalpha(hex[i]))&&(ch<='f'))
		{
			ch=ch-'a'+10;
			res+=pow(16,len)*ch;
		}
		else
		{
			printf("Error!\n");
			exit(0);
		}
		len--;
	}
	return res;
}
int power(int m,int n)
{
	int x=1;
	while(n--) 
		x*=m;
	return x;
}
