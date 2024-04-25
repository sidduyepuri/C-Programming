#include <stdio.h>
#include <ctype.h>
#define ARRSIZE 100
int main()
{
	char str[ARRSIZE];
	int i=0,j=0,k,flag=0;
	int arr[ARRSIZE]={};
	printf("Enter array elements:");
	scanf("%[^\n]s",str);
	printf("Enter element for search:");
	scanf("%d",&k);
	for(;str[i]!='\0';)
	{
		if(!isspace(str[i])&&!isdigit(str[i]))
		{
			printf("Enter digits only\n");
			return 0;
		}
		while(isdigit(str[i]))
		{
			arr[j]=arr[j]*10+str[i]-48;
			i++;
		}
		j++;
		while(isspace(str[i]))
			i++;
		if(arr[j-1]==k)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("Element %d found in array index %d\n",k,j-1);
	else
		printf("Element %d not found in array\n",k);
	return 0;
}
