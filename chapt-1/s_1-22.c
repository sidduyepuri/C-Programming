//Exercise 1-22. Write a program to ``fold'' long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column. 
#include <stdio.h>
#include <string.h>
#define FOLD_SIZE 40
#define LINESIZE 1000

int getoneline(char line[],int size);
void fold_line(char line[],char fold[],int fold_pt);
int main()
{
	int len;
	char line[LINESIZE];
	char fold[LINESIZE];
	while((len=getoneline(line,LINESIZE))>0)
	{
		fold_line(line,fold,FOLD_SIZE);
		printf("%s",fold);
	}	
}
int getoneline(char line[],int size)
{
	int c,len=0,i;
	for(i=0;i<size-1 && (c=getchar())!=EOF ;i++)
	{
		if(c=='\n')
			break;
		line[i]=c;
		len++;
	}
	line[i]='\0';
	return len++;
}
void fold_line(char line[],char fold[],int fold_pt)
{
	int len=strlen(line),count=0,i,j;
	for(i=0,j=0;i<len;i++,j++)
	{
		count++;
		if(count%fold_pt!=0){
			fold[j]=line[i];
		}
		else{
			fold[j]='\n';
			j++;
			i--;
		}
	}
}

