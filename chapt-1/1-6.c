//Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1
#include <stdio.h>
int main()
{	
	int c;
	while(getchar()!=EOF){
		printf("1\n");
	}
	printf("0\n");
	return 0;
}
