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
	//==============> character ranges <================
	printf("unsigned char max:%d\n",UCHAR_MAX);
	printf("signed char min:%d\n",SCHAR_MIN);
	printf("signed char max:%d\n\n",SCHAR_MAX);
	//==============> integer ranges <================
	printf("signed int min:%d\n",INT_MIN);
	printf("signed int max:%d\n",INT_MAX);
	printf("unsigned int max:%d\n",UINT_MAX);
	printf("long int min:%ld\n",LONG_MIN);
	printf("long int max:%ld\n",LONG_MAX);
	printf("unsigned long int max:%ld\n\n",ULONG_MAX);
	//==============> short int ranges <================
	printf("signed short int min:%d\n",SHRT_MIN);
	printf("signed short int max:%d\n",SHRT_MAX);
	printf("unsigned short int max:%d\n\n",USHRT_MAX);
	
}
