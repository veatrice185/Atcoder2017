#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
	int a;
	int b[4800];
	int c[4800];
	int total1 = 1;
	int total2 = 0;
	int i;
 
	cin >> a;
	for (i = 0; i < a; i++)
	{
		cin >> b[i];
 
		if (b[i] >= 1 && b[i] <= 399)
		{
			c[i] = 1;
		}
 
		else if (b[i] >= 400 && b[i] <= 799)
		{
			c[i] = 2;
		}
		else if (b[i] >= 800 && b[i] <= 1199)
		{
			c[i] = 3;
		}
		else if (b[i] >= 1200 && b[i] <= 1599)
		{
			c[i] = 4;
		}
		else if (b[i] >= 1600 && b[i] <= 1999)
		{
			c[i] = 5;
		}
		else if (b[i] >= 2000 && b[i] <= 2399)
		{
			c[i] = 6;
		}
		else if (b[i] >= 2400 && b[i] <= 2799)
		{
			c[i] = 7;
		}
		else if (b[i] >= 2800 && b[i] <= 3199)
		{
			c[i] = 8;
		}	
		else
		{
			c[i] = 9;
		}
	}
 
	sort(c, c + a); 
 
 
 
	for (i = 0; i < a-1; i++)
	{
		if (c[i] != 9 && c[i + 1] != 9)
		{
			if (c[i + 1] - c[i] != 0)
			{
				total1++;
			}
		}
		else
		{
			continue;
		}
	}
	
	for (i = 0; i < a; i++)
	{
		if (c[i] == 9)
		{
			total2++;
		}
	}
	
	total2 = total1 + total2;
	
	if (total2 != 6)
	{
		cout << total1 << " " << total2;
	}
	else
	{
		cout << total1 << " " << total2 - 1;
	}
	return 0;
 
}