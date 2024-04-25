#include <stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a'...'z' : printf("Hello\n");
				break;
		default : printf("Its not working\n");
	}	
}

