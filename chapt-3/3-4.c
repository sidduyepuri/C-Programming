//Exercise 3-4. In a two's complement number representation, our version of itoa does not handle the largest negative number, that is, the value of n equal to -(2wordsize-1). Explain why not. Modify it to print that value correctly, regardless of the machine on which it runs. 
#include <stdio.h>
void itoa(int n,char str[]);
int main()
{
	int n;
	char str[100];
	scanf("%d",&n);
	itoa(n,str);
	printf("%s\n",str);
	return 0;
}
void itoa(int n,char str[])
{
	int i=0,num=0;
	if(n<0)
	{
		str[i++]='-';
		n=n*-1;
	}
	while(n)
	{
		num=num*10+n%10;
		n/=10;
	}
	while(num)
	{
		str[i++]=num%10+48;
		num/=10;
	}
}

