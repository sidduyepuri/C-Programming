#include <stdio.h>
void printd(int,int);
int num=0;
int main()
{
	int n;
	scanf("%d",&n);
	printd(n,1000);
	printf("\n");
	return 0;
}
/*int printd(int n)
{
	if(n<0){
		return num;
	}
	num=num*10+n%10;	
	if(n/10)
		printd(n/10);

		}*/
/* printd: print n in decimal */ 
void printd(int n,int len) 
{ 
	if (n < 0) { 
		putchar('-'); 
		n = -n; 
	} 
	if (n / 10) 
		printd(n % len,len/10); 
	putchar(n/len + '0'); 
} 

