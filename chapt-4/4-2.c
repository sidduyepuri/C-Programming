/*Exercise 4-2. Extend atof to handle scientific notation of the form 
 123.45e-6 
where a floating-point number may be followed by e or E and an optionally signed exponent. */
#include <stdio.h>
#include <ctype.h>
double a_to_f(char str[]);
int main()
{
	char str[50];
	scanf("%[^\n]s",str);
	double val;
	val=a_to_f(str);
	printf("%lf\n",val);	
	return 0;
}

double a_to_f(char str[])
{
	int i=0,sign=1;
	double val,pow;
	if(str[i]=='-')
	{
		sign=-1;
		i++;
	}	
	for(val=0.0;isdigit(str[i]);i++)
		val=val*10.0+str[i]-'0';
	if(str[i]=='.')
		i++;
	for(pow=1.0;isdigit(str[i]);i++){
		val=val*10.0+str[i]-'0';
		pow*=10;
	}
	if(str[i]=='e'||str[i]=='E')
	{
		if(str[++i]=='-')
			i++;
		for(int j=0;j<str[i]-'0';j++)
			pow*=10;
	}
	return sign*val/pow;
}

