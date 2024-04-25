#include <stdio.h>
int main()
{
	int x=5,y=10,z=20;
	int *ptr=&x;
	printf("%d\n",*ptr);
	int *iq=ptr;
	printf("%d\n",*iq);
	
}
