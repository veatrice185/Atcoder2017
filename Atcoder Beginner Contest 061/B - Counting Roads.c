#include<stdio.h>
 
int main()
{
	int a[1000], b[50];
	int n, m;
	int i, j;
	int k, l;
	int temp;
 
	for (i = 0; i < 1000; i++)
	{
		a[i] = 0;
	}
 
	k = 0;
	l = 0;
 
	k = scanf("%d %d", &n, &m);
 
	for (i = 0; i < m*2; i++)
	{
		l = scanf("%d", &temp);
		a[temp-1]++;
	}
 
	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	
	return 0;
}