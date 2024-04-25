#include <stdio.h>
#include <ctype.h>
int main()
{
	char s[]="12345";
	int x=atoi(s);
	printf("%d\n",x);
	return 0;	
}
int atoi(char s[]) 
{ 
	int i, n; 
	n = 0; 
	for (i = 0;isdigit(s[i]); ++i) 
		n = 10 * n + (s[i] - '0'); 
	return n;
}
