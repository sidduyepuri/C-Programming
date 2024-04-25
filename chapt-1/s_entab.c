//Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference? 
#include <stdio.h>
int main()
{
	int c,spaces=0,i;
	while((c=getchar())!=EOF)
	{
		if(c==' ')
		{
			++spaces;
			if(spaces==8)
				putchar('\t');
		}
		else
		{
			if(spaces!=8)
				for(i=0;i<spaces;i++)
					putchar(' ');
			spaces=0;
			putchar(c);
		}
	}
	return 0;
}	
