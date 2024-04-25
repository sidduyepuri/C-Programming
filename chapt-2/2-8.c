#include <stdio.h>
int rightrotate(unsigned int x,int p);
void printbinary(int x,int size);
int main()
{
	int x;
	int p,tmp;
	scanf("%d %d",&x,&p);
	printbinary(x,sizeof(x));
	x=rightrotate(x,p);
	//printf("%d\n",x);
	printbinary(x,sizeof(x));
	return 0;
}
int rightrotate(unsigned int x,int p)
{
	int i;
	for(i=0;i<p;i++)
	{
		if(0x1&x){
			x=x>>1;
			x=x|0x1<<sizeof(x)*8-1;
		}
		else
		{
			x=x>>1;
			x=x&~(0x1<<sizeof(x)*8-1);
		}
	}
	return x;
}
void printbinary(int x,int size)
{
	int i;
	for(i=0;i<size*8;i++)
	{
		if(x&0x1<<(size*8)-1)
			printf("1");
		else
			printf("0");
		x=x<<1;
		if((i+1)%8==0)
			printf(" ");
	}
	printf("\n");
}
