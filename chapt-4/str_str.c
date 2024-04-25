#include <stdio.h>
#include <string.h>
char* str_str(char str1[],char str2[]);
int main()
{
	char str1[100],str2[50];
	printf("Enter main string:");
	scanf("%[^\n]s",str1);
	printf("Enter sub string:");
	scanf("%s",str2);
	char *ptr=str_str(str1,str2);
	if(*ptr>0)
		printf("%s\n",ptr);
	else
		printf("String not found\n");
	return 0;
}
char* str_str(char str1[],char str2[])
{
	int i=0,j=0,len=strlen(str2),flag=0;
	for(;str1[i]!='\0';i++)
	{
		if(str1[i]==str2[j])
		{
			for(;str2[j]!='\0';i++,j++)
			{
				if(str2[j]!=str1[i])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				i=i-len;
				return &str1[i];
			}
			else{
				flag=0;
				j=0;
			}
		}
	}
	return -1;
}

