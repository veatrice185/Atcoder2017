#include<stdio.h>
 
int main()
{
	int r,g,b;
	int total;
	scanf("%d %d %d", &r,&g,&b);
 
	total = r * 100 + g * 10 + b;
 
	if (total % 4 == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
 
	return 0;
}