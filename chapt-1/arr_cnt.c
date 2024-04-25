#include <stdio.h>
#include <ctype.h>
int main()
{
	int nwhite=0,nother=0;
	int ndigit[10],i,c;
	for(i=0;i<10;i++)
		ndigit[i]=0;
	while((c=getchar())!=EOF)
		if(isdigit(c))
			++ndigit[c-'0'];
		else if(isspace(c)||c=='\t'||c=='\n')
			nwhite++;
		else
			nother++;
	printf("digits:");
	for(i=0;i<10;i++)
		printf("%d ",ndigit[i]);
	printf("\nnwhite:%d nother:%d\n",nwhite,nother);
	return 0;
}
