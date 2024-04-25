#include <stdio.h>
int main()
{
	int x,count=0;
	scanf("%d",&x);
	while(x)
	{
		x=x&(x-1);
		count++;
	}
	printf("No of set bits:%d\n",count);
	return 0;
}
