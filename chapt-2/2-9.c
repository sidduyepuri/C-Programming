//Exercise 2-9. In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit in x. Explain why. Use this observation to write a faster version of bitcount.
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
	printf("no. of ones count=%d\n",count);
	return 0;
}
// NOTE: The expression x &= (x - 1) deletes the rightmost 1-bit of x because
// x is decremented by 1 and masked with the initial x. If decremented x has
// the rightmost bit 1, shifted to right by logic & operation, it is deleted.
