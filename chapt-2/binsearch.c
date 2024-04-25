#include <stdio.h>
int binsearch(int x, int v[], int n);
int main()
{
	int x;
	scanf("%d",&x);
	int v[6]={10,20,30,38,42,50};
	int res=binsearch(x,v,6);
	printf("%d\n",res);
	return 0;
}
int binsearch(int x, int v[], int n) 
{ 
	int low, high, mid; 
	low = 0; 
	high = n - 1; 
	while (low <= high) 
	{ 
		mid = (low+high)/2; 
		if (x < v[mid]) 
			high = mid + 1; 
		else if (x > v[mid]) 
			low = mid + 1; 
		else /* found match */ 
			return mid; 
	} 
	return -1; /* no match */ 
} 
