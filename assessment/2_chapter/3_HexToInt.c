#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAXSIZE 100
int main()
{
	int i,num=0,temp,result=0,flag=0;
	char str[MAXSIZE];
	scanf("%s",str);
	int len=strlen(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='0'&&str[i+1]=='x'||str[i+1]=='X')
			i=i+2;
		temp=tolower(str[i]);
		if(isdigit(temp))
			temp-=48;
		if(isalpha(temp)&&temp<='f')
			temp=temp-'a'+10;
		if(isdigit(str[i])||(tolower(str[i])>='a'&&tolower(str[i])<='f'))
			result += temp * (int)pow(16,len-i-1);
		else{
			printf("Enter valid hexa number.\n");
			return 0;
		}
	}
	printf("%d\n",result);
	return 0;
}
