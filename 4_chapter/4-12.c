#include <stdio.h>
void printd(int n,char str[]);
int num=0;
int main()
{
	int n;
	char str[100];
	scanf("%d",&n);
	printd(n,str);
	printf("%s\n",str);
	return 0;
}
void printd(int n,char str[]) 
{ 
	static int i=0;
	if (n < 0) { 
		str[i++]='-';
		n = -n; 
	} 
	if (n / 10) 
		printd(n/10,str);
	else
		str[i]='\0';
	str[i++]=n%10+'0';
} 
