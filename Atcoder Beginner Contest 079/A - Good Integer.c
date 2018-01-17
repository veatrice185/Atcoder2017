#include<iostream>
using namespace std;
#define MAX 100
 
int main()
{
	char a, b, c, d;
 
	cin >> a >> b >> c >> d;
 
	if (a == b)
	{
		if (b == c)
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
	}
	else if (b == c)
	{
		if (c == d)
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
	}
	else
	{
		cout << "No";
	}
	return 0;
}