#include <stdio.h>
#include <math.h>
int power(int,int);
int main()
{
	int m,n,pow;
	printf("Enter m and n:");
	scanf("%d%d",&m,&n);
	pow=power (m,n);
	printf("Power=%d\n",pow);
	return 0;
}
int power(int m,int n)
{
	int i,p=1;
	for (p=1;n>0;--n)
		p=p*m;
	return p;
}	
