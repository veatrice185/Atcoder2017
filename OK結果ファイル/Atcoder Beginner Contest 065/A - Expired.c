#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
 
int main()
{
	int x;
	int a;
	int b;
 
	cin >> x >> a >> b;
 
	if (a >= b)
	{
		cout << "delicious";
	}
	else
	{
		if (b - a > x)
		{
			cout << "dangerous";
		}
		else if (b - a <= x)
		{
			cout << "safe";
		}
	}
 
	return 0;
}