#include <stdio.h>
#define TAB 8
int main()
{
	int c,pos=1;
	int nt,nb;
	for(pos=1;(c=getchar())!=EOF;pos++)
	{
		if(c==' ')
		{
			if ((pos%TAB)!=0)
				nb++;
			else{
				nt++;
				nb=0;
			}
		}
		else
		{
			for(;nt>0;nt--)
				putchar('\t');
			if(c=='\t')
				nb=0;
			else
				for(;nb>0;nb--)
					putchar(' ');
			putchar(c);
			if(c=='\n')
				pos=0;
			if(c=='\t')
				pos=pos+(TAB-(pos-1)%TAB)-1;
		}
	}
}	
