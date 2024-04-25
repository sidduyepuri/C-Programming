//Exercise 3-6. Write a version of itoa that accepts three arguments instead of two. The third argument is a minimum field width; the converted number must be padded with blanks on the left if necessary to make it wide enough. 
#include <stdio.h>
void itoa(int n,char str[],int len);
int main()
{
	int n,len;
	char str[100];
	scanf("%d",&n);
	//scanf("%d",&len);
	itoa(n,str,6);
	printf("%s\n",str);
	return 0;
}
void itoa(int n,char str[],int len)
{
	int tmp=0,cnt=0,i,j;
	while(n)
	{
		tmp=tmp*10+n%10;
		cnt++;
		n/=10;
	}
	for(i=0;i<len-cnt;i++)
		str[j++]=' ';
	while(tmp)
	{
		str[j++]=tmp%10+48;
		tmp/=10;
	}
	str[j]='\0';
}

