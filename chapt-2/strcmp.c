#include <stdio.h>
#include <string.h>
int main()
{
	char str1[]="0x17";
	if(strncmp(str1,"0x",2)==0)
		printf("same\n");
	return 0;
}
