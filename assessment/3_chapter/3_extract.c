#include <stdio.h>
#define MAXSIZE 100
int main()
{
	int i=0,j;
	char str[MAXSIZE];
	scanf("%s",str);
	for(;str[i]!='\0';i++)
	{
		if(str[i]=='-')
		{
			if(str[i-1]==str[i+1]);
			else
				for(j=str[i-1];j<=str[i+1];j++)
					putchar(j);
		}
	}
	printf("\n");
	return 0;
}

