//Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged. 
#include <stdio.h>
void printbinary(int num,int size);
int main()
{
	int x,y,p,n,temp;
	scanf("%d %d",&x,&y);
	printf("Enter p and n:");
	scanf("%d %d",&p,&n);
	if(x<0||y<0)
	{
		printf("Enter positive values\n");
		return 0;
	}
	if(n>p+1)
	{
		printf("Insufficient bits\n");
		return 0;
	}
	printbinary(x,sizeof(x));
	printbinary(y,sizeof(y));
	temp=(0x1<<n)-1;
	y=(y&temp)<<(p-n+1);
	x=(x&~(temp<<(p-n+1)));
	x=x|y;
	printbinary(x,sizeof(x));
	printf("x=%d\n",x);
	return 0;
}
void printbinary(int num,int size)
{
	int i;
	for(i=0;i<size*8;i++)
	{
		if(num&0x1<<(size*8)-1)
			printf("1");
		else
			printf("0");
		num=num<<1;
		if((i+1)%8==0)
			printf(" ");
	}
	printf("\n");
}
