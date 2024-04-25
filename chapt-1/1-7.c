//Exercise 1-7. Write a program to print the value of EOF.
#include <stdio.h> 
/* copy input to output; 1st version */ 
int main() 
{ 
	int c; 
	c = getchar(); 
	while (c != EOF) { 
		putchar(c); 
		c = getchar(); 
	}
	printf(" %c %d\n",c,EOF);
} 
