#include <stdio.h>
#include <ctype.h>
int main()
{
	int i=0;
	char str[100];
	scanf("%[^\n]s",str);
	while(isspace(str[i]))
		i++;
	printf("count=%d\n",i);
}
