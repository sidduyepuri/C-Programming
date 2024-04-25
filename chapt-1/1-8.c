//Exercise 1-8. Write a program to count blanks, tabs, and newlines.
#include <stdio.h>
int main()
{
	int c,bl=0,tab=0,nl=0,temp=0;
	while((c=getchar())!=EOF)
	{
		if(c=='\t')
			tab++;
		else if (c==' ')
			bl++;
		else if (c=='\n')
			nl++;
	}
	printf("bl=%d tab=%d lines=%d\n",bl,tab,nl);
	return 0;
}
