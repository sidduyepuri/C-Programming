#include <stdio.h>
int main()
{
	int c,nl,nw,nc;
	nc=nw=nl=0;
	while((c=getchar())!=EOF)
	{
		++nc;
		if(c=='\n')
			++nl;
		if(c=='\n'||c==' '||c=='\t')
			++nw;
	}
	printf("nc=%d nl=%d nw=%d\n",nc,nl,nw);
	return 0;
}
