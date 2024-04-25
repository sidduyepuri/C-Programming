#include <stdio.h>
#include <string.h>
int main()
{
	int i=0,flag=0;
	char str1[100],str2[50];
	char *ptr;
	scanf("%s %s",str1,str2);
	for(;str1[i]!='\0';i++)
	{
		if(strchr(str2,str1[i])>0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("no duplicate characters found\n");
	else
		printf("Duplicate character found at position %d in string 1\n",i);
	return 0;
}
