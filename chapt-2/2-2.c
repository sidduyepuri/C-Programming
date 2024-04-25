//Exercise 2-2. Write a loop equivalent to the for loop above without using && or ||.
#include <stdio.h>
#define LIMIT 1000
int main()
{
	int i,c;
	char s[LIMIT];
	for(i=0;i<LIMIT-1;++i)
	{
		if((c=getchar())=='\n')
			break;
		else
			s[i] = c;
		if(c==EOF)
			break;
	}
	printf("%s\n",s);
	return 0;
}
