//Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time.
#include<stdio.h>
#include<string.h>
#define LEN 100
int getoneline(char str[],int len);
void str_rev(char str[]);
int main()
{
	char str[LEN];
	int len;
	while((len=getoneline(str,LEN))>0)
	{
		str_rev(str);
		printf("%s\n",str);
	}
	return 0;
}
int getoneline(char str[],int lim)
{	
	int c,i,len=0;
	for(i=0;i<lim-1 && (c=getchar())!=EOF ; ++i)
	{
		if(c=='\n')
			break;
		str[i]=c;
		len++;
	}
	str[i]='\0';
	return len;
}
void str_rev(char str[])
{
	int len=strlen(str)-1,i;
	char temp;
	for(i=0;i<len;i++,len--)
	{
		temp=str[i];
		str[i]=str[len];
		str[len]=temp;
	}
}
