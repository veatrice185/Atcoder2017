#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;
#define MAX 100000
 
int main()
{
	int a, b, c, d;
	int total;
	cin >> a >> b >> c >> d;
 
	if (a <= c && b>=c)
	{
		if (d <= b)
			total = d - c;
		else
			total = b - c;
	}
	else if (c > b)
	{
		cout << "0";
		return 0;
	}
 
	else if (a >= c && a <= d)
	{
		if (b <= d)
		{
			total = b - a;
		}
		else
			total = d - a;
	}
 
	else if (a > d)
	{
		cout << "0";
		return 0;
	}
 
	else
	{
		total = b - a;
	}
 
 
 
	cout << total;
	return 0;
 
}