#include <stdio.h>
int main()
{
	int a,b,c,d,big;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	big=a;
	if(b>big)
		big=b;
	if(c>big)
		big=c;
	if(d>big)
		big=d;
	printf("Big=%d\n",big);
	return 0;
}
