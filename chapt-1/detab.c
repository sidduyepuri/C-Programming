#include <stdio.h>
#define TAB 8
int main()
{
	int c;
	int nb;
	int pos=1;
	while((c=getchar())!=EOF)
	{
		if(c=='\t')
		{
			nb=TAB-((pos-1)%TAB);
			while(nb>0)
			{
				putchar(' ');
				++pos;
				--nb;
			}
		}
		else if(c=='\n')
		{
			putchar(c);
			pos=1;
		}
		else
		{
			putchar(c);
			pos++;
		}
	}
	return 0;
}
