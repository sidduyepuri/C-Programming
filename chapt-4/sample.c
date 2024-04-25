#include <stdio.h> 
#include <stdlib.h> 
#define MAXLINE 100 
/* rudimentary calculator */ 
int main() 
{ 
	double sum; 
	char **line;
	int x=100;
	int *ptr=&x;
	sum = 0; 
	while (getline(line,1000,0) > 0) 
		printf("\t%g\n", sum += atof(line)); 
	return 0; 
} 
