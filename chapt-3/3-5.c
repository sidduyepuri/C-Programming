//Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a base b character representation in the string s. In particular, itob(n,s,16) formats s as a hexadecimal integer in s. 
#include <stdio.h>
#include <string.h>
void itob(int n,char str[],int base);
void str_rev(char str[]);
int main()
{
	int n,base;
	char str[100];
	printf("Enter n and base:");
	scanf("%d%d",&n,&base);
	itob(n,str,base);
	str_rev(str);
	printf("%s\n",str);
	return 0;
}
void str_rev(char str[])
{
	int i=0,j=strlen(str)-1;
	char tmp;
	for(;i<j;i++,j--)
	{
		tmp=str[i];
		str[i]=str[j];
		str[j]=tmp;
	}
}
void itob(int n,char str[],int base)
{
	int i=0,tmp=n;
	if(n==0)
		str[i++]='0';
	if(n<0)
		n=-1*n;
	if(base==2||base==8||base==10||base==16)
	{
		while(n)
		{
			str[i++]=n%base+48;
			n/=base;
		}
		if(base==16)
		{
			str[i++]='x';
			str[i++]='0';
		}
		if(tmp<0)
			str[i++]='-';
		str[i]='\0';
	}
	else
		printf("Base value invalid\n");
}

