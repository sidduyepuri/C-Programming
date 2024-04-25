#include <stdio.h>
#include <limits.h>
int main()
{
	/*int x;
	unsigned int y;
	short int s;
	unsigned short int us;
	long int lt;
	unsigned long int ult;
	char ch;
	unsigned char c;
	float f;
	double d;
	long double ld;	*/

	printf("==============> integer ranges <================\n");
	printf("signed int min:%d\n",INT_MIN);
	printf("signed int max:%d\n",INT_MAX);
	printf("unsigned int max:%ld\n",UINT_MAX);
	printf("long int min:%ld\n",LONG_MIN);
	printf("long int max:%ld\n",LONG_MAX);
	printf("unsigned long int max:%ld\n",ULONG_MAX);
	printf("==============> short int ranges <================\n");
	printf("signed short int min:%d\n",SHRT_MIN);
	printf("signed short int max:%d\n",SHRT_MAX);
	printf("unsigned short int max:0\n");
	printf("unsigned short int max:%d\n",USHRT_MAX);
	printf("==============> character ranges <================\n");
	printf("unsigned char max:0\n");
	printf("unsigned char max:%d\n",UCHAR_MAX);
	printf("signed char min:%d\n",SCHAR_MIN);
	printf("signed char max:%d\n",SCHAR_MAX);
	printf("==============> long ranges <================\n");
	printf("unsigned long max:0\n");
	printf("unsigned long max:%Ld\n",ULONG_MAX);
	printf("signed long min:%ld\n",LONG_MIN);
	printf("signed long max:%ld\n",LONG_MAX);
	return 0;
}
