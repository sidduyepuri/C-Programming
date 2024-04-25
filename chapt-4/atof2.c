#include <stdio.h>
#include <ctype.h>
//#include <stdlib.h>
double ato_f(char s[]); 
int main()
{
	char str[]="12.123450190";
	double x=ato_f(str);
	printf("%lf\n",x);
	return 0;
}
double ato_f(char s[]) 
{ 
	double val, power; 
	int i, sign; 
	for (i = 0; isspace(s[i]); i++) /* skip white space */ 
		; 
	sign = (s[i] == '-') ? -1 : 1; 
	if (s[i] == '+' || s[i] == '-') 
		i++; 
	for (val = 0.0; isdigit(s[i]); i++) 
		val = 10.0 * val + (s[i] - '0'); 
	if (s[i] == '.') 
		i++; 
	for (power = 1.0; isdigit(s[i]); i++) { 
		val = 10.0 * val + (s[i] - '0'); 
		power *= 10; 
	}
	return sign * val / power; 
 }  
