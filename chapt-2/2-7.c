//Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged. 
#include <stdio.h>
void printbinary(int num,int size);
int main()
{
	int x,y,p,n,temp;
	scanf("%d",&x);
	printf("Enter p and n:");
	scanf("%d %d",&p,&n);
	printbinary(x,sizeof(x));
	temp=(0x1<<n)-1;
	x=x^(temp<<p);
	printbinary(x,sizeof(x));
	printf("x=%d\n",x);
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
